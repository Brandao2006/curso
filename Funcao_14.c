/*
14- Faça uma função que leia um número não determinado de valores
positivos e retorna a média aritmética dos mesmos.
*/

#include <stdio.h>

float somaf(float soma, float valor)
{
    return soma + valor;
}

float mediaf(float soma, int count)
{
    if (count == 0)
        return 0.0f;
    return soma / count;
}

int main()
{
    float numero = 0.0f, soma = 0.0f, media = 0.0f;
    int count = 0;

    printf("escreva os numero(positivo), digite um numero negativo para parar:\n");
    while (1)
    {
        scanf("%f", &numero);
        if (numero < 0.0f)
            break;
        soma = somaf(soma, numero);
        count++;
    }

    media = mediaf(soma, count);

    printf("sua media e %f\n", media);

    return 0;
}