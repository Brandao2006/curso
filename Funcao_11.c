/*
11- Faça uma função que recebe a média final de um aluno por parâmetro e
retorna o seu conceito, conforme a tabela abaixo:
Nota            Conceito
de 0,0-4,9    D
de 5,0-6,9    C
de 7,0-8,9    B
de 9,0-10,0   A
*/

#include <stdio.h>

char conceito_por_nota(float nota)
{
	if (nota >= 0.0f && nota <= 4.9f)
		return 'D';
	else if (nota >= 5.0f && nota <= 6.9f)
		return 'C';
	else if (nota >= 7.0f && nota <= 8.9f)
		return 'B';
	else if (nota >= 9.0f && nota <= 10.0f)
		return 'A';
	else
		return 'X'; /* fora dos padrões */
}

int main()
{
	float nota;
	char conceito;

	printf("escreva sua nota (de 0 a 10) \n");
	scanf("%f", &nota);

	conceito = conceito_por_nota(nota);

	if (conceito == 'X')
		printf("nota fora dos padroes\n");
	else
		printf("conceito: %c\n", conceito);

	return 0;
}