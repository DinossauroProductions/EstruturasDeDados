//
// Created by guilherme on 27/11/23.
//

#include "ArvoreBinaria.h"

struct TipoArvore{
    int info;
    struct TipoArvore* sae;
    struct TipoArvore* sad;
};

int mainArvoreBinaria(){

    Arvore *D = criaNo(4, inicializa(), inicializa());
    Arvore *E = criaNo(5, inicializa(), inicializa());
    Arvore *F = criaNo(6, inicializa(), inicializa());
    Arvore *G = criaNo(7, inicializa(), inicializa());
    Arvore *B = criaNo(2, D, E);
    Arvore *C = criaNo(3, F, G);
    Arvore *A = criaNo(1, B, C);
    imprime(A);
    if (!busca(A, 7)){
        printf("\nInformacao INEXISTENTE!");
    }else{
        printf("\nInformacao ENCONTRADA COM SUCESSO!");
    }
    printf("\n");

    imprimePre(A);

    A = libera(A);
    return 0;
}

Arvore* inicializa(){
    return NULL;
}

Arvore* criaNo(int n, Arvore* sae, Arvore* sad){
    Arvore* p = (Arvore*) malloc(sizeof(Arvore));
    p->info = n;
    p->sae = sae;
    p->sad = sad;
    return p;
}

void imprime(Arvore* a){
    if(!estaVazia(a)){
        printf("%d ", a->info);
        imprime(a->sae);
        imprime(a->sad);
    }
}

int estaVazia(Arvore* a){
    return a == NULL;
}

int busca(Arvore *a, int n) {
    if (estaVazia(a)) {
        return 0;
    }
    else if (a->info == n) {
        return 1;
    }
    else if (busca(a->sae, n)) {
        return 1;
    }
    else {
        return busca(a->sad, n);
    }
}

Arvore* libera(Arvore* a){
    if(!estaVazia(a)){
        libera(a->sae);
        libera(a->sad);
        free(a);
    }
    return NULL;
}

void imprimePre(Arvore* a){
    if(!estaVazia(a)){
        printf("%d ", a->info);
        imprimePre(a->sae);
        imprimePre(a->sad);
    }
}

/* imprime todos os nós da árvore em In-Ordem. */
void imprimeIn(Arvore* a){
    if(!estaVazia(a)){
        imprimeIn(a->sae); /* mostra sae */
        printf("%d ", a->info); /* mostra raiz */
        imprimeIn(a->sad); /* mostra sad */
    }
}

/* imprime todos os nós da árvore em Pós -Ordem. */
void imprimePos(Arvore* a){
    if(!estaVazia(a)){
        imprimePos(a->sae); /* mostra sae */
        imprimePos(a->sad); /* mostra sad */
        printf("%d ", a->info); /* mostra raiz */
    }
}