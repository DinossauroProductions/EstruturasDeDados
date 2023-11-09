#include "aritmeticaPonteiros.h"

#define MAX 5

int aritmeticaPonteirosMain(){

    int *p = (int*) malloc(sizeof(int) * MAX);

    for(int i = 0; i < MAX; i++){
        printf("Informe um número: ");
        scanf("%d", p + i);
    }

    printf("\n\n*** Mostra os valores - Do primeiro ao último ***");
    for(int i = 0; i < MAX; i++){
        printf("\nParte de valor do %do. inteiro: %d", i+1, *(p+i));
    }

    printf("\n\n*** Mostra os valores - Do último ao primeiro ***");
    for(int i = MAX-1; i >= 0; i--){
        printf("\nParte de valor do %do. inteiro: %d", i+1, *(p+i));
    }
    return 0;

}