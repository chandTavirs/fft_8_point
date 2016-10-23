----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:46:40 10/22/2016 
-- Design Name: 
-- Module Name:    fft_8_point - Behavioral 
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

USE ieee.std_logic_1164.ALL;
use work.fft_pkg.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_signed.all;
use work.radix_2_butterfly;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity fft_8_point is
port(
clk:in std_logic;
reset:in std_logic;
input_fft:in com_array_8;
rfd:out std_logic;
done:out std_logic;
dv:out std_logic;
output_fft:out com_array_8
);
end fft_8_point;

architecture Behavioral of fft_8_point is
component radix_2_butterfly is
port(clk:in std_logic;
     reset:in std_logic;
     in1,in2: in complex; --inputs 
     out1,out2: out complex --outputs      
      );
end component;
constant w:com_array_4:=((x"0100",x"0000"),(x"00b5",x"ff4b"),(x"0000",x"ff00"),(x"ff4b",x"ff4b"));
--constant w:com_array_dec_4:=((1.0,0.0),(0.7071,-0.7071),(0.0,-1.0),(-0.7071,-0.7071));
--signal w_slv: com_array_4;
--signal g01,g11,g21,g31,h01,h11,h21,h31,g02,g12,g22,g32,h02,h12,h22,h32:complex:=(x"0000",x"0000");
--signal g_stage1:com_array_4:=(((others=>'0'),(others=>'0')),((others=>'0'),(others=>'0')),((others=>'0'),(others=>'0')),((others=>'0'),(others=>'0')));
--signal h_stage1:com_array_4:=(((others=>'0'),(others=>'0')),((others=>'0'),(others=>'0')),((others=>'0'),(others=>'0')),((others=>'0'),(others=>'0')));
--signal g_stage2:com_array_4:=(((others=>'0'),(others=>'0')),((others=>'0'),(others=>'0')),((others=>'0'),(others=>'0')),((others=>'0'),(others=>'0')));
--signal h_stage2:com_array_4:=(((others=>'0'),(others=>'0')),((others=>'0'),(others=>'0')),((others=>'0'),(others=>'0')),((others=>'0'),(others=>'0')));
--signal mul_re,mul_im :nest_array;
signal out_mults_1:com_array_4:=(others=>((others=>'0'),(others=>'0')));
signal out_mults_2:com_array_4:=(others=>((others=>'0'),(others=>'0')));
--signal butterfly_in1,butterfly_in2,butterfly_out1,butterfly_out2:complex:=((others=>'0'),(others=>'0'));
--signal i:integer :=0;
signal butterfly_stage11_in1,butterfly_stage11_in2,butterfly_stage11_out1,butterfly_stage11_out2:complex:=((others=>'0'),(others=>'0'));
signal butterfly_stage12_in1,butterfly_stage12_in2,butterfly_stage12_out1,butterfly_stage12_out2:complex:=((others=>'0'),(others=>'0'));
signal butterfly_stage13_in1,butterfly_stage13_in2,butterfly_stage13_out1,butterfly_stage13_out2:complex:=((others=>'0'),(others=>'0'));
signal butterfly_stage14_in1,butterfly_stage14_in2,butterfly_stage14_out1,butterfly_stage14_out2:complex:=((others=>'0'),(others=>'0'));
signal butterfly_stage21_in1,butterfly_stage21_in2,butterfly_stage21_out1,butterfly_stage21_out2:complex:=((others=>'0'),(others=>'0'));
signal butterfly_stage22_in1,butterfly_stage22_in2,butterfly_stage22_out1,butterfly_stage22_out2:complex:=((others=>'0'),(others=>'0'));
signal butterfly_stage23_in1,butterfly_stage23_in2,butterfly_stage23_out1,butterfly_stage23_out2:complex:=((others=>'0'),(others=>'0'));
signal butterfly_stage24_in1,butterfly_stage24_in2,butterfly_stage24_out1,butterfly_stage24_out2:complex:=((others=>'0'),(others=>'0'));

begin

--process(clk,reset)
--begin
--if(clk='1' and clk'event) then

Inst_butterfly_11:radix_2_butterfly port map(
clk=>clk,
reset=>reset,
in1=>butterfly_stage11_in1,
in2=>butterfly_stage11_in2,
out1=>butterfly_stage11_out1,
out2=>butterfly_stage11_out2


);
Inst_butterfly_12:radix_2_butterfly port map(
clk=>clk,
reset=>reset,
in1=>butterfly_stage12_in1,
in2=>butterfly_stage12_in2,
out1=>butterfly_stage12_out1,
out2=>butterfly_stage12_out2

);
Inst_butterfly_13:radix_2_butterfly port map(
clk=>clk,
reset=>reset,
in1=>butterfly_stage13_in1,
in2=>butterfly_stage13_in2,
out1=>butterfly_stage13_out1,
out2=>butterfly_stage13_out2

);
Inst_butterfly_14:radix_2_butterfly port map(
clk=>clk,
reset=>reset,
in1=>butterfly_stage14_in1,
in2=>butterfly_stage14_in2,
out1=>butterfly_stage14_out1,
out2=>butterfly_stage14_out2

);
process(clk,reset)
begin
--if(reset='1') then
--butterfly_in1<=((others=>'0'),(others=>'0'));
--butterfly_in2<=((others=>'0'),(others=>'0'));
--butterfly_out1<=((others=>'0'),(others=>'0'));
--butterfly_out2<=((others=>'0'),(others=>'0'));

if (clk='1' and clk'event) then
butterfly_stage11_in1<=input_fft(0);
butterfly_stage11_in2<=input_fft(4);
butterfly_stage12_in1<=input_fft(1);
butterfly_stage12_in2<=input_fft(5);
butterfly_stage13_in1<=input_fft(2);
butterfly_stage13_in2<=input_fft(6);
butterfly_stage14_in1<=input_fft(3);
butterfly_stage14_in2<=input_fft(7);

rfd<='1';
end if;

end process;

--process(clk)
--begin
--if(clk='1' and clk'event) then
--twid_slv_re(0)<=to_sfixed(w(0).re,8,-7);
--twid_slv_re(1)<=to_sfixed(w(1).re,8,-7);
--twid_slv_re(2)<=to_sfixed(w(2).re,8,-7);
--twid_slv_re(3)<=to_sfixed(w(3).re,8,-7);
--twid_slv_im(0)<=to_sfixed(w(0).im,8,-7);
--twid_slv_im(1)<=to_sfixed(w(1).im,8,-7);
--twid_slv_im(2)<=to_sfixed(w(2).im,8,-7);
--twid_slv_im(3)<=to_sfixed(w(3).im,8,-7);
--end if;
--end process;
--
--process(clk)
--begin
--if(clk='1' and clk'event) then
--w_slv(0)<=(twid_slv_re(0),twid_slv_im(0));
--w_slv(1)<=(twid_slv_re(1),twid_slv_im(1));
--w_slv(2)<=(twid_slv_re(2),twid_slv_im(2));
--w_slv(3)<=(twid_slv_re(3),twid_slv_im(3));
--
--end if;
--end process;


process(clk)
begin
if (clk='1' and clk'event) then

out_mults_1(0)<=multiply(butterfly_stage11_out2,w(0));
out_mults_1(1)<=multiply(butterfly_stage12_out2,w(1));
out_mults_1(2)<=multiply(butterfly_stage13_out2,w(2));
out_mults_1(3)<=multiply(butterfly_stage14_out2,w(3));
end if;
end process;

-----------------------------------------------stage 2----------------------------------------------------------
Inst_butterfly_21:radix_2_butterfly port map(
clk=>clk,
reset=>reset,
in1=>butterfly_stage21_in1,
in2=>butterfly_stage21_in2,
out1=>butterfly_stage21_out1,
out2=>butterfly_stage21_out2


);
Inst_butterfly_22:radix_2_butterfly port map(
clk=>clk,
reset=>reset,
in1=>butterfly_stage22_in1,
in2=>butterfly_stage22_in2,
out1=>butterfly_stage22_out1,
out2=>butterfly_stage22_out2

);
Inst_butterfly_23:radix_2_butterfly port map(
clk=>clk,
reset=>reset,
in1=>butterfly_stage23_in1,
in2=>butterfly_stage23_in2,
out1=>butterfly_stage23_out1,
out2=>butterfly_stage23_out2

);
Inst_butterfly_24:radix_2_butterfly port map(
clk=>clk,
reset=>reset,
in1=>butterfly_stage24_in1,
in2=>butterfly_stage24_in2,
out1=>butterfly_stage24_out1,
out2=>butterfly_stage24_out2

);
process(clk,reset)
begin
if(clk='1' and clk'event) then
butterfly_stage21_in1<=butterfly_stage11_out1;
butterfly_stage21_in2<=butterfly_stage13_out1;
butterfly_stage22_in1<=butterfly_stage12_out1;
butterfly_stage22_in2<=butterfly_stage14_out1;
butterfly_stage23_in1<=out_mults_1(0);
butterfly_stage23_in2<=out_mults_1(1);
butterfly_stage24_in1<=out_mults_1(2);
butterfly_stage24_in2<=out_mults_1(3);
end if;
end process;

process(clk)
begin
if(clk='1' and clk'event) then

out_mults_2(0)<=multiply(butterfly_stage21_out2,w(0));
out_mults_2(1)<=multiply(butterfly_stage22_out2,w(2));
out_mults_2(2)<=multiply(butterfly_stage23_out2,w(0));
out_mults_2(3)<=multiply(butterfly_stage24_out2,w(2));

end if;
end process;

--if(out_mults_2(0)/=x"0000") then
--done<='1';
--end if;

process(clk)
begin
if(clk='1' and clk'event) then
output_fft(0)<=butterfly_stage21_out1;
output_fft(1)<=butterfly_stage23_out1;
output_fft(2)<=out_mults_2(0);
output_fft(3)<=out_mults_2(2);
output_fft(4)<=butterfly_stage22_out1;
output_fft(5)<=butterfly_stage24_out1;
output_fft(6)<=out_mults_2(1);
output_fft(7)<=out_mults_2(3);

end if;

end process;
process(clk)
begin
if(out_mults_2(0).re/=x"0000" and out_mults_2(0).im/=x"0000") then

done<='1';

end if;
end process;
process(clk)
begin
if(butterfly_stage21_out1 /= ((x"0000"),(x"0000"))) then

dv<='1';
end if;
end process;
--if(butterfly_stage21_out1/=x"0000") then
--dv<='1';
--end if;
--process(clk,reset)
--begin
--if (reset='1')
--butterfly_in1<=((others=>'0'),(others=>'0'));
--butterfly_in2<=((others=>'0'),(others=>'0'));
--butterfly_out1<=((others=>'0'),(others=>'0'));
--butterfly_out2<=((others=>'0'),(others=>'0'));
--elsif (clk='1' and clk'event)
--g01<=butterfly_out1;
--h01<=butterfly_out2;
--end if

----bf11:radix_2_butterfly port map(input_fft(0),input_fft(4),g01,h01);
----bf12:radix_2_butterfly port map(input_fft(1),input_fft(5),g11,h11);
----bf13:radix_2_butterfly port map(input_fft(2),input_fft(6),g21,h21);
----bf14:radix_2_butterfly port map(input_fft(3),input_fft(7),g31,h31);
----end if
----end process
----
----process(clk,reset)
----begin
----if(clk='1' and clk'event) then
--
--out_mults_1(0)<=multiply(h01,w(0));
--out_mults_1(1)<=multiply(h11,w(1));
--out_mults_1(2)<=multiply(h21,w(2));
--out_mults_1(3)<=multiply(h31,w(3));
--
----end if
----end process
----
----process(clk,reset)
----begin
----if(clk='1' and clk'event) then
--
--
--bf21:radix_2_butterfly port map(g01,g21,g02,h02);
--bf22:radix_2_butterfly port map(g11,g31,g12,h12);
--
--bf23:radix_2_butterfly port map(out_mults_1(0),out_mults_1(2),g22,h22);
--bf24:radix_2_butterfly port map(out_mults_1(1),out_mults_1(3),g32,h32);
--
----end if 
----end process
----
----process(clk,reset)
----begin
----if(clk='1' and clk'event) then
--
--out_mults_2(0)<=multiply(h02,w(0));
--out_mults_2(1)<=multiply(h12,w(2));
--out_mults_2(2)<=multiply(h22,w(0));
--out_mults_2(3)<=multiply(h32,w(2));
--
----end if
----end process
----
----process(clk,reset)
----begin
----if(clk='1' and clk'event) then 
--
--output_fft(0)<=g02;
--output_fft(1)<=g22;
--output_fft(2)<=out_mults_2(0);
--output_fft(3)<=out_mults_2(2);
--output_fft(4)<=g12;
--output_fft(5)<=g32;
--output_fft(6)<=out_mults_2(1);
--output_fft(7)<=out_mults_2(3);
--end if 
--end process
end Behavioral;

