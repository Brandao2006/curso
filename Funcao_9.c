/*
9- Faça uma função que recebe um valor inteiro e verifica se o valor é
positivo ou negativo. A função deve retornar um valor inteiro. 
*/
#include <stdio.h>

int posneg (int numero)

{
if(numero > 0)
    {
        printf("positivo");
        return 1;
    }
    else if(numero < 0)
    {
        printf("negativo");
        return -1;
    }
    else{
        printf("nulo");
        return 0;
    }
}

int main()
{
    
    int numero;
    
    printf("escreva um numero \n");
    scanf("%d", &numero);
    
    posneg(numero);

    return 0;
}
