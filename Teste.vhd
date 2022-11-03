-- Davi Restani de Faria 
-- Thalita Fortes Domingos 
-- Thiago da Rocha Miguel 

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY Teste IS
END Teste;
 
ARCHITECTURE behavior OF Teste IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Modulo
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         output : buffer integer range 0 to 7
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';

 	--Outputs
   signal output : integer range 0 to 7;

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Modulo PORT MAP (
          clk => clk,
          reset => reset,
          output => output
        );


   -- Stimulus process
   stim_proc: process
   begin		
		
      wait for 100 ns;	
		reset <= '1';
		wait for 100 ns;
		reset <= '0';
		wait for 100 ns;
		
		-- 8 pulsos de clock
		
		clk <= '0';
		wait for 100 ns;
		clk <= '1';
		wait for 100 ns;
		clk <= '0';
		wait for 100 ns;
		
		clk <= '0';
		wait for 100 ns;
		clk <= '1';
		wait for 100 ns;
		clk <= '0';
		wait for 100 ns;
		
		clk <= '0';
		wait for 100 ns;
		clk <= '1';
		wait for 100 ns;
		clk <= '0';
		wait for 100 ns;
		
		clk <= '0';
		wait for 100 ns;
		clk <= '1';
		wait for 100 ns;
		clk <= '0';
		wait for 100 ns;
		
		clk <= '0';
		wait for 100 ns;
		clk <= '1';
		wait for 100 ns;
		clk <= '0';
		wait for 100 ns;
		
		clk <= '0';
		wait for 100 ns;
		clk <= '1';
		wait for 100 ns;
		clk <= '0';
		wait for 100 ns;
		
		clk <= '0';
		wait for 100 ns;
		clk <= '1';
		wait for 100 ns;
		clk <= '0';
		wait for 100 ns;
		
		clk <= '0';
		wait for 100 ns;
		clk <= '1';
		wait for 100 ns;
		clk <= '0';
		wait for 100 ns;  
		
      wait;
   end process;

END;
