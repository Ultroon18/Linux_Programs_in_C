/*
UNIVERSIDAD NACIONAL AUTONOMA DE MEXICO
FACULTAD DE ESTUDIOS SUPERIORES ACATLAN
MATEMATICAS APLICADAS Y COMPUTACION

ESTE PROGRAMA DETERMINA SI UN AÑO ES
BISIESTO O NO.

AUTHOR: RODRIGO PARRA PASCUAL
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>

#define NUMPARAMS 2

int bisiesto(int *year);
int CleanInput();


int main()
{
	int *year;
	char c;
	printf("Año?: ");
	while(!(scanf("%d%c", year, &c)==NUMPARAMS && c=='\n') || *year <= 0)
	{
		printf("\nIngresa unicamente valores enteros mayores que cero.\n");
		printf("Año?: ");
		CleanInput();
	}
	if(bisiesto(year))
	{
		printf("\n%d es bisiesto\n", *year);
	}
	else
	{
		printf("\n%d no es bisiesto\n", *year);
	}
	return 0;
}

int bisiesto(int *year)
{
	if((*year % 4 == 0 && *year % 100 != 0) || *year % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int CleanInput()
{
	__fpurge(stdin);
	return 0;
}