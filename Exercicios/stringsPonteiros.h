//
// Created by guilherme on 06/11/23.
//

#ifndef ESTRUTURASDEDADOS_STRINGSPONTEIROS_H
#define ESTRUTURASDEDADOS_STRINGSPONTEIROS_H

#include <stdlib.h>
#include <stdio.h>

//link do arquivo com os exercícios:
//https://onedrive.live.com/?authkey=%21APFhlNLfXyggKW0&cid=7555D56F389BB5E9&id=7555D56F389BB5E9%21415889&parId=7555D56F389BB5E9%21414575&o=OneUp

int exerciciosPonteirosMain();

//Referente ao exercício 15
float faturamentoTotal(float *vendas, int numeroVendas);

//Referente ao exercício 25
char* criarString(int tamanho);
int tamanhoString(char* string);
char* concatenarStrings(char* string1, char* string2);

#endif //ESTRUTURASDEDADOS_STRINGSPONTEIROS_H
