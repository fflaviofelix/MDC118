#include <stdio.h>
#include <stdlib.h>

#define pi 3.1416

int main(){
    float raio=0;
    printf("\n raio da circunferencia:");
    scanf("%f", &raio);
    printf("area da circunferencia: %0.4f", pi*(raio*raio));
    system("break");
    return 0;
}
