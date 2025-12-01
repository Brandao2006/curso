/*
1- Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
estrutura lida.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct nodaen 
{
    char nome[40];
    char endereco[50];
    int idade;
};

int main()
{
    struct nodaen nodaen1;
    
    printf("escreva seu nome: ");
    fgets(nodaen1.nome, sizeof(nodaen1.nome), stdin);
    
    printf("escreva seu endereco: ");
    fgets(nodaen1.endereco, sizeof(nodaen1.endereco), stdin);
    
    printf("escreva sua idade: ");
    scanf("%d", &nodaen1.idade);
    
    printf("nome: %s", nodaen1.nome);
    
    printf("idade: %d\n", nodaen1.idade);
    
    printf("endereco: %s\n", nodaen1.endereco);


    return 0;
}