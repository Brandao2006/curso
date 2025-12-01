/*
2- Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X
e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem
das coordenadas, isto é, a posição (0,0).
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
    float x2, y2, raiz;
    
    struct plano plano1;
    
    printf("escreva a coordenada x: ");
    scanf("%f", &plano1.x);
    
    printf("escreva a coordenada y: ");
    scanf("%f", &plano1.y);
    
    x2 = plano1.x * plano1.x;
    y2 = plano1.y * plano1.y;
    
    raiz = sqrt(x2 + y2);
    
    printf("sua distancia e %.2f", raiz);
    
    return 0;
}