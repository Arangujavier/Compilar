#ifndef CB_TABLACUADRUPLAS_H
#define CB_TABLACUADRUPLAS_H

#define MAX_QUADS 1000


/* Se define la estructura la cuadrupla */
typedef struct quad {
    int operator;
    int operand1;
    int operand2;
    int result;
} quad;

/* Se define la estructura la tabla de cuádruplas */
typedef struct quad_table {
    quad quads[MAX_QUADS];
    int size;
} quad_table;

quad_table new_qt();
void gen(quad_table *qt, int operator, int operand1, int operand2, int result);
int next_quad_qt(quad_table *qt);
void to_string_qt(quad_table *qt);

#endif
