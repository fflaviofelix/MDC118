//Escrever um programa em C que imprima os meses de um ano definidos por uma enumeração.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    int opcao;
    printf("\nEntre número de 1 a 12 para imprimir o mês correspondente: ");
    scanf("%d", &opcao);
switch(opcao){
    case 1:
            printf("1.Janeiro\n");
            break;
    case 2:
            printf("2.Fevereiro\n");
            break;
    case 3:
            printf("3.Marco\n");
            break;
    case 4:
            printf("4.Abril\n");
            break;
    case 5:
            printf("5.Maio\n");
            break;
    case 6:
            printf("6.Junho\n");
            break;
    case 7:
            printf("7.Julho\n");
            break;
    case 8:
            printf("8.Agosto\n");
            break;
    case 9:
            printf("9.Setembro\n");
            break;
    case 10:
            printf("10.Outubro\n");
            break;
    case 11:
            printf("11.Novembro\n");
            break;
    case 12:
            printf("12.Dezembro\n");
            break;
printf("\n\n");
}
return 0;
}

