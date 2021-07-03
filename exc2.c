//O deputado João das Contas deseja arrecadar R$ 20.000,00 para sua campanha política.
//Sabendo que as pessoas fazem doações de qualquer valor, faça um programa em linguagem C
//capaz de ler as doações realizadas para sua campanha até que o valor arrecadado seja
//superior a R$ 20.000,00. Apresente a quantidade de doações e o valor total das doações.

#include <stdio.h>

int main()
{
    int donationLimit = 20000;
    float donationValue = 0;
    int quantityDonation = 1;
    float totalDonation = 0;
    printf("Valor da doação: ");
    scanf("%f", &donationValue);
    totalDonation = totalDonation + donationValue;

    while (totalDonation < donationLimit)
    {
        printf("\n---Quantidade de doações: %d---", quantityDonation);
        printf("\n---Valor total doado: %f---", totalDonation);

        printf("\n\nValor da nova doação: ");
        scanf("%f", &donationValue);
        totalDonation = totalDonation + donationValue;
        quantityDonation++;
    }

    printf("\n\n==== Quantidade de doações: %d ====", quantityDonation);
    printf("\n==== Valor total doado: %f ====", totalDonation);
}