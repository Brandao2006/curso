/*
7- Faça uma função que verifique se um valor é perfeito ou não. Um valor
é dito perfeito quando ele é igual a soma dos seus divisores excetuando ele
próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A função
deve retornar o valor inteiro 1 para verdadeiro e 0 caso contrário.
*/

#include <stdio.h>

int perfeito(int numero)
{
    int divisores = 0;

    for(int i = 1; i < numero; i++)
    {
        if(numero % i == 0)
        {
            divisores += i;
        }
    }
    if(divisores == numero)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int numero, valor_final;

    printf("escreva o numero: \n");
    scanf("%d", &numero);

    valor_final = perfeito(numero);

    switch(valor_final)
    {
        case 1:
        {
            printf("e perfeito");
            break;
        }
        case 0:
        {
            printf("nao e perfeito");
            break;
        }
    }

    return 0;
}