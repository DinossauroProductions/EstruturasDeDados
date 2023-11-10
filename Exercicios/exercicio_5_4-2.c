//
// Created by guilherme on 10/11/23.
//

#include "exercicio_5_4-2.h"

int exercicio_5_4_2(){

    //Enunciado:

    //Escreva um código recursivo para imprimir o n-nésimo termo da sequência de Fibonacci. A
    //sequência de Fibonacci é definida da seguinte forma: O primeiro termo é 1. O segundo
    //também é 1. Cada termo da sequência é definido como sendo a soma dos dois termos
    //anteriores. Segue abaixo a definição recursiva dos termos da série de Fibonacci:fib(1) = 1
    //fib(2) = 1
    //fib(n) = fib(n-1) + fib(n-2), para n > 2
    //Exemplo: 1,1,2,3,5,8,13,21,34,....

    //+

    //Faça um esquema que mostre os parâmetros da função representando a
    //construção / destruição da pilha de execução.

    for(int i = 10; i < 20; i++){
        printf("\n%d esimo elemento da fibonacci: %u\n", i, fibonacci(i));
    }

}

unsigned int fibonacci(unsigned int n){

    if(n == 0 || n == 1){
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2);

}

