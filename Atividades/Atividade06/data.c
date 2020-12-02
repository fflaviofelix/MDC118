//Escrever um programa em C que leia uma estrutura contendo dia, mes e ano 
//e imprima a data tanto no formato BR (dd/mm/aaaa) quanto no formato US (mm/dd/aaaa).

#include <stdio.h>
 int main(){
     int d, m, a;
     printf("\nDigite o dia: ");
     scanf("%d", &d);
     printf("Digite o mês: ");
     scanf("%d", &m);
     printf("Digite o ano: ");
     scanf("%d", &a);
     printf("Data no Brasil: %d/%d/%d", d,m,a);
     printf("\nData nos EUA: %d/%d/%d", m,d,a);
     printf("\n\n");
     
return 0;
 }
