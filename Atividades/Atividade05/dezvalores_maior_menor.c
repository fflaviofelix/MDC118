//Escrever um programa em C que leia 10 valores e imprima o maior e o menor valores lidos.

#include <stdio.h>

int main()
{   
    float i, maior, menor, atual;

    for(i=1;i<=10;i++)
    {
        printf("\nDigite um número: ");
        scanf("%f", &atual);

        if(i==1){
            maior = atual;
            menor = atual;
        }

        if(atual > maior){maior=atual;}
        if(atual < menor){menor=atual;}

    }

    printf("\nMaior: %0.2f", maior);
    printf("\nMenor: %0.2f", menor);
    printf("\n\n");

    return 0;
}
