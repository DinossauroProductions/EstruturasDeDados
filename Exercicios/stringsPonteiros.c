#include "stringsPonteiros.h"

int exerciciosPonteirosMain(){

    char* palavra = criarString(20);

    for(int i = 0; i < 20; i++){
        *(palavra + i) = 'a' + i;
    }

    char* palavra2 = " Lorem Ipsum";

    char* resultado = concatenarStrings(palavra, palavra2);

    printf("%s", resultado);

    return *(resultado) == '\0' || resultado == NULL ? -1 : 0;
}

//Referente ao exercício n⁰ 15
//15. Codificar uma função capaz de calcular o faturamento total obtido com as vendas
//realizadas. A função deve receber como parâmetro os valores de todas as vendas
//realizadas.

//código para testar a função:
// float numeroVendas = 10;
//    float *vendas = malloc(sizeof(float) * numeroVendas);
//
//    *(vendas) = 10.25f;
//    *(vendas + 1) = 15.0f;
//    *(vendas + 2) = 29.95f;
//    *(vendas + 3) = 30.0f;
//    *(vendas + 4) = 15.1f;
//
//    *(vendas + 5) = 20;
//    *(vendas + 6) = 70.0f;
//    *(vendas + 7) = 1.5f;
//    *(vendas + 8) = 11.8f;
//    *(vendas + 9) = 15;
//
//    float soma = faturamentoTotal(vendas, numeroVendas);
//
//    printf("\n\nFaturamento total: %.2f\n\n", soma);

float faturamentoTotal(float *vendas, int numeroVendas){
    float soma = 0;
    for(int i = 0; i < numeroVendas; i++){
        //printf("%f\n", *(vendas+i));
        soma += *(vendas + i);
    }

    return soma;
}

// =============================================================
// -------------------------------------------------------------
// =============================================================


//Referente ao exercício n⁰ 25
//25. Escreva uma função capaz de concatenar 2 strings. A função deve retornar uma string
//resultante da concatenação.

//    char a = 'a';
//
//    char* palavra = criarString(10);
//
//    for(int i = 0; i < 10; i++){
//        *(palavra + i) = a + i;
//    }
//
//    char* palavra2 = " Lorem Ipsum";
//
//    char* resultado = concatenarStrings(palavra, palavra2);
//
//    printf("%s", resultado);

char* criarString(int tamanho){
    char* palavra = malloc(sizeof(char) * tamanho + 1);
    for(int i = 0; i < tamanho + 1; i++){

        *(palavra + i) = ' ';
        if(i == tamanho - 1)
            *(palavra + tamanho) = '\0';
    }
    return palavra;
}

int tamanhoString(char* string){
    int tamanho = 0;
    while(1){
        if(*(string + tamanho) == '\0')
            break;
        tamanho++;
    }
    return tamanho-1;
}

char* concatenarStrings(char* string1, char* string2){

    int tamanho1 = 0, tamanho2 = 0;

    tamanho1 = tamanhoString(string1);
    tamanho2 = tamanhoString(string2);
    //printf("\n%d, %d", tamanho1, tamanho2);

    int tamanhoFinal = tamanho1 + tamanho2;

    char* stringC = criarString(tamanhoFinal);

    for(int i = 0; i < tamanhoFinal + 1; i++){
        if(i == tamanhoFinal + 1)
            *(stringC + i) = '\0';
        else if(i >= tamanho1){
            *(stringC + i) = *(string2 + i - tamanho1);
        }
        else{
            *(stringC + i) = *(string1 + i);
        }

    }

    return stringC;

}

// =============================================================
// -------------------------------------------------------------
// =============================================================