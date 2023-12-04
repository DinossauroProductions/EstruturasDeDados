#include "buscas.h"

#define TAMANHO 100

/*
 * int *p = (int*) malloc(sizeof(int) * 10);

    for(int i = 0; i < 10; i++){
        printf("\nParte de posição do %do. inteiro: %d", i+1, p+i);
    }
 */

int estruturaDeDadosMain() {

    setlocale(LC_ALL, "Portuguese");



    /*

    int vetor[TAMANHO];

    gerarAleatorio(&vetor, TAMANHO);

    int index;
    int i;

    bubbleSort(&vetor, TAMANHO);

    for(i = 0; i < TAMANHO; i++){
        printf("\n%d", vetor[i]);
    }

    index = binarySearch(vetor, 100, TAMANHO);

    if(index != -1){
        printf("\n\nEncontrado o elemento %d na posição %d.", vetor[index], index);
    }
    else{
        printf("\n\nNão foi encontrado o valor %d no vetor.", i);
    }
    */

    return 0;
}

int binarySearch(int *vetor, int chave, int n){

    int ini = 0;
    int fim = n;
    int meio;

    while(ini <= fim){

        meio = (ini + fim) / 2;
        if(chave < vetor[meio]){
            fim = meio - 1;
        }else{
            if(chave > vetor[meio]){
                ini = meio + 1;
            }else{
                return meio;
            }
        }
    }
    return -1;
}

void bubbleSort(int *vetor, int n){

    for(int j = n; j >= 0; j--){
        for(int i = 0; i < j; i++){
            if(vetor[i] > vetor[i+1]){
                int transicao = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = transicao;
            }
        }
    }
}

void gerarAleatorioOrdenado(int *vetor, int n){
    if(vetor == NULL)
        return;
    int contador = 0;
    for(int i = 0; i < n; i++){
        srand(time(NULL));
        contador += rand() % 10;
        vetor[i] = contador;
    }
}

void gerarAleatorio(int *vetor, int n){
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        vetor[i] = rand() % 1000;
    }
}


