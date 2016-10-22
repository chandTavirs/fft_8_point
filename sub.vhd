----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:09:57 10/22/2016 
-- Design Name: 
-- Module Name:    sub - Behavioral 
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
----------------------------------------------------------------------------------library IEEE;
library ieee;
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

entity sub is
port(
clk:in std_logic;
in1:in complex;
in2:in complex;
diff:out complex);
end sub;

architecture Behavioral of sub is

begin
process(clk)
begin
if(clk='1' and clk'event) then
diff.re<=in1.re-in2.re;
diff.im<=in1.im-in2.im;
end if;
end process;

end Behavioral;
