//
// Created by guilherme on 10/11/23.
//

#include "exercicio_5_4-3.h"

int exercicio_5_4_3(){
    imprimeRecursivo(10);
    return 0;
}

void imprimeRecursivo(unsigned int n){

    if(n == 0)
        return;
    printf("%d ", n);
    imprimeRecursivo(n - 1);
}
