/*1.2 Escrever um programa em C que converta um número x de segundos em horas, 
minutos e segundos.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int segundos, h, m, s, resto;

    printf("Digite um tempo em segundos: ");
    scanf("%d", &segundos);
    h = segundos / 3600; //1h tem 3600 segundos; por isso a divisão por 3600
    resto = segundos % 3600;
    m = resto / 60;
    s = resto % 60;
    printf("%d:%d:%d\n", h, m, s);

    return 0; 
}
