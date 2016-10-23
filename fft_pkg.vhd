--
--	Package File Template
--
--	Purpose: This package defines supplemental types, subtypes, 
--		 constants, and functions 
--
--   To use any of the example code shown below, uncomment the lines and modify as necessary
--

library IEEE;

use IEEE.STD_LOGIC_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_signed.all;


package fft_pkg is

-- type <new_type> is
--  record
--    <type_name>        : std_logic_vector( 7 downto 0);
--    <type_name>        : std_logic;
-- end record;
--
-- Declare constants
--
-- constant <constant_name>		: time := <time_unit> ns;
-- constant <constant_name>		: integer := <value;
--
-- Declare functions and procedure
--
-- function <function_name>  (signal <signal_name> : in <type_declaration>) return <type_declaration>;
-- procedure <procedure_name> (<type_declaration> <constant_name>	: in <type_declaration>);
--
type complex is
record
re:std_logic_vector(15 downto 0);
im:std_logic_vector(15 downto 0);
end record;


type com_array_128 is array (0 to 127) of complex;
type com_array_64 is array (0 to 63) of complex; 
type com_array_32 is array (0 to 31) of complex;
type com_array_16 is array (0 to 15) of complex;
type com_array_8 is array (0 to 7) of complex;
type com_array_4 is array (0 to 3) of complex;
type com_array_2 is array (0 to 1) of complex;
--type com_array_dec_4 is array(0 to 3) of complex_dec;

--type nest_array is array (0 to 3) of std_logic_vector(31 downto 0);
function add(n1,n2:complex) return complex;
function sub(n1,n2:complex) return complex;
function multiply(n1,n2:complex) return complex;

end fft_pkg;
package body fft_pkg is

---- Example 1
--  function <function_name>  (signal <signal_name> : in <type_declaration>  ) return <type_declaration> is
--    variable <variable_name>     : <type_declaration>;
--  begin
--    <variable_name> := <signal_name> xor <signal_name>;
--    return <variable_name>; 
--  end <function_name>;

---- Example 2
--  function <function_name>  (signal <signal_name> : in <type_declaration>;
--                         signal <signal_name>   : in <type_declaration>  ) return <type_declaration> is
--  begin
--    if (<signal_name> = '1') then
--      return <signal_name>;
--    else
--      return 'Z';
--    end if;
--  end <function_name>;

---- Procedure Example
--  procedure <procedure_name>  (<type_declaration> <constant_name>  : in <type_declaration>) is
--    
--  begin
--    
--  end <procedure_name>;

function add(n1,n2:complex) return complex is
variable sum:complex;
begin
sum.re:=n1.re+n2.re;
sum.im:=n1.im+n2.im;
return sum;
end add;


function sub(n1,n2:complex) return complex is
variable diff : complex;
begin 
diff.re:=n1.re - n2.re;
diff.im:=n1.im - n2.im;
return diff;
end sub;

function multiply (n1,n2 : complex) return complex is
variable prod : complex;
begin 
prod.re:=(n1.re * n2.re) - (n1.im * n2.im);
prod.im:=(n1.re * n2.im) + (n1.im * n2.re);
return prod;
end multiply;



end fft_pkg;