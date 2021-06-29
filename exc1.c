//Na Festa das Nações em Presidente Epitácio é necessário realizar o controle do caixa,
//onde cada pessoa pode comprar várias fichas de R$ 5,00 e R$2,00. Considerando que não sabemos
//quantas pessoas virão comprar fichas e nem a quantidade de fichas serão compradas pelas pessoas.
//Faça um programa em linguagem C capaz de imprimir a quantidade de pessoas que compraram fichas,
//a quantidade de fichas de R$ 2,00 compradas, a quantidade de fichas de R$ 5,00 e o
//valor total arrecadado no caixa. O programa deverá perguntar se tem mais alguma pessoa a ser atendida,
//se a resposta for "S", perguntar a quantidade de fichas de R$2,00 e de fichas de R$5,00.
//Considere que ao menos uma pessoa será atendida
#include <stdio.h>

int main()
{
    int quantityTwoBallot = 0;
    int totalTwoBallot = 0;
    int quantityFiveBallot = 0;
    int totalFiveBallot = 0;
    int quantityBuyer = 0;
    int totalValue = 0;

    printf("Quantas notas de R$ 2,00 gostaria de adquirir? ");
    scanf("%d", &quantityTwoBallot);

    printf("Quantas notas de R$ 5,00 gostaria de adquirir? ");
    scanf("%d", &quantityTwoBallot);
}