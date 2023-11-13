compilar: scanner.l
	@echo "Compilando Bison"
	bison -v -d parser.y
	@echo "Compilando Flex"
	flex scanner.l
	@echo "Compilando GCC"
	gcc -c lex.yy.c 
	gcc parser.tab.c lex.yy.o
	

	

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