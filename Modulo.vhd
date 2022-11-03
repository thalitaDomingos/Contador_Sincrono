-- Thalita Fortes Domingos 

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Modulo is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           output : buffer integer range 0 to 7);
end Modulo;

architecture Behavioral of Modulo is

begin

process (clk, reset)

begin
   if reset = '1' then
	   output <= 0; 
		
	elsif rising_edge (clk) then -- transição de subida	
	   if output = 0 then
		   output <= 5;
		
		elsif output = 5 then
		   output <= 4;
		
		elsif output = 4 then
		   output <= 2;
		
		elsif output = 2 then
		   output <= 6;
		
		elsif output = 6 then
		   output <= 3;
			
		elsif output = 3 then
		   output <= 1;
			
		elsif output = 1 then
		   output <= 0;
			 
		elsif output = 7 then
		   output <= 5;
			
		end if;
		
	elsif falling_edge (clk) then -- transição de descida
	   output <= output;
	
	end if;
end process;
end Behavioral;
