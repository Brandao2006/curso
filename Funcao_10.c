/*
10- Faça uma função que recebe um valor inteiro e verifica se o valor é par
ou ímpar. A função deve retornar um valor inteiro
*/
#include <stdio.h>
int parimpar (int numero)
{
    
    if(numero %2 == 0)
    {
    return 1;
    }
    else{
        
    return 0;    
    }
    
}

int main()
{
    int numero, receber;
    
    printf("escreva um numero \n");
    scanf("%d", &numero);
    
    
    receber = parimpar (numero);
    if(receber == 1)
    {
        printf("par");
    }
    else{
        printf("impar");
    }

    return 0;
}