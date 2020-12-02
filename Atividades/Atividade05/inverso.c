#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){
   char texto [81], inverso [81];
   int i,f;
   printf("\nDigite um texto: ");
   scanf("%s", texto);
   f=0;
   for (i=strlen(texto)-1; i>=0; i--){inverso[f]=texto[i];f++;}
   inverso[f]='\0';
   printf("\nInverso: %s \n", inverso);

system ("break");
return 0;   
}
