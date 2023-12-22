#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exp_ab.h"


exp_a_b* new_exp_a_b()
{
	exp_a_b *ex = malloc(sizeof(exp_a_b));

	if(ex == NULL)
	{
		fprintf(stderr, "failed to allocate memory.\n");
        exit(-1);
	}

	return ex;	
}

exp_a_b* new_exp_a()
{
	exp_a_b *ex = malloc(sizeof(exp_a_b));

	if(ex == NULL)
	{
		fprintf(stderr, "failed to allocate memory.\n");
        exit(-1);
	}

	ex->ar    = TRUE;
	ex->bol   = FALSE;

	return ex;
}

exp_a_b* new_exp_b()
{
	exp_a_b *ex = malloc(sizeof(exp_a_b));

	if(ex == NULL)
	{
		fprintf(stderr, "failed to allocate memory.\n");
        exit(-1);
	}

	ex->ar    = FALSE;
	ex->bol   = TRUE;

	return ex;	
}

int set_arithmetic(exp_a_b *ex)
{
	ex->ar    = TRUE;
	ex->bol   = FALSE;
}

int set_boolean(exp_a_b *ex)
{
	ex->ar    = FALSE;
	ex->bol   = TRUE;
}

int is_arithmetic(exp_a_b *e)
{
	return e->ar == TRUE? TRUE: FALSE;
}

int is_boolean(exp_a_b *e)
{
	return e->bol == TRUE? TRUE: FALSE;
}