compilar: scanner.l
	@echo "Compilando Bison"
	bison -d -v -t parser.y
	@echo "Compilando Flex"
	flex scanner.l
	@echo "Compilando Tabla de Simbolos"
	gcc -c tablaSimbolos.c -o tablaSimbolos.o
	@echo "Compilando Tabla de Cuadruplas"
	gcc -c tablaCuadruplas.c -o tablaCuadruplas.o
	@echo "Compilando exp_ab"
	gcc -c exp_ab.c -o exp_ab.o
	@echo "Compilando GCC"
	gcc -c lex.yy.c 
	gcc parser.tab.c lex.yy.o tablaSimbolos.o tablaCuadruplas.o exp_ab.o

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