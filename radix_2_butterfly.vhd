----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:53:16 10/21/2016 
-- Design Name: 
-- Module Name:    radix_2_butterfly - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use work.fft_pkg.ALL;
use ieee.std_logic_arith.all;
use ieee.std_logic_signed.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity radix_2_butterfly is
port( clk :in std_logic;
      reset: in std_logic;
		in1,in2: in complex; --inputs for radix-2
		out1,out2: out complex --outputs 
	);
end radix_2_butterfly;

architecture Behavioral of radix_2_butterfly is


	COMPONENT add_16
	PORT(
		clk : IN std_logic;
		in1 : IN complex;
		in2 : IN complex;          
		sum : OUT complex
		);
	END COMPONENT;
		COMPONENT sub
	PORT(
		clk : IN std_logic;
		in1 : IN complex;
		in2 : IN complex;          
		diff : OUT complex
		);
	END COMPONENT;
	signal add_in1,add_in2,sum,sub_in1,sub_in2,diff:complex :=(x"0000",x"0000");


	
begin
	Inst_add_16: add_16 PORT MAP(
		clk => clk,
		in1 => add_in1,
		in2 => add_in2,
		sum => sum
	);
	Inst_sub: sub PORT MAP(
		clk => clk,
		in1 => sub_in1,
		in2 => sub_in2,
		diff => diff
	);
process(clk,reset)
begin
--if(reset='1') then
--
--out2.re<=((others =>'0'));
--out2.im<=((others=>'0'));
--out1.re<=((others =>'0'));
----out1.im<=((others =>'0'));
--
--end if;
if(clk='1' and clk'event) then

add_in1<=in1;
add_in2<=in2;
sub_in1<=in1;
sub_in2<=in2;
--out1 <= add(in1,in2);
--out2 <= sub(in1,in2);


end if;
end process;

process(clk)
begin
if(clk='1' and clk'event) then
out1<=sum;
out2<=diff;
end if;
end process;
end Behavioral;

