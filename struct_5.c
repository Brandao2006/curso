/*5) Usando a estrutura Retângulo do exercício anterior, faça um programa que declare e
leia uma estrutura Retângulo e um Ponto, e informe se esse ponto está ou não dentro do
retângulo.
*/
#include <stdio.h>

struct pontos
{
    float x,y;
};

struct retangulo
{
    struct pontos supesquerdo;
    struct pontos infdireito;
};

int main()
{
    struct retangulo ret;
    struct pontos ponto;
    
    printf("escreva coordenada X do ponto superior esquerdo: ");
    scanf("%f", &ret.supesquerdo.x);
    printf("escreva coordenada Y do ponto superior esquerdo: ");
    scanf("%f", &ret.supesquerdo.y);
    
    printf("escreva coordenada X do ponto inferior direito: ");
    scanf("%f", &ret.infdireito.x);
    printf("escreva coordenada Y do ponto inferior direito: ");
    scanf("%f", &ret.infdireito.y);
    
    printf("escreva coordenada X do ponto: ");
    scanf("%f", &ponto.x);
    printf("escreva coordenada Y do ponto: ");
    scanf("%f", &ponto.y);
    
    if(ponto.x >= ret.supesquerdo.x && ponto.x <= ret.infdireito.x &&
       ponto.y <= ret.supesquerdo.y && ponto.y >= ret.infdireito.y)
    {
        printf("o ponto esta dentro do retangulo\n");
    }
    else
    {
        printf("o ponto nao esta dentro do retangulo\n");
    }
    
    return 0;
}