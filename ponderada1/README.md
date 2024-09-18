Olá, Nicola! 👋

Este aqui é o README da minha ponderada 1. Fica mais fácil explicar as peças aqui!

Unidades menores:
	- 1 bit comparator: Comparador de um único bit. Usado para construir o *8 bit comparator*. Entradas (1 bit): A, B. Saídas: (A<B), (A=B), (A>B).
	
	- Full Adder: Adição de dois bits com Carry In e Carry Out. Usado para construir o *8 bit adder*. Entradas (1 bit): A, B, Cin. Saídas: S, Cout (OVF).
	
	- Chooser: Circuito para verificar se o bit precisa ser shiftado N vezes para a direita. Usado no *Multiplier*. Entradas (8 bits): A, B. Saídas: A0,A1,A2,A3,A4,A5,A6,A7.
	
	- 8 bit left shift: Circuito para deslocar uma entrada para a esquerda. Existe a opção de mover 1, 2 e 4 bits, mas o default é 1. Entradas: A, (1 bit), (2 bit), (4 bit). Saídas: O.
	
	- 8 bit right shifter: Circuito para deslocar uma entrada para a direita. Existe a opção de mover 1, 2 e 4 bits, mas o default é 1. Entradas: A, (1 bit), (2 bit), (4 bit). Saídas: O.
	
	- Comp Handler: Circuito para auxiliar com o Output da comparação. Criei esta parte para manter a saída centralizada nos dois displays de uma forma mais amigável. Entradas (8 bits): (A<B), (A=B), (A>B). Saídas: O.

Unidades principais:
	- 8 bit comparator
	- 8 bit adder
	- Barrel Shifter
	- Multiplier
	- OPCode Handler:
		- 001 Sum
		- 010 Sub
		- 011 Comp
		- 100 Shift
		- 101 Mult

ALU é o arquivo principal com todas as funcionalidades.
