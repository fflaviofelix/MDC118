//Escrever um programa em C que leia 10 valores e imprima o maior e o menor valores lidos.

#include <stdio.h>
#include <float.h>

int main()
{   
    int i, maior, menor, atual;

    for(i=1;i<=10;i++)
    {
        printf("\nDigite um número: ");
        scanf("%d", &atual);

        if(i==1){
            maior = atual;
            menor = atual;
        }

        if(atual > maior){maior=atual;}
        if(atual < menor){menor=atual;}

    }

    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);
    printf("\n\n");

    return 0;
}
