/*
8) Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa.
Agora, escreva um programa que leia os dados de seis pessoas. Calcule e exiba os nomes
da pessoa mais nova e da mais velha.
*/

#include <stdio.h>
#include <string.h>

#define N 6

struct pessoa
{
	char nome[40];
	int dia;
	int mes;
	int ano;
};

int main()
{
	struct pessoa v[N];
	int i, maisVelho = 0, maisNovo = 0;

	for(i = 0; i < N; i++)
	{
		printf("\nPessoa %d\n", i + 1);
		getchar();
		printf("nome: ");
		fgets(v[i].nome, sizeof(v[i].nome), stdin);
		v[i].nome[strcspn(v[i].nome, "\n")] = '\0';
		printf("data de nascimento (dia mes ano): ");
		scanf("%d %d %d", &v[i].dia, &v[i].mes, &v[i].ano);
	}

	for(i = 1; i < N; i++)
	{
		if(v[i].ano < v[maisVelho].ano || (v[i].ano == v[maisVelho].ano && (v[i].mes < v[maisVelho].mes || (v[i].mes == v[maisVelho].mes && v[i].dia < v[maisVelho].dia))))
			maisVelho = i;

		if(v[i].ano > v[maisNovo].ano || (v[i].ano == v[maisNovo].ano && (v[i].mes > v[maisNovo].mes || (v[i].mes == v[maisNovo].mes && v[i].dia > v[maisNovo].dia))))
			maisNovo = i;
	}

	printf("\nPessoa mais velha: %s (nasc: %02d/%02d/%04d)\n", v[maisVelho].nome, v[maisVelho].dia, v[maisVelho].mes, v[maisVelho].ano);
	printf("Pessoa mais nova: %s (nasc: %02d/%02d/%04d)\n", v[maisNovo].nome, v[maisNovo].dia, v[maisNovo].mes, v[maisNovo].ano);

	return 0;
}