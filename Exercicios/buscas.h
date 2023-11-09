//
// Created by guilherme on 06/11/23.
//

#ifndef ESTRUTURASDEDADOS_BUSCAS_H
#define ESTRUTURASDEDADOS_BUSCAS_H

#include <stdlib.h>
#include <locale.h>
#include <time.h>



//geração de dados
void gerarAleatorioOrdenado(int *vetor, int n);
void gerarAleatorio(int *vetor, int n);

//ordenação de dados
void bubbleSort(int *vetor, int n);

//busca de dados
int binarySearch(int *vetor, int chave, int n);

#endif //ESTRUTURASDEDADOS_BUSCAS_H
