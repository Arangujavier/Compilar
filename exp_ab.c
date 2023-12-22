#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exp_ab.h"

// número máximo de estructuras exp_a_b que se pueden crear
#define MAX_EXP_A_B 100
exp_ab exp_ab_pool[MAX_EXP_A_B];
int exp_ab_pool_used = 0;

exp_ab* new_exp_a_b()
{
    if (exp_ab_pool_used >= MAX_EXP_A_B) {
        fprintf(stderr, "ERRRROR EXP_AB.\n");
        exit(-1);
    }
    return &exp_ab_pool[exp_ab_pool_used++];
}

exp_ab* new_exp_a()
{
    exp_ab *ex = new_exp_a_b();
    ex->ar  = TRUE;
    ex->bol = FALSE;
    return ex;
}

exp_ab* new_exp_b()
{
    exp_ab *ex = new_exp_a_b();
    ex->ar  = FALSE;
    ex->bol = TRUE;
    return ex;  
}

void set_aritmetico(exp_ab *ex)
{
    ex->ar  = TRUE;
    ex->bol = FALSE;
}

void set_boolean(exp_ab *ex)
{
    ex->ar  = FALSE;
    ex->bol = TRUE;
}

int es_aritmetico(exp_ab *e)
{
    return e->ar == TRUE;
}

int es_boolenao(exp_ab *e)
{
    return e->bol == TRUE;
}
