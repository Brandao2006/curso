/*7) Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora,
minuto e segundo. Agora, escreva um programa que leia um vetor de cinco posições dessa
estrutura e imprima a maior hora.
*/

#include <stdio.h>

#define N 5

struct hora
{
	int h;
	int m;
	int s;
};

int main()
{
	struct hora v[N];
	int i, melhor = 0;

	for(i = 0; i < N; i++)
	{
		printf("escreva hora minuto segundo (ex: 14 30 05): ");
		scanf("%d %d %d", &v[i].h, &v[i].m, &v[i].s);
	}

	for(i = 1; i < N; i++)
	{
		if(v[i].h > v[melhor].h || (v[i].h == v[melhor].h && (v[i].m > v[melhor].m || (v[i].m == v[melhor].m && v[i].s > v[melhor].s))))
		{
			melhor = i;
		}
	}

	printf("\nMaior hora: %02d:%02d:%02d\n", v[melhor].h, v[melhor].m, v[melhor].s);

	return 0;
}