/*
2 - Faça uma função que receba um texto por parâmetro e escreva-o na tela
(print).
*/

#include <stdio.h>

void parametro(const char* texto)
{
    printf("texto digitado %s", texto);
    printf("ok");
}

int main()
{
    char texto[10];

    scanf(" %9s", &texto);

    parametro(texto);

    return 0;
}