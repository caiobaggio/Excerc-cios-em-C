//Fazer um programa em linguagem C capaz de simular um caixa de supermercado, onde o
//cliente escolhe vários produtos e somente o preço do produto é necessário.
//Para cada produto somado na conta deve-se apresentar o subtotal da compra e no final
//dos produtos deve-se apresentar o total da compra e o total de itens comprados.
//Não é possível saber a quantidade de produtos no início da soma da compra.
//Se o preço digitado for 0 (zero), finalizar a compra.

#include <stdio.h>

int main()
{
    int productCount = 0;
    float productValue = 0;
    float totalValue = 0;
    int count = 0;

    while (1)
    {
        count++;
        printf("Valor do produto %d: R$", count);
        scanf("%f", &productValue);

        if (productValue == 0)
        {
            printf("\nQuantidade de produtos comprados: %d\n", productCount);
            printf("Valor total da compra: R$%f", totalValue);
            break;
        }

        totalValue += productValue;
        productCount++;

        printf("--------------------\n");
        printf("Subtotal: R$%f\n\n", totalValue);
    }
}