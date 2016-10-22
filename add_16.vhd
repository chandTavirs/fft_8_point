----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:54:10 10/22/2016 
-- Design Name: 
-- Module Name:    add_16 - Behavioral 
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
use work.fft_pkg.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_signed.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity add_16 is
port(
clk:in std_logic;
in1:in complex;
in2:in complex;
sum:out complex);
end add_16;

architecture Behavioral of add_16 is

begin
process(clk)
begin
if(clk='1' and clk'event) then
sum.re<=in1.re+in2.re;
sum.im<=in1.im+in2.im;
end if;
end process;

end Behavioral;

