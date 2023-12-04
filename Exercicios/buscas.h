/**
 * @file
 * @brief Arquivo destinado a estudar buscas em vetores
 * Análise e estudo de formas de busca e ordenação de dados em vetores (bubble sort e binary search)
 */

//
// Created by guilherme on 06/11/23.
//

#ifndef ESTRUTURASDEDADOS_BUSCAS_H
#define ESTRUTURASDEDADOS_BUSCAS_H

#include <stdlib.h>
#include <locale.h>
#include <time.h>

/**
 * @brief Gera uma sequência aleatória de números em ordem
 *
 * @warning A função exige que o vetor já tenha sido alocado na memória.
 *
 * @param vetor Vetor a ser gerado
 * @param n Tamanho do vetor a ser gerado
 */
void gerarAleatorioOrdenado(int *vetor, int n);

/**
 * @brief Gera uma sequência completamente aleatória de números.
 *
 * @warning A função exige que o vetor já tenha sido alocado na memoria.
 *
 * @param vetor O vetor a ser gerado.
 * @param n O tamanho do vetor.
 */
void gerarAleatorio(int *vetor, int n);

/**
 * @brief Ordena o vetor por bubble sort.
 * Ordena o vetor passado usando o método de bubble sort com complexidade O( n * n )
 *
 * @param vetor O vetor a ser ordenado
 * @param n O tamanho do vetor
 */
void bubbleSort(int *vetor, int n);

/**
 * @brief Busca binária de dados em vetor em ordem crescente.
 * Busca dados em um vetor ordenado, usando busca binária com complexidade O( log(n) ).
 *
 * @param chave O valor a ser buscado no vetor.
 * @param n O tamanho do vetor.
 * @param vetor O vetor.
 *
 * @return O índice do item desejado, ou -1, caso não seja encontrado.
 */
int binarySearch(int *vetor, int chave, int n);

#endif //ESTRUTURASDEDADOS_BUSCAS_H
