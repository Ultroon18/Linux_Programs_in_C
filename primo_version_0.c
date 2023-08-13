/*
UNIVERSIDAD NACIONAL AUTONOMA DE MEXICO
FACULTAD DE ESTUDIOS SUPERIORES ACATLAN
MATEMATICAS APLICADAS Y COMPUTACION

ESTE PROGRAMA DETERMINA SI UN NUMERO
ES PRIMO O NO.

AUTHOR: RODRIGO PARRA PASCUAL
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<stdbool.h>

#define NUMPARAMS 2

void Leer_Datos(long int *num);
int Primo(long int num);
void Imprimir_Resultado(bool resp, long int num);
int CleanInput();

int main()
{
	long int num;
	bool resp;
	Leer_Datos(&num);
	resp = Primo(num);
	Imprimir_Resultado(resp, num);
	return 0;
}

void Leer_Datos(long int *num)
{
	char c;
	printf("\nIngresa un numero: ");
	while(!(scanf("%ld%c", num, &c) == NUMPARAMS && c == '\n') || *num <= 1)
	{
		printf("\nIngresa unicamente numeros enteros mayores que cero.\n");
		printf("\nIngresa un numero: ");
		CleanInput();
	}
}

int Primo(long int num)
{
	register int cont = 0;
	if(num == 2)
	{
		cont = 0;
	}
	else
	{
		for(register int i = 2; i < num; i++)
		{
			if(num % i == 0)
			{
				cont = 1;
				break;
			}
		}
	}
	return cont;
}

void Imprimir_Resultado(bool resp, long int num)
{
	if(resp)
	{
		printf("\n%ld no es un numero primo.\n\n", num);
	}
	else
	{
		printf("\n%ld es un numero primo.\n\n", num);
	}
}

int CleanInput()
{
	__fpurge(stdin);
	return 0;
}