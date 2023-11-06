//
// Created by guilherme de almeida oliveira on 29/09/23.
//


#include "ListaEncadeada.h"


struct Elemento{
    char* nomeAluno;
    float nota;
    int matricula;
};

struct LiEncadeada {
    Elemento elemento;
    LiEncadeada *proximo;
};

void mainListasEncadeadas(){
    LiEncadeada* lista = criaLista();

    LiEncadeada* aluno1 = malloc(sizeof(LiEncadeada));
    aluno1 -> elemento.nomeAluno = "Sergio";
    aluno1 -> elemento.matricula = 100;
    aluno1 -> elemento.nota = 7.0f;

    LiEncadeada* aluno2 = malloc(sizeof(LiEncadeada));
    aluno2 -> elemento.nomeAluno = "John";
    aluno2 -> elemento.matricula = 200;
    aluno2 -> elemento.nota = 6.5f;

    LiEncadeada* aluno3 = malloc(sizeof(LiEncadeada));
    aluno3 -> elemento.nomeAluno = "Maria";
    aluno3 -> elemento.matricula = 300;
    aluno3 -> elemento.nota = 10.0f;

    LiEncadeada* aluno4 = malloc(sizeof(LiEncadeada));
    aluno4 -> elemento.nomeAluno = "Marcelo";
    aluno4 -> elemento.matricula = 400;
    aluno4 -> elemento.nota = 10.0f;


    lista = insereElementoInicio(lista, *aluno1); imprimeLista(lista);
    lista = insereElementoInicio(lista, *aluno2); imprimeLista(lista);
    lista = insereElementoInicio(lista, *aluno3); imprimeLista(lista);
    lista = insereElementoInicio(lista, *aluno4); imprimeLista(lista);

    int matriculaDesejada = 200;
    printf("\nAluno de matricula: %d e: ", matriculaDesejada);
    imprimeAluno(buscaElemento(lista, matriculaDesejada));

    matriculaDesejada = 300;
    printf("\nAluno de matricula: %d e: ", matriculaDesejada);
    imprimeAluno(buscaElemento(lista, matriculaDesejada));

    printf("\n\nA media aritmetica das notas dos alunos e: %.2f", mediaAlunos(lista));

    //lista = removeElemento(lista, elemento2 -> elemento);

    //lista = insereElementoFinal(lista, *elemento3); imprimeLista(lista);
    //lista = insereElementoFinal(lista, *elemento0); imprimeLista(lista);
    //lista = insereElementoFinal(lista, *elemento2); imprimeLista(lista);

    //imprimeLista(lista);

    free(aluno1);
    free(aluno2);
    free(aluno3);
    free(aluno4);

    liberaLista(lista);
}

void imprimeAluno(LiEncadeada* p){
    if(p != NULL){
        printf("Nome: %s, Matricula: %d, Nota: %.1f.\n", p->elemento.nomeAluno, p->elemento.matricula, p->elemento.nota);
    }
    else{
        printf("Aluno não encontrado\n");
    }
}

void imprimeLista(LiEncadeada *atual){
    int i = 1;
    printf("[\n");
    for(LiEncadeada *p = atual; p != NULL; p = p -> proximo, i++){
        imprimeAluno(p);
    }
    printf("]\n");

}

LiEncadeada* criaLista(){
    return NULL;
}

LiEncadeada* insereElementoInicio(LiEncadeada *atual, LiEncadeada no){

    no.proximo = atual;

    LiEncadeada* temp = malloc(sizeof(LiEncadeada));
    *temp = no;
    return temp;

}

LiEncadeada* insereElementoFinal(LiEncadeada *atual, LiEncadeada no){

    LiEncadeada* p = atual;

    if(p != NULL){
        while(p -> proximo != NULL){

            p = p -> proximo;

        }
    }

    LiEncadeada* temp = malloc(sizeof(LiEncadeada));
    *temp = no;

    p -> proximo = temp;

    return atual;
}

void liberaLista(LiEncadeada *atual){

    LiEncadeada* proximoElemento = atual;

    while(proximoElemento != NULL){

        proximoElemento = atual -> proximo;
        free(atual);
        atual = proximoElemento;
    }

}

LiEncadeada* removeElemento(LiEncadeada *atual, int identificador){

    LiEncadeada* anterior = NULL;
    LiEncadeada* primeiro = atual;

    while(atual != NULL){

        if(atual -> elemento.matricula == identificador){

            if(anterior != NULL){
                anterior -> proximo = atual -> proximo;
            }
            else{
                primeiro = atual -> proximo;
            }


            free(atual);

            break;
        }

        anterior = atual;
        atual = atual -> proximo;
    }

    return primeiro;

}

LiEncadeada* buscaElemento(LiEncadeada *atual, int identificador){

    while(atual != NULL){

        if(atual -> elemento.matricula == identificador)
            return atual;

        atual = atual -> proximo;
    }

    return NULL;

}

float mediaAlunos(LiEncadeada* atual){
    float somatorio = 0;
    int contador = 0;

    while(atual != NULL){

        somatorio += atual->elemento.nota;
        contador++;
        atual = atual->proximo;

    }

    return somatorio / ((float) contador);
}

