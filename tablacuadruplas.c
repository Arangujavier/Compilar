#include "tablaCuadruplas.h"
#include <stdio.h>

quad_table new_qt() {
    quad_table qt;
    qt.size = 0;
    return qt;
}

void gen(quad_table *qt, int operator, int operand1, int operand2, int result) {
    if (qt->size < MAX_QUADS) {
        qt->quads[qt->size].operator = operator;
        qt->quads[qt->size].operand1 = operand1;
        qt->quads[qt->size].operand2 = operand2;
        qt->quads[qt->size].result = result;
        qt->size++;
    } else {
        fprintf(stderr, "Tabla de cuádruplas llena.\n");
    }
}

int next_quad_qt(quad_table *qt) {
    return qt->size + 1;
}

void to_string_qt(quad_table *qt) {
    printf("\nTabla de Cuádruplas:\n");
    for (int i = 0; i < qt->size; i++) {
        printf("%d: Operador: %d, Operand1: %d, Operand2: %d, Result: %d\n",
               i, qt->quads[i].operator, qt->quads[i].operand1, qt->quads[i].operand2, qt->quads[i].result);
    }
}
