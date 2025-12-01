/*
10) Usando a estrutura "atleta" do exercício anterior, escreva um programa que leia os
dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais novo.
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
	struct atleta v[N];
	int i, j;

	for(i = 0; i < N; i++)
	{
		printf("\nAtleta %d\n", i + 1);
		getchar();
		printf("nome: ");
		fgets(v[i].nome, sizeof(v[i].nome), stdin);
		v[i].nome[strcspn(v[i].nome, "\n")] = '\0';
		printf("esporte: ");
		fgets(v[i].esporte, sizeof(v[i].esporte), stdin);
		v[i].esporte[strcspn(v[i].esporte, "\n")] = '\0';
		printf("idade: ");
		scanf("%d", &v[i].idade);
		printf("altura (m): ");
		scanf("%f", &v[i].altura);
	}

	/* ordena por idade do mais velho para o mais novo */
	for(i = 0; i < N - 1; i++)
	{
		for(j = 0; j < N - 1 - i; j++)
		{
			if(v[j].idade < v[j+1].idade)
			{
				struct atleta tmp = v[j];
				v[j] = v[j+1];
				v[j+1] = tmp;
			}
		}
	}

	printf("\nAtletas do mais velho para o mais novo:\n");
	for(i = 0; i < N; i++)
	{
		printf("%s - idade: %d - esporte: %s\n", v[i].nome, v[i].idade, v[i].esporte);
	}

	return 0;
}