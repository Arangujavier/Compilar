compilar: scanner.l
	@echo "Compilando Flex"
	flex scanner.l
	@echo "Compilando GCC"
	gcc lex.yy.c -lfl -o scanner

prueba1: scanner prueba1
	./scanner prueba1

prueba2: scanner prueba2
	./scanner prueba2

prueba3: scanner prueba3
	./scanner prueba3

clean:
	rm -f scanner lex.yy.c