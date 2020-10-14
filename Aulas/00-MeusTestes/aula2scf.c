#include <stdio.h>
#include <stdlib.h>

//aula 2 do material complementar

int main (int argc, char *argv[]);
{
        int numero; //variavel

            printf("Digite um numero: "); // imprime a frase na tela
            scanf("%d",&numero); // lê o número digitado pelo usuário
            getchar(); // limpa o buffer do teclado do pc

            printf("O número eh:  %d\n\n", numero);

            return 0;
}