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
    int totalTwoBallot = 0;
    int twoBallots = 0;
    int totalFiveBallot = 0;
    int fiveBallots = 0;
    int quantityBuyer = 1;
    int totalValue = 0;
    char answer;

    printf("Quantas fichas de R$ 2,00 gostaria de adquirir?\n");
    scanf("%d", &twoBallots);
    totalValue = totalValue + (twoBallots * 2);
    totalTwoBallot = totalTwoBallot + twoBallots;

    printf("\nQuantas fichas de R$ 5,00 gostaria de adquirir?\n");
    scanf("%d", &fiveBallots);
    totalValue = totalValue + (fiveBallots * 5);
    totalFiveBallot = totalFiveBallot + fiveBallots;

    while (1)
    {
        printf("\nMais uma pessoa para ser atendida?\n");
        scanf("%s", &answer);

        if (answer == 83 || answer == 115)
        {
            printf("\nQuantas fichas de R$ 2,00 gostaria de adquirir?\n");
            scanf("%d", &twoBallots);
            totalValue = totalValue + (twoBallots * 2);
            totalTwoBallot = totalTwoBallot + twoBallots;

            printf("\nQuantas fichas de R$ 5,00 gostaria de adquirir?\n");
            scanf("%d", &fiveBallots);
            totalValue = totalValue + (fiveBallots * 5);
            totalFiveBallot = totalFiveBallot + fiveBallots;
        }
        else
        {
            break;
        }
    }

    printf("\n\nQuantidades de compradores: %d\n", quantityBuyer);
    printf("Total de fichas de R$ 2,00: %d\n", totalTwoBallot);
    printf("Total de fichas de R$ 5,00: %d\n", totalFiveBallot);
    printf("Valor total arrecadado: R$ %d,00\n", totalValue);
}