//Faça um programa que transforme o computador em uma urna eletrônica para eleição
//para Presidente de um certo país, às quais concorrem os candidatos 83-Alibabá e 93-Alcapone.
//Não se sabe quantas pessoas irão votar, mas se o usuário digitar -1 significa que não
//tem mais ninguém para votar. O usuário deverá ler o voto que será identificado pelo
//número do candidato, permitindo-se ainda o voto 00 para voto em branco.
//Qualquer voto diferente dos já citados é considerado nulo. No final da eleição,
//o programa deverá informar a quantidade de votos de cada candidato, a quantidade de votos em branco,
//a quantidade de votos nulos e o candidato eleito.

#include <stdio.h>

void verificaVencedor(int alibaba, int alcapone)
{
    if (alibaba > alcapone)
    {
        printf("Alibaba eleito");
    }
    else if (alcapone > alibaba)
    {
        printf("Alcaponde eleito");
    }
    else
    {
        printf("Empate");
    }
}

int main()
{
    int whiteVotes = 0;
    int nullVotes = 0;
    int alibabaVotes = 0;
    int alcaponeVotes = 0;
    int vote;
    int count = 0;
    int finished = 0;

    while (1)
    {
        if (finished == 1)
            break;

        count++;
        printf("Voto %d: ", count);
        scanf("%d", &vote);

        switch (vote)
        {
        case 83:
            alibabaVotes++;
            break;

        case 93:
            alcaponeVotes++;
            break;
        case 0:
            whiteVotes++;
            break;
        case (-1):
            finished = 1;
            printf("\n\nTotal de votos\n");
            printf("===============\n");
            printf("Alibaba: %d\n", alibabaVotes);
            printf("Alcapone: %d\n", alcaponeVotes);
            printf("Em branco: %d\n", whiteVotes);
            printf("Nulos: %d\n", nullVotes);
            verificaVencedor(alibabaVotes, alcaponeVotes);
            break;

        default:
            nullVotes++;
            break;
        }
    }
}