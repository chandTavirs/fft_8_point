library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

---------------------------- Entity declaration -------------------------------------
entity Top_fft_256_r is
   PORT(
      clk       : IN  std_logic;--processing clock
      reset     : IN  std_logic;-- Asychronous reset
      real_in   : IN  std_logic_vector(15 downto 0);-- real in fft
      imag_in   : IN  std_logic_vector(15 downto 0);-- imaginary in FFT
      valid_in  : IN  std_logic;--valid in FFt
      start     : IN  std_logic;--start FFT
      real_out  : OUT std_logic_vector(15 downto 0);-- real out FFT
      imag_out  : OUT std_logic_vector(15 downto 0);-- Imaginary out FFT
      valid_out : OUT std_logic-- valid out FFT
      );
end Top_fft_256_r;

---------------------------- Architecture begin here -------------------------------
architecture Behavioral of Top_fft_256_r is

--------------------------- Components declaration ---------------------------------
  COMPONENT radix4_butterfly_rx
    PORT(
      clk   : in  std_logic;                     -- Processing clock
      reset : in  std_logic;                     -- Asychronous rese
      ri0   : IN  std_logic_vector(15 downto 0); -- input1 real part
      ri1   : IN  std_logic_vector(15 downto 0); -- input2 real part
      ri2   : IN  std_logic_vector(15 downto 0); -- input3 real part
      ri3   : IN  std_logic_vector(15 downto 0); -- input4 real part
      ii0   : IN  std_logic_vector(15 downto 0); -- input1 imaginary part
      ii1   : IN  std_logic_vector(15 downto 0); -- input2 imaginary part
      ii2   : IN  std_logic_vector(15 downto 0); -- input3 imaginary part
      ii3   : IN  std_logic_vector(15 downto 0); -- input4 imaginary part
      co1   : IN  std_logic_vector(15 downto 0); -- Cos of the angle1
      co2   : IN  std_logic_vector(15 downto 0); -- Cos of the angle2
      co3   : IN  std_logic_vector(15 downto 0); -- Cos of the angle3
      si1   : IN  std_logic_vector(15 downto 0); -- Sin of the angle1
      si2   : IN  std_logic_vector(15 downto 0); -- Sin of the angle2
      si3   : IN  std_logic_vector(15 downto 0); -- Sin of the angle3
      ro0   : OUT std_logic_vector(15 downto 0); -- real part of the output1
      ro1   : OUT std_logic_vector(15 downto 0); -- real part of the output2
      ro2   : OUT std_logic_vector(15 downto 0); -- real part of the output3
      ro3   : OUT std_logic_vector(15 downto 0); -- real part of the output4
      io0   : OUT std_logic_vector(15 downto 0); -- imaginary part of the output1
      io1   : OUT std_logic_vector(15 downto 0); -- imaginary part of the output2
      io2   : OUT std_logic_vector(15 downto 0); -- imaginary part of the output3
      io3   : OUT std_logic_vector(15 downto 0)  -- imaginary part of the output4
      );
  END COMPONENT;

  COMPONENT ram_stage1_rx
    PORT(
      clk                 : IN  std_logic;  -- processing clock                    
      reset               : in  std_logic;  -- Asynchronous reset
      wr                  : IN  std_logic;  -- Write enable signal
      Mux_sel             : in  std_logic_vector(1 downto 0);  -- Mux selection line
      wadd                : IN  std_logic_vector(7 downto 0);  -- write address signal 
      radd                : IN  std_logic_vector(5 downto 0);  -- read address signal 
      data_in1            : IN  std_logic_vector(31 downto 0); -- input data1 to store into fifo
      data_in2            : IN  std_logic_vector(31 downto 0); -- input data2 to store into fifo
      data_in3            : IN  std_logic_vector(31 downto 0); -- input data3 to store into fifo
      data_in4            : IN  std_logic_vector(31 downto 0); -- input data4 to store into fifo
      data_out1           : OUT std_logic_vector(31 downto 0); -- output data1 from fifo
      data_out2           : OUT std_logic_vector(31 downto 0); -- output data2 from fifo
      data_out3           : OUT std_logic_vector(31 downto 0); -- output data3 from fifo
      data_out4           : OUT std_logic_vector(31 downto 0); -- output data4 from fifo
      data_out_final_real : out std_logic_vector(15 downto 0); -- Real parat of the output
      data_out_final_Imag : out std_logic_vector(15 downto 0); -- Imaginary part of the output
      Valid_out           : out std_logic-- Output data valid signal
      );
  END COMPONENT;


  COMPONENT ram_stage3_rx
    PORT(
      clk      : IN  std_logic; -- Processing clock
      wr       : IN  std_logic;-- Write enable signal   
      wadd     : IN  std_logic_vector(5 downto 0); -- Write address
      radd     : IN  std_logic_vector(5 downto 0); -- Read address
      data_in  : IN  std_logic_vector(31 downto 0);-- Input data to store into ram
      data_out : OUT std_logic_vector(31 downto 0)-- Output data from ram
      );
  END COMPONENT;


  COMPONENT ram_stage2_rx
    PORT(
      clk      : IN  std_logic;
      reset    : in  std_logic;
      wr       : IN  std_logic;
      wadd     : IN  std_logic_vector(5 downto 0);
      radd     : IN  std_logic_vector(8 downto 0);
      data_in1 : IN  std_logic_vector(31 downto 0);
      data_in2 : IN  std_logic_vector(31 downto 0);
      data_in3 : IN  std_logic_vector(31 downto 0);
      data_in4 : IN  std_logic_vector(31 downto 0);
      data_out : OUT std_logic_vector(31 downto 0)
      );
  END COMPONENT;


---------------- Signals declaration ---------------------------------------------
  signal Real_1st_in_0    : std_logic_vector(15 downto 0);
  signal Real_1st_in_1    : std_logic_vector(15 downto 0);
  signal Real_1st_in_2    : std_logic_vector(15 downto 0);
  signal Real_1st_in_3    : std_logic_vector(15 downto 0);
  signal Imag_1st_in_0    : std_logic_vector(15 downto 0);
  signal Imag_1st_in_1    : std_logic_vector(15 downto 0);
  signal Imag_1st_in_2    : std_logic_vector(15 downto 0);
  signal Imag_1st_in_3    : std_logic_vector(15 downto 0);
  signal Real_2st_in_0    : std_logic_vector(15 downto 0);
  signal Real_2st_in_1    : std_logic_vector(15 downto 0);
  signal Real_2st_in_2    : std_logic_vector(15 downto 0);
  signal Real_2st_in_3    : std_logic_vector(15 downto 0);
  signal Imag_2st_in_0    : std_logic_vector(15 downto 0);
  signal Imag_2st_in_1    : std_logic_vector(15 downto 0);
  signal Imag_2st_in_2    : std_logic_vector(15 downto 0);
  signal Imag_2st_in_3    : std_logic_vector(15 downto 0);
  signal wr_add_1st       : std_logic_vector(8 downto 0);
  signal wr_en1           : std_logic; 
  signal wr_en2           : std_logic; 
  signal wr_en3           : std_logic; 
  signal enable_wr_count1 : std_logic;
  signal Data_in_s        : std_logic_vector(31 downto 0);
  signal wr_add_s         : std_logic_vector(5 downto 0);
  signal rd_add_s         : std_logic_vector(5 downto 0);
  signal Rd_add_s_d       : std_logic_vector(6 downto 0);
  signal rd_add_ss        : std_logic_vector(6 downto 0);
  signal rd_add_ss2       : std_logic_vector(5 downto 0);
  signal Data_out01_s     : std_logic_vector(31 downto 0);
  signal Data_out02_s     : std_logic_vector(31 downto 0);
  signal Data_out03_s     : std_logic_vector(31 downto 0);
  signal Data_out11_s     : std_logic_vector(31 downto 0);
  signal Data_out12_s     : std_logic_vector(31 downto 0);
  signal Data_out13_s     : std_logic_vector(31 downto 0);
  signal Data_out14_s     : std_logic_vector(31 downto 0);
  signal enable_rd_count1 : std_logic;
  signal Data1            : std_logic_vector(31 downto 0);
  signal Data2            : std_logic_vector(31 downto 0);
  signal Data3            : std_logic_vector(31 downto 0);
  signal Data4            : std_logic_vector(31 downto 0);
  signal enable_rd_count2 : std_logic;
  signal rd_add_s2        : std_logic_vector(8 downto 0);
  signal rd_add_s2_d      : std_logic_vector(8 downto 0);
  signal wr_add_ss        : std_logic_vector(8 downto 0);
  signal wr_add_ss_d      : std_logic_vector(8 downto 0);
  signal wr_add_sss       : std_logic_vector(8 downto 0);
  signal wr_en_ram2       : std_logic;
  signal wr_add_ss2       : std_logic_vector(7 downto 0);
  signal Co1              : std_logic_vector(15 downto 0);
  signal Co2              : std_logic_vector(15 downto 0);
  signal Co3              : std_logic_vector(15 downto 0);
  signal So1              : std_logic_vector(15 downto 0);
  signal So2              : std_logic_vector(15 downto 0);
  signal So3              : std_logic_vector(15 downto 0);
  SIGNAL co_1_1           : std_logic_vector(15 downto 0);
  SIGNAL co_2_1           : std_logic_vector(15 downto 0);
  SIGNAL co_3_1           : std_logic_vector(15 downto 0);
  SIGNAL si_1_1           : std_logic_vector(15 downto 0);
  SIGNAL si_2_1           : std_logic_vector(15 downto 0);
  SIGNAL si_3_1           : std_logic_vector(15 downto 0);
  type state1 is (rst, s0, s1, s2, s3, s4);
  signal ps1, ns1                       : state1;

  type state2 is (rst, s0, s1, s2, s3, s4);
  signal ps2, ns2 : state2;

  type state3 is (rst, s0, s1, s2, s3, s4);
  signal ps3, ns3 : state3;

  type state4 is (rst, s0, s1, s2, s3, s4);
  signal ps4, ns4 : state4;

  signal mux_sel_s : std_logic_vector(1 downto 0);


  signal Real_out1 : std_logic_vector(15 downto 0);
  signal Real_out2 : std_logic_vector(15 downto 0);
  signal Real_out3 : std_logic_vector(15 downto 0);
  signal Real_out4 : std_logic_vector(15 downto 0);

  signal Imag_out1 : std_logic_vector(15 downto 0);
  signal Imag_out2 : std_logic_vector(15 downto 0);
  signal Imag_out3 : std_logic_vector(15 downto 0);
  signal Imag_out4 : std_logic_vector(15 downto 0);

  signal ri0_s : std_logic_vector(15 downto 0);
  signal ri1_s : std_logic_vector(15 downto 0);
  signal ri2_s : std_logic_vector(15 downto 0);
  signal ri3_s : std_logic_vector(15 downto 0);

  signal ii0_s : std_logic_vector(15 downto 0);
  signal ii1_s : std_logic_vector(15 downto 0);
  signal ii2_s : std_logic_vector(15 downto 0);
  signal ii3_s : std_logic_vector(15 downto 0);

  signal ri0_s1 : std_logic_vector(15 downto 0);
  signal ri1_s1 : std_logic_vector(15 downto 0);
  signal ri2_s1 : std_logic_vector(15 downto 0);
  signal ri3_s1 : std_logic_vector(15 downto 0);

  signal ii0_s1 : std_logic_vector(15 downto 0);
  signal ii1_s1 : std_logic_vector(15 downto 0);
  signal ii2_s1 : std_logic_vector(15 downto 0);
  signal ii3_s1 : std_logic_vector(15 downto 0);

  signal enable_wr_count1_d1 : std_logic;
  signal enable_wr_count1_d2 : std_logic;

-------------------- ROM declaration and initialization ---------------------------------
type rom is array(0 to 63) of std_logic_vector(15 downto 0);

  constant co_11:rom:=( x"4000",
x"3ffb",
x"3fec",
x"3fd3",
x"3fb1",
x"3f84",
x"3f4e",
x"3f0e",
x"3ec5",
x"3e71",
x"3e14",
x"3dae",
x"3d3e",
x"3cc5",
x"3c42",
x"3bb6",
x"3b20",
x"3a82",
x"39da",
x"392a",
x"3871",
x"37af",
x"36e5",
x"3612",
x"3536",
x"3453",
x"3367",
x"3274",
x"3179",
x"3076",
x"2f6b",
x"2e5a",
x"2d41",
x"2c21",
x"2afa",
x"29cd",
x"2899",
x"275f",
x"261f",
x"24da",
x"238e",
x"223d",
x"20e7",
x"1f8b",
x"1e2b",
x"1cc6",
x"1b5d",
x"19ef",
x"187d",
x"1708",
x"158f",
x"1413",
x"1294",
x"1111",
x"0f8c",
x"0e05",
x"0c7c",
x"0af1",
x"0964",
x"07d5",
x"0645",
x"04b5",
x"0323",
x"0192"
		 );
  constant co_12:rom:=( x"4000",
x"4000",
x"4000",
x"4000",
x"3fb1",
x"3fb1",
x"3fb1",
x"3fb1",
x"3ec5",
x"3ec5",
x"3ec5",
x"3ec5",
x"3d3e",
x"3d3e",
x"3d3e",
x"3d3e",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3871",
x"3871",
x"3871",
x"3871",
x"3536",
x"3536",
x"3536",
x"3536",
x"3179",
x"3179",
x"3179",
x"3179",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2899",
x"2899",
x"2899",
x"2899",
x"238e",
x"238e",
x"238e",
x"238e",
x"1e2b",
x"1e2b",
x"1e2b",
x"1e2b",
x"187d",
x"187d",
x"187d",
x"187d",
x"1294",
x"1294",
x"1294",
x"1294",
x"0c7c",
x"0c7c",
x"0c7c",
x"0c7c",
x"0645",
x"0645",
x"0645",
x"0645"
				);
  constant co_13:rom:=(x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d"
					 );

  constant co_21:rom:=( x"4000",
x"3fec",
x"3fb1",
x"3f4e",
x"3ec5",
x"3e14",
x"3d3e",
x"3c42",
x"3b20",
x"39da",
x"3871",
x"36e5",
x"3536",
x"3367",
x"3179",
x"2f6b",
x"2d41",
x"2afa",
x"2899",
x"261f",
x"238e",
x"20e7",
x"1e2b",
x"1b5d",
x"187d",
x"158f",
x"1294",
x"0f8c",
x"0c7c",
x"0964",
x"0645",
x"0323",
x"0000",
x"fcdd",
x"f9bb",
x"f69c",
x"f384",
x"f074",
x"ed6c",
x"ea71",
x"e783",
x"e4a3",
x"e1d5",
x"df19",
x"dc72",
x"d9e1",
x"d767",
x"d506",
x"d2bf",
x"d095",
x"ce87",
x"cc99",
x"caca",
x"c91b",
x"c78f",
x"c626",
x"c4e0",
x"c3be",
x"c2c2",
x"c1ec",
x"c13b",
x"c0b2",
x"c04f",
x"c014"
				 	);

  constant co_22:rom:=( x"4000",
x"4000",
x"4000",
x"4000",
x"3ec5",
x"3ec5",
x"3ec5",
x"3ec5",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3536",
x"3536",
x"3536",
x"3536",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"238e",
x"238e",
x"238e",
x"238e",
x"187d",
x"187d",
x"187d",
x"187d",
x"0c7c",
x"0c7c",
x"0c7c",
x"0c7c",
x"0000",
x"0000",
x"0000",
x"0000",
x"f384",
x"f384",
x"f384",
x"f384",
x"e783",
x"e783",
x"e783",
x"e783",
x"dc72",
x"dc72",
x"dc72",
x"dc72",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"caca",
x"caca",
x"caca",
x"caca",
x"c4e0",
x"c4e0",
x"c4e0",
x"c4e0",
x"c13b",
x"c13b",
x"c13b",
x"c13b"
					);

  constant co_23:rom:=( x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf"
					);
  
  constant co_31:rom:=( x"4000",
x"3fd3",
x"3f4e",
x"3e71",
x"3d3e",
x"3bb6",
x"39da",
x"37af",
x"3536",
x"3274",
x"2f6b",
x"2c21",
x"2899",
x"24da",
x"20e7",
x"1cc6",
x"187d",
x"1413",
x"0f8c",
x"0af1",
x"0645",
x"0192",
x"fcdd",
x"f82b",
x"f384",
x"eeef",
x"ea71",
x"e611",
x"e1d5",
x"ddc3",
x"d9e1",
x"d633",
x"d2bf",
x"cf8a",
x"cc99",
x"c9ee",
x"c78f",
x"c57e",
x"c3be",
x"c252",
x"c13b",
x"c07c",
x"c014",
x"c005",
x"c04f",
x"c0f2",
x"c1ec",
x"c33b",
x"c4e0",
x"c6d6",
x"c91b",
x"cbad",
x"ce87",
x"d1a6",
x"d506",
x"d8a1",
x"dc72",
x"e075",
x"e4a3",
x"e8f8",
x"ed6c",
x"f1fb",
x"f69c",
x"fb4b"
					);
   
  constant co_32:rom:=( x"4000",
x"4000",
x"4000",
x"4000",
x"3d3e",
x"3d3e",
x"3d3e",
x"3d3e",
x"3536",
x"3536",
x"3536",
x"3536",
x"2899",
x"2899",
x"2899",
x"2899",
x"187d",
x"187d",
x"187d",
x"187d",
x"0645",
x"0645",
x"0645",
x"0645",
x"f384",
x"f384",
x"f384",
x"f384",
x"e1d5",
x"e1d5",
x"e1d5",
x"e1d5",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"c78f",
x"c78f",
x"c78f",
x"c78f",
x"c13b",
x"c13b",
x"c13b",
x"c13b",
x"c04f",
x"c04f",
x"c04f",
x"c04f",
x"c4e0",
x"c4e0",
x"c4e0",
x"c4e0",
x"ce87",
x"ce87",
x"ce87",
x"ce87",
x"dc72",
x"dc72",
x"dc72",
x"dc72",
x"ed6c",
x"ed6c",
x"ed6c",
x"ed6c"
				);

  constant co_33:rom:=(	x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"4000",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"d2bf",
x"c4e0",
x"c4e0",
x"c4e0",
x"c4e0",
x"c4e0",
x"c4e0",
x"c4e0",
x"c4e0",
x"c4e0",
x"c4e0",
x"c4e0",
x"c4e0",
x"c4e0",
x"c4e0",
x"c4e0",
x"c4e0"
				);


  constant si_11:rom:=( x"0000",
x"0192",
x"0323",
x"04b5",
x"0645",
x"07d5",
x"0964",
x"0af1",
x"0c7c",
x"0e05",
x"0f8c",
x"1111",
x"1294",
x"1413",
x"158f",
x"1708",
x"187d",
x"19ef",
x"1b5d",
x"1cc6",
x"1e2b",
x"1f8b",
x"20e7",
x"223d",
x"238e",
x"24da",
x"261f",
x"275f",
x"2899",
x"29cd",
x"2afa",
x"2c21",
x"2d41",
x"2e5a",
x"2f6b",
x"3076",
x"3179",
x"3274",
x"3367",
x"3453",
x"3536",
x"3612",
x"36e5",
x"37af",
x"3871",
x"392a",
x"39da",
x"3a82",
x"3b20",
x"3bb6",
x"3c42",
x"3cc5",
x"3d3e",
x"3dae",
x"3e14",
x"3e71",
x"3ec5",
x"3f0e",
x"3f4e",
x"3f84",
x"3fb1",
x"3fd3",
x"3fec",
x"3ffb"
				);
  constant si_12:rom:=(	x"0000",
x"0000",
x"0000",
x"0000",
x"0645",
x"0645",
x"0645",
x"0645",
x"0c7c",
x"0c7c",
x"0c7c",
x"0c7c",
x"1294",
x"1294",
x"1294",
x"1294",
x"187d",
x"187d",
x"187d",
x"187d",
x"1e2b",
x"1e2b",
x"1e2b",
x"1e2b",
x"238e",
x"238e",
x"238e",
x"238e",
x"2899",
x"2899",
x"2899",
x"2899",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"3179",
x"3179",
x"3179",
x"3179",
x"3536",
x"3536",
x"3536",
x"3536",
x"3871",
x"3871",
x"3871",
x"3871",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3d3e",
x"3d3e",
x"3d3e",
x"3d3e",
x"3ec5",
x"3ec5",
x"3ec5",
x"3ec5",
x"3fb1",
x"3fb1",
x"3fb1",
x"3fb1"
			);

  constant si_13:rom:=(	x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"187d",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20"
			);

  constant si_21:rom:=( x"0000",
x"0323",
x"0645",
x"0964",
x"0c7c",
x"0f8c",
x"1294",
x"158f",
x"187d",
x"1b5d",
x"1e2b",
x"20e7",
x"238e",
x"261f",
x"2899",
x"2afa",
x"2d41",
x"2f6b",
x"3179",
x"3367",
x"3536",
x"36e5",
x"3871",
x"39da",
x"3b20",
x"3c42",
x"3d3e",
x"3e14",
x"3ec5",
x"3f4e",
x"3fb1",
x"3fec",
x"3fff",
x"3fec",
x"3fb1",
x"3f4e",
x"3ec5",
x"3e14",
x"3d3e",
x"3c42",
x"3b20",
x"39da",
x"3871",
x"36e5",
x"3536",
x"3367",
x"3179",
x"2f6b",
x"2d41",
x"2afa",
x"2899",
x"261f",
x"238e",
x"20e7",
x"1e2b",
x"1b5d",
x"187d",
x"158f",
x"1294",
x"0f8c",
x"0c7c",
x"0964",
x"0645",
x"0323"
		);

  constant si_22:rom:=( x"0000",
x"0000",
x"0000",
x"0000",
x"0c7c",
x"0c7c",
x"0c7c",
x"0c7c",
x"187d",
x"187d",
x"187d",
x"187d",
x"238e",
x"238e",
x"238e",
x"238e",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"3536",
x"3536",
x"3536",
x"3536",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3ec5",
x"3ec5",
x"3ec5",
x"3ec5",
x"3fff",
x"3fff",
x"3fff",
x"3fff",
x"3ec5",
x"3ec5",
x"3ec5",
x"3ec5",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3536",
x"3536",
x"3536",
x"3536",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"238e",
x"238e",
x"238e",
x"238e",
x"187d",
x"187d",
x"187d",
x"187d",
x"0c7c",
x"0c7c",
x"0c7c",
x"0c7c"
		);

  constant si_23:rom:=(	x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"3fff",
x"3fff",
x"3fff",
x"3fff",
x"3fff",
x"3fff",
x"3fff",
x"3fff",
x"3fff",
x"3fff",
x"3fff",
x"3fff",
x"3fff",
x"3fff",
x"3fff",
x"3fff",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41"
					);

	constant si_31:rom:=(x"0000",
x"04b5",
x"0964",
x"0e05",
x"1294",
x"1708",
x"1b5d",
x"1f8b",
x"238e",
x"275f",
x"2afa",
x"2e5a",
x"3179",
x"3453",
x"36e5",
x"392a",
x"3b20",
x"3cc5",
x"3e14",
x"3f0e",
x"3fb1",
x"3ffb",
x"3fec",
x"3f84",
x"3ec5",
x"3dae",
x"3c42",
x"3a82",
x"3871",
x"3612",
x"3367",
x"3076",
x"2d41",
x"29cd",
x"261f",
x"223d",
x"1e2b",
x"19ef",
x"158f",
x"1111",
x"0c7c",
x"07d5",
x"0323",
x"fe6e",
x"f9bb",
x"f50f",
x"f074",
x"ebed",
x"e783",
x"e33a",
x"df19",
x"db26",
x"d767",
x"d3df",
x"d095",
x"cd8c",
x"caca",
x"c851",
x"c626",
x"c44a",
x"c2c2",
x"c18f",
x"c0b2",
x"c02d"
			);

	constant si_32:rom:=(x"0000",
x"0000",
x"0000",
x"0000",
x"1294",
x"1294",
x"1294",
x"1294",
x"238e",
x"238e",
x"238e",
x"238e",
x"3179",
x"3179",
x"3179",
x"3179",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3fb1",
x"3fb1",
x"3fb1",
x"3fb1",
x"3ec5",
x"3ec5",
x"3ec5",
x"3ec5",
x"3871",
x"3871",
x"3871",
x"3871",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"1e2b",
x"1e2b",
x"1e2b",
x"1e2b",
x"0c7c",
x"0c7c",
x"0c7c",
x"0c7c",
x"f9bb",
x"f9bb",
x"f9bb",
x"f9bb",
x"e783",
x"e783",
x"e783",
x"e783",
x"d767",
x"d767",
x"d767",
x"d767",
x"caca",
x"caca",
x"caca",
x"caca",
x"c2c2",
x"c2c2",
x"c2c2",
x"c2c2"
				);

	constant si_33:rom:=(x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"0000",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"3b20",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"2d41",
x"e783",
x"e783",
x"e783",
x"e783",
x"e783",
x"e783",
x"e783",
x"e783",
x"e783",
x"e783",
x"e783",
x"e783",
x"e783",
x"e783",
x"e783",
x"e783"
		);
signal wr_en_ram3 : std_logic;
signal wr_en_ram4 : std_logic;
signal wr_en_ram5 : std_logic;

begin

------ radix4_butterfly_rx module instantiation
  Inst_radix4_butterfly : radix4_butterfly_rx PORT MAP(
    clk   => clk,
    reset => reset,
    ri0   => ri0_s1,
    ri1   => ri1_s1,
    ri2   => ri2_s1,
    ri3   => ri3_s1,
    ii0   => ii0_s1,
    ii1   => ii1_s1,
    ii2   => ii2_s1,
    ii3   => ii3_s1,
    co1   => Co_1_1,
    co2   => Co_2_1,
    co3   => Co_3_1,
    si1   => Si_1_1,
    si2   => Si_2_1,
    si3   => Si_3_1,
    ro0   => Real_out1,
    ro1   => Real_out2,
    ro2   => Real_out3,
    ro3   => Real_out4,
    io0   => Imag_out1,
    io1   => Imag_out2,
    io2   => Imag_out3,
    io3   => Imag_out4

    );
process(clk,reset)
begin
  if reset = '1' then
    ri0_s1 <= (others => '0');
    ri1_s1 <= (others => '0');
    ri2_s1 <= (others => '0');
    ri3_s1 <= (others => '0');
    ii0_s1 <= (others => '0');
    ii1_s1 <= (others => '0');
    ii2_s1 <= (others => '0');
    ii3_s1 <= (others => '0');
    Co_1_1 <= (others => '0');
    Co_2_1 <= (others => '0');
    Co_3_1 <= (others => '0');
    Si_1_1 <= (others => '0');
    Si_2_1 <= (others => '0');
    Si_3_1 <= (others => '0');
  elsif clk = '1' and clk'event then
    ri0_s1 <= ri0_s;
    ri1_s1 <= ri1_s;
    ri2_s1 <= ri2_s;
    ri3_s1 <= ri3_s;
    ii0_s1 <= ii0_s;
    ii1_s1 <= ii1_s;
    ii2_s1 <= ii2_s;
    ii3_s1 <= ii3_s;
    Co_1_1 <= Co1;
    Co_2_1 <= Co2;
    Co_3_1 <= Co3;
    Si_1_1 <= So1;
    Si_2_1 <= So2;
    Si_3_1 <= So3;
  end if;
end process;


Data1 <= Real_out1 & Imag_out1;
Data2 <= Real_out2 & Imag_out2;
Data3 <= Real_out3 & Imag_out3;
Data4 <= Real_out4 & Imag_out4;


Process(Clk,Reset)
begin
  if Reset = '1' then
    wr_add_1st   <= (others  => '0');
  elsif Clk'event and Clk = '1' then
    if start = '1' then
      wr_add_1st <= ( others => '0');
    elsif valid_in = '1' then
      wr_add_1st <= wr_add_1st + '1';
    end if;
  end if;
 end process;
 
 Wr_en1 <= '1' when wr_add_1st >= 0 and wr_add_1st <= 63 else
           '0';
           
 Wr_en2 <= '1' when wr_add_1st >= 64 and wr_add_1st <= 127 else
           '0';           
           
 Wr_en3 <= '1' when wr_add_1st >= 128 and wr_add_1st <= 191 else
           '0';           
  
           
           
 Inst_ram_stage10 : ram_stage3_rx PORT MAP(
   clk      => Clk,
   wr       => Wr_en1,
   wadd     => wr_add_s,
   radd     => rd_add_s,
   data_in  => Data_in_s,
   data_out => Data_out01_s
   );

  Inst_ram_stage11 : ram_stage3_rx PORT MAP(
    clk      => Clk,
    wr       => Wr_en2,
    wadd     => wr_add_s,
    radd     => rd_add_s,
    data_in  => Data_in_s,
    data_out => Data_out02_s
    );

  Inst_ram_stage12 : ram_stage3_rx PORT MAP(
    clk      => Clk,
    wr       => Wr_en3,
    wadd     => wr_add_s,
    radd     => rd_add_s,
    data_in  => Data_in_s,
    data_out => Data_out03_s
    );
	
       
Data_in_s  <= Real_in & Imag_in;  

wr_add_s   <=  wr_add_1st(5 downto 0);  
Real_1st_in_0 <= Data_out01_s (31 downto 16);
Imag_1st_in_0 <= Data_out01_s (15 downto 0);

Real_1st_in_1 <= Data_out02_s (31 downto 16);
Imag_1st_in_1 <= Data_out02_s (15 downto 0);

Real_1st_in_2 <= Data_out03_s (31 downto 16);
Imag_1st_in_2 <= Data_out03_s (15 downto 0);


Real_1st_in_3 <= Real_in;
Imag_1st_in_3 <= Imag_in;
      
           
 Process(Clk,reset)
   begin
     if Reset = '1' then
       ps1 <= Rst;
     elsif Clk'event and Clk = '1' then
       ps1 <= ns1;
     end if;
  end process;
  
  process(ps1,wr_add_1st,Rd_add_ss)
    begin
      case ps1 is
        when Rst => if wr_add_1st = 189 then  -- 253
                                  ns1 <= s0;
                                else
                                  ns1 <= Rst;
                                end if;

        when s0 => if Rd_add_ss = 63 then
                       ns1 <= Rst;
                     else
                       ns1 <= s0;
                     end if;

        when others => ns1 <= Rst;
      end case;
   end process;
   process(ps1,wr_add_1st)
    begin
      case ps1 is
         when Rst =>	enable_rd_count1  <= '0';
         		     
         when s0  => enable_rd_count1  <= '1';
         		      
         when others => enable_rd_count1  <= '0';
     end case;
   end process;  
   
process(Clk,Reset,enable_rd_count1,wr_add_1st,start)
  begin
    if Reset = '1' then		----- add
      Rd_add_ss <= ( others => '1');
    elsif Clk'event and Clk = '1' then
      if Rd_add_ss = 64 then
        Rd_add_ss <= ( others => '1');
      elsif enable_rd_count1 = '1' then
        Rd_add_ss <= Rd_add_ss + '1';
      end if;
    end if;
  end process;
  
  Rd_add_s <= Rd_add_ss(5 downto 0);
  
  
  process(Clk,reset,Rd_add_s,Rd_add_ss2,Rd_add_s2,wr_add_ss)
    begin
     if reset = '1' then
       Rd_add_s_d <= ( others => '1');
--       Rd_add_ss2_d <= ( others => '1');
       Rd_add_s2_d  <= ( others => '1');
       wr_add_ss_d <= ( others => '1');
     elsif Clk'event and Clk = '1' then
      Rd_add_s_d <= Rd_add_ss;
 --     Rd_add_ss2_d <=  '1' & Rd_add_s2;
      Rd_add_s2_d  <= Rd_add_s2;
      wr_add_ss_d <= wr_add_ss;
    end if;
  end process;
       
        
  
-- ***************************************************************************************

Process(Clk,reset)
   begin
     if Reset = '1' then
       ps2 <= Rst;
     elsif Clk'event and Clk = '1' then
       ps2 <= ns2;
     end if;
  end process;
  
  process(ps2,wr_add_1st,wr_add_ss)
    begin
      case ps2 is
         when Rst =>		if wr_add_1st = 189 then -- 253
         		      ns2 <= s0;
         		      else
         		      ns2 <= Rst;
         		      end if;
         
         when s0  =>  if wr_add_ss = 254 and wr_add_1st = 189 then 
                      ns2 <= s0;
                      elsif wr_add_ss = 254 then
                      ns2 <= rst;
                      else
         		      ns2 <= s0;
         		      end if;

         when others => ns2 <= Rst;
     end case;
   end process;
   process(ps2,wr_add_1st)
    begin
      case ps2 is
         when Rst =>	enable_wr_count1  <= '0';
         		     
         when s0  => enable_wr_count1  <= '1';
         		      
         when others => enable_wr_count1  <= '0';
     end case;
   end process;          
   
   process(Clk,Reset,enable_wr_count1,start,wr_add_ss)
  begin
    if Reset = '1' then		----- add
      wr_add_ss <= ( others => '1');
    elsif Clk'event and Clk = '1' then
--      if wr_add_ss = 255 then
--       wr_add_ss <= ( others => '1');
      if enable_wr_count1 = '1' then
        if wr_add_ss = 255 then
         wr_add_ss <= ( others => '0');
        else      
        wr_add_ss <= wr_add_ss + '1';
      end if;
    end if;
   end if; 
  end process;
  
  wr_add_ss2 <= wr_add_ss( 7 downto 0);

  process(Clk,reset,wr_add_ss,enable_wr_count1)
   begin
    if reset = '1' then
     wr_add_sss <= ( others => '1');
     enable_wr_count1_d1 <= '0';
     enable_wr_count1_d2 <= '0';
	  wr_en_ram2 <= '0';
	  wr_en_ram3  <=	'0';
     wr_en_ram4  <='0';
	  wr_en_ram5  <='0';

    elsif Clk'event and Clk = '1' then
	 wr_en_ram2  <= enable_wr_count1_d2;
	 wr_en_ram3  <= wr_en_ram2;
    wr_en_ram4  <= wr_en_ram3;
    wr_en_ram5  <= wr_en_ram4;

     wr_add_sss <= wr_add_ss;
     enable_wr_count1_d1 <= enable_wr_count1;
     enable_wr_count1_d2 <= enable_wr_count1_d1;
    end if;
  end process;
  
--  wr_en_ram2 <= '1' when wr_add_sss >= 0 and wr_add_sss <= 255 else
--                '0';



Inst_ram_stage20: ram_stage1_rx PORT MAP(
		clk  	  => Clk,
		reset     => reset,
		wr 	  => wr_en_ram5,
		Mux_sel   => Mux_sel_s,
		wadd 	  => wr_add_ss2,
		radd 	  => Rd_add_ss2,
		data_in1  => Data1,
		data_in2  => Data2,
		data_in3  => Data3,
		data_in4  => Data4,
		data_out1 => Data_out11_s,
		data_out2 => Data_out12_s,
		data_out3 => Data_out13_s,
		data_out4 => Data_out14_s,
		data_out_final_real => Real_out,
		data_out_final_Imag => Imag_out,
		Valid_out    => Valid_out
);


Real_2st_in_0 <= Data_out11_s (31 downto 16);
Imag_2st_in_0 <= Data_out11_s (15 downto 0);

Real_2st_in_1 <= Data_out12_s (31 downto 16);
Imag_2st_in_1 <= Data_out12_s (15 downto 0);

Real_2st_in_2 <= Data_out13_s (31 downto 16);
Imag_2st_in_2 <= Data_out13_s (15 downto 0);

Real_2st_in_3 <= Data_out14_s (31 downto 16);
Imag_2st_in_3 <= Data_out14_s (15 downto 0);



Process(Clk,reset)
   begin
     if Reset = '1' then
       ps3 <= Rst;
     elsif Clk'event and Clk = '1' then
       ps3 <= ns3;
     end if;
  end process;
  
  process(ps3,Rd_add_s2,Rd_add_ss)
    begin
      case ps3 is
         when Rst =>		if Rd_add_ss = 62 or Rd_add_ss = 63  then	-- 255  or Rd_add_ss = 63
         		      ns3 <= s0;
         		      else
         		      ns3 <= Rst;
         		      end if;
         
         when s0  =>  ns3 <= s1;
         when s1  =>  ns3 <= s2;
         when s2  =>  ns3  <= s3;
         when s3  =>  if Rd_add_ss = 62 then
                      ns3 <= s0;
                      elsif Rd_add_s2 = 63 then -- 255
                      ns3 <= Rst;
                      else
         		      ns3 <= s0;
         		      end if;

         when others => ns3 <= Rst;
     end case;
   end process;
   process(ps3)
    begin
      case ps3 is
         when Rst =>	enable_rd_count2  <= '0';
         		     mux_sel_s         <= "00";  
         		     
         when s0  => enable_rd_count2  <= '1';
                     mux_sel_s         <= "00";
         		      
         when s1  => enable_rd_count2  <= '0';
                     mux_sel_s         <= "01";

         when s2  => enable_rd_count2  <= '0';
                     mux_sel_s         <= "10";
                     
         when s3  => enable_rd_count2  <= '0';
                     mux_sel_s         <= "11";  
                               
         when others => enable_rd_count2  <= '0';
         			mux_sel_s         <= "00";  
     end case;
   end process;  
   
   
   process(Clk,Reset,enable_rd_count2,Rd_add_s2,start)
  begin
    if Reset = '1'  then		--- add
      Rd_add_s2 <= ( others => '1');
    elsif Clk'event and Clk = '1' then
      if enable_rd_count2 = '1' then
        if Rd_add_s2 = 63  then
          Rd_add_s2 <= ( others => '0');
        else
         Rd_add_s2 <= Rd_add_s2 + '1';
      end if;
    end if;
   end if; 
  end process;
  
  Rd_add_ss2 <= Rd_add_s2(5 downto 0);
  
--****************************************************************************************

-- **************************************************************************************
-- ********logic for final stage read ****************************************************
   

-- ***************************************************************************************
              
ri0_s <= 	Real_1st_in_0 when Rd_add_s_d >= 0 and Rd_add_s_d <= 63  else
	  Real_2st_in_0 when rd_add_s2_d >= 0 and rd_add_s2_d <= 192 else
	  ( others => '0');
	  
ii0_s <= 	Imag_1st_in_0 when Rd_add_s_d >= 0 and Rd_add_s_d <= 63  else
	  Imag_2st_in_0 when rd_add_s2_d >= 0 and rd_add_s2_d <= 192 else
	  ( others => '0');	  

ri1_s <= 	Real_1st_in_1 when Rd_add_s_d >= 0 and Rd_add_s_d <= 63  else
	  Real_2st_in_1 when rd_add_s2_d >= 0 and rd_add_s2_d <= 192 else
	  ( others => '0');
	  
ii1_s <= 	Imag_1st_in_1 when Rd_add_s_d >= 0 and Rd_add_s_d <= 63  else
	  Imag_2st_in_1 when rd_add_s2_d >= 0 and rd_add_s2_d <= 192 else
	  ( others => '0');	  
	  
ri2_s <= 	Real_1st_in_2 when Rd_add_s_d >= 0 and Rd_add_s_d <= 63  else
	  Real_2st_in_2 when rd_add_s2_d >= 0 and rd_add_s2_d <= 192 else
	  ( others => '0');
	  
ii2_s <= 	Imag_1st_in_2 when Rd_add_s_d >= 0 and Rd_add_s_d <= 63  else
	  Imag_2st_in_2 when rd_add_s2_d >= 0 and rd_add_s2_d <= 192 else
	  ( others => '0');	  
	  
	  
ri3_s <= 	Real_1st_in_3 when Rd_add_s_d >= 0 and Rd_add_s_d <= 63  else
	  Real_2st_in_3 when rd_add_s2_d >= 0 and rd_add_s2_d <= 192 else
	  ( others => '0');
	  
ii3_s <= 	Imag_1st_in_3 when Rd_add_s_d >= 0 and Rd_add_s_d <= 63  else
	  Imag_2st_in_3 when rd_add_s2_d >= 0 and rd_add_s2_d <= 192 else
	  ( others => '0');	  
	  



Co1 <= co_11(conv_integer(wr_add_ss_d(5 downto 0))) when wr_add_ss_d >= 0 and wr_add_ss_d <= 63 else 
       co_12(conv_integer(wr_add_ss_d(5 downto 0))) when wr_add_ss_d >= 64 and wr_add_ss_d <= 127 else
       co_13(conv_integer(wr_add_ss_d(5 downto 0))) when wr_add_ss_d >= 128 and wr_add_ss_d <= 191 else
       x"4000" when wr_add_ss_d >= 192 and wr_add_ss_d <= 255 else
       ( others => '0');
       
       
Co2 <= co_21(conv_integer(wr_add_ss_d(5 downto 0))) when wr_add_ss_d >= 0 and wr_add_ss_d <= 63 else	
       co_22(conv_integer(wr_add_ss_d(5 downto 0))) when wr_add_ss_d >= 64 and wr_add_ss_d <= 127 else
       co_23(conv_integer(wr_add_ss_d(5 downto 0))) when wr_add_ss_d >= 128 and wr_add_ss_d <= 191 else
       x"4000" when wr_add_ss_d >= 192 and wr_add_ss_d <= 255 else
       ( others => '0');
       
Co3 <= co_31(conv_integer(wr_add_ss_d(5 downto 0))) when wr_add_ss_d >= 0 and wr_add_ss_d <= 63 else	 
       co_32(conv_integer(wr_add_ss_d(5 downto 0))) when wr_add_ss_d >= 64 and wr_add_ss_d <= 127 else
       co_33(conv_integer(wr_add_ss_d(5 downto 0))) when wr_add_ss_d >= 128 and wr_add_ss_d <= 191 else
       x"4000" when wr_add_ss_d >= 192 and wr_add_ss_d <= 255 else
       ( others => '0');    
       
So1 <= si_11(conv_integer(wr_add_ss_d(5 downto 0))) when wr_add_ss_d >= 0 and wr_add_ss_d <= 63 else 
       si_12(conv_integer(wr_add_ss_d(5 downto 0))) when wr_add_ss_d >= 64 and wr_add_ss_d <= 127 else
       si_13(conv_integer(wr_add_ss_d(5 downto 0))) when wr_add_ss_d >= 128 and wr_add_ss_d <= 191 else
       ( others => '0');          

So2 <= si_21(conv_integer(wr_add_ss_d(5 downto 0))) when wr_add_ss_d >= 0 and wr_add_ss_d <= 63 else 
       si_22(conv_integer(wr_add_ss_d(5 downto 0))) when wr_add_ss_d >= 64 and wr_add_ss_d <= 127 else
       si_23(conv_integer(wr_add_ss_d(5 downto 0))) when wr_add_ss_d >= 128 and wr_add_ss_d <= 191 else
       ( others => '0');          
 
So3 <= si_31(conv_integer(wr_add_ss_d(5 downto 0))) when wr_add_ss_d >= 0 and wr_add_ss_d <= 63 else 
       si_32(conv_integer(wr_add_ss_d(5 downto 0))) when wr_add_ss_d >= 64 and wr_add_ss_d <= 127 else
       si_33(conv_integer(wr_add_ss_d(5 downto 0))) when wr_add_ss_d >= 128 and wr_add_ss_d <= 191 else
      ( others => '0');          

end Behavioral;	








