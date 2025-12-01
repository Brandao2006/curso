/*5 - Faça um procedimento que recebe por parâmetro o tempo de duração de
uma fábrica expressa em segundos e imprima esse tempo em horas, minutos
e segundos.
*/

#include <stdio.h>

void tempo(float segundo)
{
    float minutos_traduzidos;
    float horas_traduzidos;

    horas_traduzidos = segundo / 3600;
    minutos_traduzidos = (segundo - (horas_traduzidos * 3600)) / 60;

    printf("horas %2.f \n", horas_traduzidos);
    printf("minutos %2.f \n", minutos_traduzidos);
    printf("segundos %2.f \n", segundo);
}

int main()
{
    float segundo, minutos_traduzidos, horas_traduzidos;

    printf("escreva os segundos \n");
    scanf("%f", &segundo);

    tempo(segundo);

    return 0;
}