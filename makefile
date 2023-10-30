compilar: scanner.l
	@echo "Compilando Flex"
	flex scanner.l
	@echo "Compilando GCC"
	gcc lex.yy.c -lfl -o scanner
	@echo "Compilando Bison"
	bison -v -d parser.y

ejecutarPrueba: scanner prueba
	./scanner prueba

ejecutarPrueba1: scanner prueba1
	./scanner prueba1

ejecutarPrueba2: scanner prueba2
	./scanner prueba2

ejecutarPrueba3: scanner prueba3
	./scanner prueba3

clean:
	rm -f scanner lex.yy.c