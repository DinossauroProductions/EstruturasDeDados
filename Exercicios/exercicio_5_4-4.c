//
// Created by guilherme on 10/11/23.
//

#include "exercicio_5_4-4.h"

int exercicio_5_4_4(){
    imprimeImparesRecursivo(11);
    return 0;
}

void imprimeImparesRecursivo(unsigned int n){

    if(n == 0)
        return;
    if(n % 2 != 0)
        printf("%d ", n);
    imprimeImparesRecursivo(n-1);
}
