/*11) Escreva um programa que contenha uma estrutura representando uma data válida.
Essa estrutura deve conter os campos dia, mês e ano. Em seguida, leia duas datas e
armazene nessa estrutura. Calcule e exiba o número de dias que decorreram entre as duas
datas.
*/

#include <stdio.h>

struct data
{
	int dia;
	int mes;
	int ano;
};

int eh_bissexto(int ano)
{
	return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}

int dias_no_mes(int mes, int ano)
{
	switch(mes)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			return 31;
		case 4: case 6: case 9: case 11:
			return 30;
		case 2:
			return eh_bissexto(ano) ? 29 : 28;
		default:
			return 0;
	}
}

long dias_ate(struct data d)
{
	long dias = 0;
	int y;
	for(y = 1; y < d.ano; y++)
		dias += 365 + eh_bissexto(y);

	for(int m = 1; m < d.mes; m++)
		dias += dias_no_mes(m, d.ano);

	dias += d.dia;
	return dias;
}

int main()
{
	struct data d1, d2;

	printf("escreva a primeira data (dia mes ano): ");
	scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);
	printf("escreva a segunda data (dia mes ano): ");
	scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano);

	long t1 = dias_ate(d1);
	long t2 = dias_ate(d2);
	long diff = t1 - t2;
	if(diff < 0) diff = -diff;

	printf("\nDias entre as datas: %ld\n", diff);

	return 0;
}