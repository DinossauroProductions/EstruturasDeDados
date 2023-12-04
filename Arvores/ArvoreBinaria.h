//
// Created by guilherme on 27/11/23.
//

/**
 * @file Implementação e estudos sobre árvores binárias, sob a disciplina de Estrutura de Dados, eBook capítulo 7.
 */


#ifndef ESTRUTURASDEDADOS_ARVOREBINARIA_H
#define ESTRUTURASDEDADOS_ARVOREBINARIA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct TipoArvore Arvore;

///testes e implementações da biblioteca
int mainArvoreBinaria();

///cria uma árvore vazia
Arvore* inicializa();

///verifica se a arvore está vazia
int estaVazia(Arvore* a);

///cria um nó, dado a informação e as duas subárvores
Arvore* criaNo(int n, Arvore* sae, Arvore* sad);

///libera a estrutura da árvore
Arvore* libera(Arvore* a);

///Determinar se uma informação se encontra ou não na árvore
int busca(Arvore* a, int n);

///imprime a informação de todos os nós da árvore
void imprime(Arvore* a);

/** imprime todos os nós da árvore em Pre -Ordem. */
void imprimePre(Arvore* a);

/** imprime todos os nós da árvore em Pós -Ordem. */
void imprimePos(Arvore* a);

/** imprime todos os nós da árvore em In-Ordem. */
void imprimeIn(Arvore* a);

#endif //ESTRUTURASDEDADOS_ARVOREBINARIA_H
