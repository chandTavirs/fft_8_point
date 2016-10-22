--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:49:34 10/22/2016
-- Design Name:   
-- Module Name:   C:/Users/Srivatsan/Desktop/4051/Project/fft_8_tb.vhd
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
USE ieee.std_logic_1164.ALL;
library STD;
use STD.textio.all;
use ieee.std_logic_textio.all;
use work.fft_pkg.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY fft_8_tb IS
END fft_8_tb;
 
ARCHITECTURE behavior OF fft_8_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT fft_8_point
    PORT(
         input_fft : IN  com_array_8;
         output_fft : OUT  com_array_8
        );
    END COMPONENT;
    

   --Inputs
   signal input_fft : com_array_8;

 	--Outputs
   signal output_fft : com_array_8;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
  -- constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: fft_8_point PORT MAP (
          input_fft => input_fft,
          output_fft => output_fft
        );

   -- Clock process definitions
   --<clock>_process :process
--   begin
--		<clock> <= '0';
--		wait for <clock>_period/2;
--		<clock> <= '1';
--		wait for <clock>_period/2;
--   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

--      wait for <clock>_period*10;

      -- insert stimulus here 
		input_fft<=((x"0002",x"0003"),(x"0005",x"0006"),(x"0008",x"0009"),(x"000b",x"000c"),(x"000e",x"000f"),(x"0011",x"0012"),(x"0014",x"0015"),(x"0017",x"0018"));
--		input_fft(1)<=(x"0005",x"0006");
--		input_fft(2)<=(x"0008",x"0009");
--		input_fft(3)<=(x"000b",x"000c");
--		input_fft(4)<=(x"000e",x"000f");
--		input_fft(5)<=(x"0011",x"0012");
--		input_fft(6)<=(x"0014",x"0015");
--		input_fft(7)<=(x"0017",x"0018");

      wait;
   end process;
--	read_data:process
--	file infile_1 :text is in "text_input_real.txt";
--	file infile_2:text is in "text_input_imag.txt";
--	variable inline1:line;
--	variable inline2:line;
--	variable data_re:std_logic_vector(15 downto 0);
--	variable data_im:std_logic_vector(15 downto 0);
--	variable i:integer:=0;
--	begin
--	if(not endfile(infile_1) and not endfile(infile_2)) then
--	readline(infile_1,inline1);
--	readline(infile_2,inline2);
--	read(inline1,data_re);
--	read(inline2,data_im);
--	input_fft(i).re <= data_re;
--	input_fft(i).im<=data_im;
--	i:=i+1;
--	end if;
--	wait for 100000000 ns;
--	end process;
	
	

END;
