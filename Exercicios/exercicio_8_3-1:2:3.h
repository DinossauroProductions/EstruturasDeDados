//
// Created by guilherme on 29/11/23.
//

#ifndef ESTRUTURASDEDADOS_EXERCICIO_8_3_1_2_3_H
#define ESTRUTURASDEDADOS_EXERCICIO_8_3_1_2_3_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct TipoArvore Arvore;

int exercicio_8_3_1();


//cria uma árvore vazia
Arvore* e_inicializa();
//verifica se a arvore está vazia
int e_estaVazia(Arvore* a);
//cria um nó dadas a informação e as duas subárvores
Arvore* e_criaNo(int n, Arvore* sae, Arvore* sad);
//e_libera a estrutura da árvore
Arvore* e_libera(Arvore* a);
//Determinar se uma informação se encontra ou não na árvore
int e_busca(Arvore* a, int n);
//imprime a informação de todos os nós da árvore em Pre -Ordem
void e_imprimePre(Arvore* a);
//imprime a informação de todos os nós da árvore em In-Ordem
void e_imprimeIn(Arvore* a);
//imprime a informação de todos os nós da árvore em Pos -Ordem
void e_imprimePos(Arvore* a);
//Imprime em ordem ascendente
void e_imprimeAscendenteOrdem(Arvore* a);
//Imprime em ordem descendente
void e_imprimeDescendenteOrdem(Arvore* a);
//insere o elemento na posição de acordo com o modelo de busca
Arvore* e_insere(Arvore* a, int n);

#endif //ESTRUTURASDEDADOS_EXERCICIO_8_3_1_2_3_H
