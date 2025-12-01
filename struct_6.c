/*6) Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
conter o número de matrícula do aluno, seu nome e as notas de três provas. Agora, escreva
um programa que leia os dados de cinco alunos e os armazene nessa estrutura. Em
seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os cinco.
*/

#include <stdio.h>
#include <string.h>

#define QUANT 5

struct aluno
{
	int matricula;
	char nome[40];
	float notas[3];
};

int main()
{
    struct aluno alunos[QUANT];
    int i, melhor = 0;
    float soma, media, melhorMedia = -1.0f;

    for(i = 0; i < QUANT; i++)
    {
        printf("\nAluno %d\n", i + 1);
        printf("matricula: ");
        scanf("%d", &alunos[i].matricula);
        getchar();
        printf("nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        soma = 0.0f;
        printf("notas (3): ");
        for(int j = 0; j < 3; j++)
        {
            scanf("%f", &alunos[i].notas[j]);
            soma += alunos[i].notas[j];
        }

        media = soma / 3.0f;
        if(media > melhorMedia)
        {
            melhorMedia = media;
            melhor = i;
        }
    }

    printf("\nAluno com maior media: %s\n", alunos[melhor].nome);
    printf("matricula: %d\n", alunos[melhor].matricula);
    printf("notas: %.2f %.2f %.2f\n", alunos[melhor].notas[0], alunos[melhor].notas[1], alunos[melhor].notas[2]);

    return 0;
}
