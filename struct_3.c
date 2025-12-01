/*
3- Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X
e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles..
*/
#include <stdio.h>
#include <math.h>

struct plano
{
 float x;
 float y;
};

int main()
{
    float dx, dy, distancia;
    
    struct plano ponto1, ponto2;
    
    printf("escreva a coordenada x do ponto 1: ");
    scanf("%f", &ponto1.x);
    
    printf("escreva a coordenada y do ponto 1: ");
    scanf("%f", &ponto1.y);
    
    printf("escreva a coordenada x do ponto 2: ");
    scanf("%f", &ponto2.x);
    
    printf("escreva a coordenada y do ponto 2: ");
    scanf("%f", &ponto2.y);
    
    dx = ponto2.x - ponto1.x;
    dy = ponto2.y - ponto1.y;
    
    distancia = sqrt((dx * dx) + (dy * dy));
    
    printf("sua distancia e %.2f", distancia);
    
    return 0;
}