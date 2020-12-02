#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int matriz[7][2], i, j;
int matricula;
int main(){
    int matriz[7][2] = 
    {{1111, 30001000}, 
     {2222, 30002000}, 
     {3333, 30003000},
     {4444, 30004000}, 
     {5555, 30005000}, 
     {6666, 30006000}, 
     {7777, 30007000}};
    printf("\nDigite a matricula do funcionário: ");
    scanf("%d",&matricula);

    if (matricula==matriz[i][j])
    {printf("Telefone: %d", matriz[i][j+1]);}
printf("\n");
return 0;
}
