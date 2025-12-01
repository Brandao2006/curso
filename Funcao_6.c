/*
6- Faça uma função que recebe a idade de uma pessoa em anos, meses e dias
e retorna essa idade expressa em dias
*/

#include <stdio.h>

int idade(int anos, int meses, int dias)
{
    int dias_totais = (anos * 365) + (meses * 30) + dias;
    return dias_totais;
}

int main()
{
    int anos, meses, dias, dias_totais;

    printf("escreva quantos anos \n");
    scanf("%d", &anos);
    printf("escreva quantos meses \n");
    scanf("%d", &meses);
    printf("escreva quantos dias \n");
    scanf("%d", &dias);

    dias_totais = idade(anos, meses, dias);
    printf("total de dias: %d\n", dias_totais);

    return 0;
}