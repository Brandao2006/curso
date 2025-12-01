/*
13- Escreva um procedimento que recebe 3 valores reais X, Y e Z e que
verifique se esses valores podem ser os comprimentos dos lados de um
triângulo e, neste caso, retornar qual o tipo de triângulo formado.
Para que X, Y e Z formem um triângulo é necessário que a seguinte
propriedade seja satisfeita: o comprimento de cada lado seja menor do que a
soma do comprimento dos outros dois lados.
*/

#include <stdio.h>

void Triangulo(float x, float y, float z)
{
    if ((x + y > z) && (x + z > y) && (y + z > x))
    {
        printf("e um Triangulo ");

        if (x == y && y == z)
            printf("equilatero\n");
        else if (x == y || y == z || z == x)
            printf("isoceles\n");
        else
            printf("escaleno\n");
    }
    else
    {
        printf("nao e um Triangulo\n");
    }
}

int main()
{
    float x, y, z;

    printf("escreva os lados: \n");
    scanf("%f %f %f", &x, &y, &z);

    Triangulo(x, y, z);

    return 0;
}