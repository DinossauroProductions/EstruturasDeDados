#include "Main.h"



//#include <stdio.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    //Exercícios gerais:

    //aritmeticaPonteirosMain();
    //exerciciosPonteirosMain();
    //mainRecursividade();
    //exercicio_4_4_1();
    //exercicio_4_4_4();
    //exercicio_5_4_2();
    //exercicio_5_4_3();
    //exercicio_5_4_4();
    //exercicio_5_4_5();
    exercicio_8_3_1();

    //Testar Bibliotecas

    //printFileTest("../resources/matrizes.txt");
    //testarMultiplicassao();


    // Estruturas em Lista

    //mainListasContiguas();
    //mainListasEncadeadas();

    // Estruturas em Árvore

    //mainArvoreBinaria();



}

char* verificarOS(){
    #ifdef _WIN32
        return "windows";
    #endif

    #ifdef __linux__
        return "linux";
    #endif
}
