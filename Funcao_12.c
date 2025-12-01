/*
12- Faça um procedimento que recebe 3 valores inteiros por parâmetro e
imprima-os ordenados em ordem crescente
*/

#include <stdio.h>

void ordem(int numero0, int numero1, int numero2)
{
	int troca;

	if (numero0 > numero1)
	{
		troca = numero0; numero0 = numero1; numero1 = troca;
	}
	if (numero1 > numero2)
	{
		troca = numero1; numero1 = numero2; numero2 = troca;
	}
	if (numero0 > numero1)
	{
		troca = numero0; numero0 = numero1; numero1 = troca;
	}

	printf("%d %d %d\n", numero0, numero1, numero2);
}

int main()
{
	int numero0, numero1, numero2;

	printf("escreva 3 numeros \n");
	scanf("%d %d %d", &numero0, &numero1, &numero2);

	ordem(numero0, numero1, numero2);

	return 0;
}