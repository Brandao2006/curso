/*
15- Escreva uma função que recebe, por parâmetro, dois valores X e Z e
calcula e retorna X^Z (sem utilizar funções ou operadores de potência
prontos).
*/

#include <stdio.h>

int xzf(int x, int z)
{
	int result = 1;
	for (int i = 0; i < z; i++)
	{
		result *= x;
	}
	return result;
}

int main()
{
	int x, z, resultado;

	printf("escreva os numeros (x z): \n");
	scanf("%d %d", &x, &z);

	resultado = xzf(x, z);

	printf("o calculo e %d\n", resultado);

	return 0;
}