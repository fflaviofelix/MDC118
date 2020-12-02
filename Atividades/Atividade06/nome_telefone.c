/*Escrever um programa em C que leia o nome (30 caracteres) e o telefone de 10 contatos (inteiro longo), e depois imprima todos os contatos no formato "nome - telefone".*/

#include <stdio.h>
#include <string.h>

int main(){
    int contato;
    contato=0;
    char nome[40]; 
    long int telefone[15];
    for(contato=0; contato<10; contato++){
        printf("\nDigite o nome: ");
        fgets(nome, 40, stdin);
        printf("Digite o telefone: ");
        scanf("%ld", telefone);
        printf("\n");}
    printf("Nome: %s\nTelefone: %ln\n\n", nome, telefone);

return 0;
}
