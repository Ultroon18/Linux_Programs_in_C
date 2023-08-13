#include<stdio.h>

long double EpsilonMaquina();

int main()
{
	printf("\nEpsilon = %1.64LG\n\n", EpsilonMaquina());
	return 0;
}

long double EpsilonMaquina()
{
  long double eps = 1.0;
  while(1.0 + (eps * 0.5) > 1.0)
  {
    eps *= 0.5;
  }
  return eps;
}