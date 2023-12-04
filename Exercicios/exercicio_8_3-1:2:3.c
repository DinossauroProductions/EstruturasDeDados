//
// Created by guilherme on 29/11/23.
//

#include "exercicio_8_3-1:2:3.h"

struct TipoArvore {
    int info;
    struct TipoArvore* sae;
    struct TipoArvore* sad;
};

int exercicio_8_3_1(){

    Arvore *A = e_criaNo(0, e_inicializa(), e_inicializa());

    e_insere(A, 3);
    e_insere(A, 5);
    e_insere(A, 4);
    e_insere(A, 6);
    e_insere(A, 1);
    e_insere(A, 2);

    printf("Exerício 1 (árvore binária de busca): \n");

    e_imprimePre(A);
    printf("\n");
    e_imprimeIn(A);
    printf("\n");
    e_imprimePos(A);
    if (!e_busca(A, 5)){
        printf("\nInformacao INEXISTENTE!");
    }else{
        printf("\nInformacao ENCONTRADA COM SUCESSO!");
    }


    printf("\n\nExerício 2 (função de impressão por ordem ascendente): \n");
    e_imprimeAscendenteOrdem(A);


    printf("\n\nExerício 2 (função de impressão por ordem descendente): \n");
    e_imprimeDescendenteOrdem(A);

    e_libera(A);
    return 0;
}
//cria uma árvore vazia
Arvore* e_inicializa(){
    return NULL;
}
//verifica se a arvore está vazia
int e_estaVazia(Arvore* a){
    return a == NULL;
}
//cria um nó dadas a informação e as duas subárvores
Arvore* e_criaNo(int n, Arvore* sae, Arvore* sad){
    Arvore* p = (Arvore*) malloc(sizeof(Arvore));
    p->info = n;
    p->sae = sae;
    p->sad = sad;
    return p;
}
//libera a estrutura da árvore
Arvore* e_libera(Arvore* a){
    if(!e_estaVazia(a)){
        e_libera(a->sae); /* e_libera sae */
        e_libera(a->sad); /* e_libera sad */
        free(a); /* e_libera raiz */
    }
    return NULL;
}
//Insere novo item na árvore
Arvore* e_insere(Arvore* a, int n){

    if(e_estaVazia(a))
        return e_criaNo(n, e_inicializa(), e_inicializa());

    if(n < a -> info){
        a -> sae = e_insere(a->sae, n);
    }
    else if(n > a -> info){
        a -> sad = e_insere(a->sad, n);
    }
    return a;
}

//Determinar se uma informação se encontra ou não na árvore
int e_busca(Arvore* a, int n){
    if(e_estaVazia(a)) {
        return 0;
        // não encontrado até o fim
    }
    else if(a-> info == n){
        return 1;
        //encontrado :)
    }
    else if(n < a -> info){
        return e_busca(a -> sae, n);
        //está à esquerda
    }
    else if(n > a -> info){
        return e_busca(a -> sad, n);
        //está à direita
    }

}
//imprime a informação de todos os nós da árvore em Pre -Ordem
void e_imprimePre(Arvore* a){
    if(!e_estaVazia(a)){
        printf("%d ", a->info); /* mostra raiz */
        e_imprimePre(a->sae); /* mostra sae */
        e_imprimePre(a->sad); /* mostra sad */
    }
}
//imprime a informação de todos os nós da árvore em In-Ordem
void e_imprimeIn(Arvore* a){
    if(!e_estaVazia(a)){
        e_imprimeIn(a->sae); /* mostra sae */
        printf("%d ", a->info); /* mostra raiz */
        e_imprimeIn(a->sad); /* mostra sad */
    }
}
//imprime a informação de todos os nós da árvore em Pos -Ordem
void e_imprimePos(Arvore* a){
    if(!e_estaVazia(a)){
        e_imprimePos(a->sae); /* mostra sae */
        e_imprimePos(a->sad); /* mostra sad */
        printf("%d ", a->info); /* mostra raiz */
    }
}

void e_imprimeAscendenteOrdem(Arvore* a){

    if(a->sae != NULL){
        e_imprimeAscendenteOrdem(a->sae);
    }
    printf("%d ", a->info);
    if(a->sad != NULL){
        e_imprimeAscendenteOrdem(a->sad);
    }

}

void e_imprimeDescendenteOrdem(Arvore* a){

    if(a->sad != NULL){
        e_imprimeDescendenteOrdem(a->sad);
    }
    printf("%d ", a->info);
    if(a->sae != NULL){
        e_imprimeDescendenteOrdem(a->sae);
    }

}


