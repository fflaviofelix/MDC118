/*Escrever um programa em C que leia um ano e verifique se ele é bissexto 
(é multiplo de 4 e não é multiplo de 100, ou é múltiplo de 400).*/

#include <stdio.h>

int main(){
    int ano;
    printf("\nDigite um ano: ");
    scanf("%i", &ano);
    if (((ano%4==0)&&(ano%100!=0))||(ano%400==0))
        {printf("\nO ano digitado é bissexto.\n\n");} 
    else
    {printf("\nO ano digitado não é bissexto.\n\n");}
    return 0;
    
}
