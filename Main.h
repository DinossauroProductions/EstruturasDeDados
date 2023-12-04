/**
 * @file
 * @brief Projeto destinado a estudos de Estruturas de Dados.
 *
 * Arquivo header referente ao arquivo "Main.c", que referencia todos os outros arquivos a serem executados.
 * Cada arquivo contém um código exclusivo a si, destinado a um propósito, e possui uma função que pode ser chamada
 * apartir da main para executá-lo.
 */
#ifndef ESTRUTURASDEDADOS_MAIN_H
#define ESTRUTURASDEDADOS_MAIN_H



#include <locale.h>

//exercícios diversos
#include "Exercicios/aritmeticaPonteiros.h"
#include "Exercicios/Recursividade.h"
#include "Exercicios/exercicio_4_4-1.h"
#include "Exercicios/exercicio_4_4-4.h"
#include "Exercicios/exercicio_5_4-2.h"
#include "Exercicios/exercicio_5_4-3.h"
#include "Exercicios/exercicio_5_4-4.h"
#include "Exercicios/exercicio_5_4-5.h"
#include "Exercicios/exercicio_8_3-1:2:3.h"
//matrizes
#include "Libs/Matrizes.h"

//Estruturas em lista
#include "Listas/ListaEncadeada.h"
#include "Listas/ListaContiguaDinamica.h"
#include "Listas/ListaLIFOEncadeada.h"

//Árvores
#include "Arvores/ArvoreBinaria.h"

/**
 * @brief Verifica o sistema operacional atual.
 * @return Um string "linux" para sistemas linux ou "windows" para sistemas windows.
 */
char* verificarOS();



#endif //ESTRUTURASDEDADOS_MAIN_H
