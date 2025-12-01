/*
4- Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior
esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido por uma estrutura
Ponto, a qual contém as posições X e Y. Faça um programa que declare e leia uma
estrutura Retângulo e exiba a área e o comprimento da diagonal e o perímetro desse
retângulo.
*/
#include <stdio.h>
#include <math.h>

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
    float largura, altura, area, diagonal, perimetro;
    
    printf("escreva coordenada X do ponto superior esquerdo: ");
    scanf("%f", &ret.supesquerdo.x);
    printf("escreva coordenada Y do ponto superior esquerdo: ");
    scanf("%f", &ret.supesquerdo.y);
    
    printf("escreva coordenada X do ponto inferior direito: ");
    scanf("%f", &ret.infdireito.x);
    printf("escreva coordenada Y do ponto inferior direito: ");
    scanf("%f", &ret.infdireito.y);
    
    largura = ret.infdireito.x - ret.supesquerdo.x;
    altura = ret.supesquerdo.y - ret.infdireito.y;
    
    area = largura * altura;
    diagonal = sqrt((largura * largura) + (altura * altura));
    perimetro = 2 * (largura + altura);
    
    printf("\narea: %.2f\n", area);
    printf("diagonal: %.2f\n", diagonal);
    printf("perimetro: %.2f\n", perimetro);
    
    return 0;
}