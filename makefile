compilar: scanner.l
	@echo "Compilando Bison"
	bison -d -v -t parser.y
	@echo "Compilando Flex"
	flex scanner.l
	@echo "Compilando Tabla de Simbolos"
#gcc -c tabla_simbolos.c -o tabla_simbolos.o
	@echo "Compilando Tabla de Cuadruplas"
#gcc -c tabla_cuadruplas.c -o tabla_cuadruplas.o

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