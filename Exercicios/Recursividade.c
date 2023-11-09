//
// Created by guilherme on 08/11/23.
//

#include "Recursividade.h"

int stackOverflowTeste(int n);

int mainRecursividade(){



    //stackOverflowTeste(261901);
    return 0;
}

int stackOverflowTeste(int n){
    if(n > 1) {
        return stackOverflowTeste(n - 1);
    }
    else{
        return 0;
    }
}

