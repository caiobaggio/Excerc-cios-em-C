//Informe dois números ao computador entre de 1 a 75, após os números serem fornecidos,
//o computador deve começar a gerar números aleatórios e parar quando ele conseguir acertar
//os dois números que você escolheu. Informe quantos sorteios foram necessários para que
//ele acertasse sua escolha e quais foram os números que ele sorteou.

#include <stdio.h>

int main()
{
    int number1, number2;
    int randNumber;
    int tryCount = 0;
    int findedNumbers = 0;
    int randedNumbers[75];
    int i = 0, j, conflictedRandedNumber;

    printf("Informe um número entre 1 e 75: ");
    scanf("%d", &number1);
    printf("Informe outro número entre 1 e 75: ");
    scanf("%d", &number2);

    if (number1 < 1 || number1 > 75 || number2 < 1 || number2 > 75)
    {
        printf("Valores fora dos padrões");
    }
    else
    {
        while (1)
        {
            i = 0;
            do
            {
                randedNumbers[i] = (rand() % 75) + 1;
                conflictedRandedNumber = 0;

                for (j = 0; j < i; j++)
                {
                    if (randedNumbers[i] == randedNumbers[j])
                    {
                        conflictedRandedNumber = 1;
                    }
                }

                if (conflictedRandedNumber == 0)
                {
                    randNumber = randedNumbers[i];
                    tryCount++;
                    printf("%d ", randNumber);

                    if (randNumber == number1 || randNumber == number2)
                    {
                        findedNumbers++;
                        printf("\nEncontrou um número\n");
                        printf("%d tentativas\n", tryCount);

                        if (findedNumbers == 2)
                            break;
                    }

                    i++;
                }
            } while (i < 75);

            if (findedNumbers == 2)
                break;
        }
    }
}