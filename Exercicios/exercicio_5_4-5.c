//
// Created by guilherme on 10/11/23.
//

#include "exercicio_5_4-5.h"

int exercicio_5_4_5(){
    printarParesRecursivo(10);
    return 0;
}

void printarParesRecursivo(unsigned int n){
    if(n == 0)
        return;
    if(n % 2 == 0)
        printf("%d ", n);
    printarParesRecursivo(n-1);
}
