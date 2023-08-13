/*
UNIVERSIDAD NACIONAL AUTONOMA DE MEXICO
FACULTAD DE ESTUDIOS SUPERIORES ACATLAN
MATEMATICAS APLICADAS Y COMPUTACION

ESTE PROGRAMA DETERMINA SI UN NUMERO ES
PAR O IMPAR.

AUTHOR: RODRIGO PARRA PASCUAL
*/

#include<stdio.h>
#include<stdio_ext.h>
#include<stdbool.h>

#define NUMPARAMS 2

void Leer_Datos(long int *num);
int Par_o_Impar(long int num);
void Imprimir_Resultado(bool resp, long int num);
int CleanInput();

int main()
{
	long int num;
	bool resp;
	Leer_Datos(&num);
	resp = Par_o_Impar(num);
	Imprimir_Resultado(resp, num);
	return 0;
}

void Leer_Datos(long int *num)
{
	char c;
	printf("\nIngresa un numero: ");
	while(!(scanf("%ld%c", num, &c) == NUMPARAMS && c == '\n') || *num <= 0)
	{
		printf("\nIngresa unicamente numeros enteros mayores que cero.\n");
		printf("\nIngresa un numero: ");
		CleanInput();
	}
}

int Par_o_Impar(long int num)
{
	if(num % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Imprimir_Resultado(bool resp, long int num)
{
	if(resp)
	{
		printf("\n%ld es un numero par.\n\n", num);
	}
	else
	{
		printf("\n%ld es un numero impar.\n\n", num);
	}
}

int CleanInput()
{
	__fpurge(stdin);
	return 0;
}