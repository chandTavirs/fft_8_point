--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:31:53 10/22/2016
-- Design Name:   
-- Module Name:   C:/Users/Srivatsan/Desktop/4051/Project/fft_tb.vhd
-- Project Name:  Project
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: fft_8_point
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
library ieee_proposed;
USE ieee.std_logic_1164.ALL;
use work.fft_pkg.all;
use ieee_proposed.fixed_pkg.all;
USE ieee.std_logic_textio.ALL;

library std;
use std.textio.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY fft_tb IS
END fft_tb;
 
ARCHITECTURE behavior OF fft_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT fft_8_point
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         input_fft : IN  com_array_8;
			rfd: out std_logic;
			done: out std_logic;
			dv: out std_logic;
         output_fft : OUT  com_array_8
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
	signal start: std_logic :='0';
   signal input_fft : com_array_8 :=(others=>((others=>'0'),(others=>'0'))); --(((others => x"0000"),(others => x"0000")),((others => x"0000"),(others => x"0000")),((others => x"0000"),(others => x"0000")),((others => x"0000"),(others => x"0000")),((others => x"0000"),(others => x"0000")),((others => x"0000"),(others => x"0000")),((others => x"0000"),(others => x"0000")),((others => x"0000"),(others => x"0000")));

	
	
	
 	--Outputs
   signal output_fft : com_array_8 :=(others=>((others=>'0'),(others=>'0')));--:= (((others => x"0000"),(others => x"0000")),((others => x"0000"),(others => x"0000")),((others => x"0000"),(others => x"0000")),((others => x"0000"),(others => x"0000")),((others => x"0000"),(others => x"0000")),((others => x"0000"),(others => x"0000")),((others => x"0000"),(others => x"0000")),((others => x"0000"),(others => x"0000")));   -- Clock period definitions
   constant clk_period : time := 10 ns;
   signal rfd,done,dv: std_logic;
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: fft_8_point PORT MAP (
          clk => clk,
          reset => reset,
          input_fft => input_fft,
			 rfd=>rfd,
			 done=>done,
			 dv=>dv,
          output_fft => output_fft
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 
		--input_fft<=((x"0002",x"0003"),(x"0005",x"0006"),(x"0008",x"0009"),(x"000b",x"000c"),(x"000e",x"000f"),(x"0011",x"0012"),(x"0014",x"0015"),(x"0017",x"0018"));
      start<='1';
      wait;
   end process;
   read_data: process
	
	file infile1:text is in "test_input_real.txt";
	file infile2:text is in "test_input_imag.txt";
	variable inline1:line;
	variable inline2:line;
	variable data1:  std_logic_vector(15 downto 0);
	variable data2:  std_logic_vector(15 downto 0);
	variable i:integer:=0;
	begin
	if(start='1') then
	if(not endfile(infile1) and not endfile(infile2)) then
	readline(infile1,inline1);
   readline(infile2,inline2);
	read(inline1,data1);
   read(inline2,data2);
	input_fft(i)<=(data1,data2);
	i:=i+1;
	
	end if;
	end if;
	wait for clk_period;
	end process;
	

	--write real part to file
	write_real_data:process
	
	file outfile1: text;--is out "output_real.txt";
	file outfile2: text;
	variable outline1:line;
	variable outline2:line;
	variable data1:std_logic_vector(15 downto 0);
	variable data2:std_logic_vector(15 downto 0);
	variable i:integer:=0;
	begin
	wait for 400 ns;
	file_open(outfile1,"output_real.txt",WRITE_MODE);
   file_open(outfile2,"output_imag.txt",WRITE_MODE);
   for i in 0 to 7 loop
		data1:=output_fft(i).re;
		data2:=output_fft(i).im;
		write(outline1,data1);
		write(outline2,data2);
		writeline(outfile1,outline1);
		writeline(outfile2,outline2);
	end loop;
	file_close(outfile1);
	file_close(outfile2);
	--wait for clk_period;
	end process;
   

END;
