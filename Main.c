#include "Main.h"



//#include <stdio.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    //Exercícios gerais:

    //aritmeticaPonteirosMain();
    //exerciciosPonteirosMain();
    //mainRecursividade();
    //exercicio_4_4_1();
    exercicio_4_4_4();


    //Testar Bibliotecas

    //printFileTest("../resources/matrizes.txt");
    //testarMultiplicassao();


    // Estruturas em Lista

    //mainListasContiguas();
    //mainListasEncadeadas();





}

char* verificarOS(){
    #ifdef _WIN32
        return "windows";
    #endif

    #ifdef __linux__
        return "linux";
    #endif
}
