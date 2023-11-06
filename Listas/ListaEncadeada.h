/**
 * @file
 * @brief Pequena implementação de Listas Encadeadas, como estudo de Estrutura de Dados.
 */

#ifndef ESTRUTURASDEDADOS_LISTAENCADEADA_H
#define ESTRUTURASDEDADOS_LISTAENCADEADA_H

#include <stdlib.h>
#include <stdio.h>

void mainListasEncadeadas();

typedef struct Elemento Elemento;
typedef struct LiEncadeada LiEncadeada;

//Apenas retorna NULL. Nem precisa dela, mas está aí para ficar bonitinho.
LiEncadeada* criaLista();

LiEncadeada* insereElementoInicio(LiEncadeada *atual, LiEncadeada no);
LiEncadeada* insereElementoFinal(LiEncadeada *atual, LiEncadeada no);


LiEncadeada* buscaElemento(LiEncadeada *atual, int identificador);

LiEncadeada* removeElemento(LiEncadeada *atual, int identificador);
void liberaLista(LiEncadeada *atual);

void imprimeAluno(LiEncadeada *atual);
void imprimeLista(LiEncadeada *atual);

float mediaAlunos(LiEncadeada* atual);

#endif //ESTRUTURASDEDADOS_LISTAENCADEADA_H
