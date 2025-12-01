/*
8- Faça um procedimento que recebe a idade de um nadador por parâmetro
e retorna, também por parâmetro, a categoria desse nadador de acordo com
a tabela abaixo:
Idade       Categoria
5-7 anos    Infantil A
8-10 anos   Infantil B
11-13 anos  Juvenil A
14-17 anos  Juvenil B
Maiores de  Adulto
18 anos
(inclusive)
*/

#include <stdio.h>

void nadador(int idade)
{
    if (idade < 5)
    {
        printf("muito jovem para natacao\n");
    }
    else if (idade >= 5 && idade <= 7)
    {
        printf("Categoria: Infantil A\n");
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf("Categoria: Infantil B\n");
    }
    else if (idade >= 11 && idade <= 13)
    {
        printf("Categoria: Juvenil A\n");
    }
    else if (idade >= 14 && idade <= 17)
    {
        printf("Categoria: Juvenil B\n");
    }
    else
    {
        printf("Categoria: Adulto\n");
    }
}

int main()
{
    int idade;

    printf("escreva a idade \n");
    scanf("%d", &idade);

    nadador(idade);

    return 0;
}