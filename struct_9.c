/*
9) Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do
atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados de cinco
atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho.
*/

#include <stdio.h>
#include <string.h>

#define N 5

struct atleta
{
	char nome[40];
	char esporte[30];
	int idade;
	float altura;
};

int main()
{
	struct atleta a[N];
	int i, maisAlto = 0, maisVelho = 0;

	for(i = 0; i < N; i++)
	{
		printf("\nAtleta %d\n", i + 1);
		getchar();
		printf("nome: ");
		fgets(a[i].nome, sizeof(a[i].nome), stdin);
		a[i].nome[strcspn(a[i].nome, "\n")] = '\0';
		printf("esporte: ");
		fgets(a[i].esporte, sizeof(a[i].esporte), stdin);
		a[i].esporte[strcspn(a[i].esporte, "\n")] = '\0';
		printf("idade: ");
		scanf("%d", &a[i].idade);
		printf("altura (m): ");
		scanf("%f", &a[i].altura);
	}

	for(i = 1; i < N; i++)
	{
		if(a[i].altura > a[maisAlto].altura)
			maisAlto = i;
		if(a[i].idade > a[maisVelho].idade)
			maisVelho = i;
	}

	printf("\nAtleta mais alto: %s (altura: %.2f m)\n", a[maisAlto].nome, a[maisAlto].altura);
	printf("Atleta mais velho: %s (idade: %d)\n", a[maisVelho].nome, a[maisVelho].idade);

	return 0;
}