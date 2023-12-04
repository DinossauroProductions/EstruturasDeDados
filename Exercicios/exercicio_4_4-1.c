//
// Created by guilherme on 06/11/23.
//

#include "exercicio_4_4-1.h"

void push(int i);
int pop(void);
int getTamanho();

#define MAX 5
int pilha[MAX];
int topo=0;
int tamanho=0;

int exercicio_4_4_1(){
    push(10);
    push(20);
    push(30);
    push(40);
    printf("\nTamanho: %d",getTamanho());
    printf("\n%d",pop());
    printf("\n%d",pop());
    printf("\n%d",pop());
    printf("\nTamanho: %d",getTamanho());
    printf("\n%d",pop());
    printf("\n%d",pop());
    printf("\nTamanho: %d",getTamanho());
    return 0;
}

void push(int i){
    if(getTamanho() != MAX){
        pilha[topo] = i;
        topo++;
        tamanho++;
    }
}

int pop(void){
    if(getTamanho() != 0){
        topo--;
        tamanho--;
        return pilha[topo];
    }
    return 0;
}

int getTamanho(){
    return tamanho;
}


