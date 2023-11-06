//
// Created by guilherme on 26/10/23.
//

#include "ListaContiguaDinamica.h"

struct Valor{
    float valor;
    char foiAlocado;
};

struct LiContigua{
    unsigned int tamanho;
    Valor* lista;
};

// Sobre ponteiros:
// Pointer in C is just a variable that could store the address of the other variable.
// In C size of a pointer is not fixed as it depends on Word size of the processor.
// In general a 32-bit computer machine then size of a pointer would be 4 bytes
// while for a 64-bit computer machine, it would be 8 bytes.

int mainListasContiguas(){


    printf("O tamanho de um \"objeto\" lista e: %lu\n", sizeof(LiContigua));
    printf("O tamanho de um int e: %lu\n", sizeof(int));
    printf("O tamanho de um int* e: %lu\n", sizeof(int*));
    printf("O tamanho de um unsigned int e: %lu\n", sizeof(unsigned int));
    printf("O tamanho de um Valor e: %lu\n", sizeof(Valor));
    printf("O tamanho de um Valor* e: %lu\n", sizeof(Valor*));



    return 1;
}

LiContigua criarLista(){
    LiContigua lista;
    Valor* valores = malloc(sizeof(Valor) * TAMANHO_INICIAL);
    lista.tamanho = TAMANHO_INICIAL;
    lista.lista = valores;
    return lista;
}

Valor acessarItem(LiContigua lista, int index){
    return *(lista.lista + index);
}

void limparLista(LiContigua lista){
    free(lista.lista);
}


