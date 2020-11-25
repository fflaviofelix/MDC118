/*Escreva um programa que leia qual de dois números é o maior*/

#include <stdio.h>
int main()
{
    float n1, n2;
    printf("\nDigite um número: ");
    scanf("%f", &n1);

    printf("\nAgora digite outro número: ");
    scanf("%f", &n2);

    if (n1>n2) 
    {printf("\nO maior número é %.2f ", n1);}
    
    else if(n2>n1)
    {printf("\nO maior número é %.2f\n\n", n2);}

    else 
    {printf("\nOs valores são iguais.Você deve digitar números diferentes.\n\n");}
    
    return 0;
}
