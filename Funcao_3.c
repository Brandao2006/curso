/*
3 - Faça uma função que receba um texto por parâmetro e escreva-o na tela
(print), em seguida retorne “Ok”.
*/
#include <stdio.h>

    char* parametro(const char* texto)
    {
        printf("texto digitado %s", texto);
        return "Ok";
    }
    
int main()
{
    char texto[10];
    char* resultado;

    scanf(" %9s", &texto);

    resultado = parametro(texto);
    printf("\n%s\n", resultado);

    return 0;
}