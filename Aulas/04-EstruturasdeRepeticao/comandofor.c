 #include <stdio.h>
int var = 10;

/* for aninhados */
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            printf("%d,%d ", i, j);
        }
    }
    printf("\n");
