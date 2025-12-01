/*
4 - Faça um procedimento que recebe por parâmetro os valores necessário
para o cálculo da fórmula de báskara e imprima as suas raízes, caso seja
possível calcular. 
*/
#include <stdio.h>
#include <math.h>

    void bhaskara(float a, float b, float c)
    {
        float delta, x1, x2;

        delta = (b * b) - (4 * a * c);

        if(delta < 0)
        {
            printf("nao possui raizes reais\n");
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("raizes da equacao: \n");
            printf("x1 = %f\n", x1);
            printf("x2 = %f\n", x2);
        }
    }
    }
    
int main()
    {
    
    float a, b, c, delta, x1, x2;
    
    
    scanf("%f", &a);
    printf("valor de a eh %.0f\n", a);
    
    scanf("%f", &b);
    printf("valor de b eh %.0f\n", b);
    
    scanf("%f", &c);
    printf("valor de c eh %.0f \n", c);
    
    delta = (b * b) - (4 * a * c);
    
    if(delta < 0)
    {
        printf("nao possui raizes reais\n");
         }else
            {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            }
        
    
    bhaskara(a, b, c);

    return 0;

    }