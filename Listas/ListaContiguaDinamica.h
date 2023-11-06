//
// Created by guilherme on 26/10/23.
//

/**
 * @brief Gerencia um array de itens de forma dinâmica. Também é conhecido como ArrayList.
 */

#ifndef ESTRUTURASDEDADOS_LISTACONTIGUADINAMICA_H
#define ESTRUTURASDEDADOS_LISTACONTIGUADINAMICA_H

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_INICIAL 8

typedef struct Valor Valor;

typedef struct LiContigua LiContigua;

int mainListasContiguas();

LiContigua criarLista();
LiContigua adicionarItem(LiContigua lista, Valor item);
Valor acessarItem(LiContigua lista, int index);
void limparLista(LiContigua lista);
void expandirLista(LiContigua lista);
void retrairLista(LiContigua lista);

#endif //ESTRUTURASDEDADOS_LISTACONTIGUADINAMICA_H
