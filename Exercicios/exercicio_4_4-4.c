//
// Created by guilherme on 08/11/23.
//


#include "exercicio_4_4-4.h"

//Enunciado:

//Implemente um programa capaz de gerenciar um conjunto de senhas (string), seguindo o
//critério FIFO para armazenar e recuperar informações. Disponibilize APENAS as seguintes
//operações:

//a. Inserção de uma senha na fila.
//b. Recuperação (atendimento) de uma senha da fila.

//As senhas devem ser geradas da seguinte forma: IFET1, IFET2, IFET3, ...

//Sugestão de opções para o usuário:

//*****************************************
//SISTEMA DE GERENCIAMENTO DE SENHAS
//*****************************************

//1. Gerar senha.
//2. Atender ao usuário.
//3. Sair do sistema.

//* A opção 1 deve ser responsável por gerar uma nova senha e inseri-la na fila.
//** A opção 2 deve ser responsável pela retirada da senha da fila.


#define MAX 50

typedef struct FIFO{
    unsigned int topo, comeco;
    char* lista[MAX];

} Fila;

char* criarSenha(Fila* fila);
char* recuperarSenha(Fila* fila);
void encerrar(Fila* senhas, char* on);

char* os;

int exercicio_4_4_4(){

    os = verificarOS();

    char* clearCommand;

    if(strcmp(os, "windows") == 0){
        clearCommand = "cls";
    }
    else if(strcmp(os, "linux") == 0){
        clearCommand = "clear";
    }


    Fila senhas;
    for(int i = 0; i < MAX; i++){
        senhas.lista[i] = NULL;
    }
    senhas.topo = 0;
    senhas.comeco = 0;

    char on = 't';
    char* outputMensagem = NULL;

    while(on == 't'){

        system(clearCommand);

        printf("******************************************\n"
                "    SISTEMA DE GERENCIAMENTO DE SENHAS\n"
                "******************************************\n\n");
        if(outputMensagem)
            printf("%s\n\n", outputMensagem);
        printf(" 1 - Para gerar uma nova senha\n 2 - Para exibir uma senha\n 3 - Para sair do sistema\n\n> ");

        int input = 0;

        int codigo = scanf("%d", &input);

        if(codigo == EOF){
            input = 0;
            encerrar(&senhas, &on);
        }
        else if(codigo == 0){
            input = 0;
            while (fgetc(stdin) != '\n');
        }



        switch(input){
            case 1: {
                outputMensagem = criarSenha(&senhas);
                break;
            }
            case 2: {
                char *retorno = recuperarSenha(&senhas);
                if (retorno == NULL) {
                    outputMensagem = "Lista vazia, impossível retornar.";
                }
                else{
                    outputMensagem = malloc(30 * sizeof(char));
                    for(int i = 0; i < 30; i++){
                        outputMensagem[i] = '\0';
                    }
                    outputMensagem = strcat(outputMensagem, "Senha retornada: ");
                    outputMensagem = strcat(outputMensagem, retorno);
                }

                break;
            }
            case 3: {
                encerrar(&senhas, &on);
            }
            default: {
                outputMensagem = "Entrada inválida";
                break;
            }
        }


    }

    return 0;
}

char* criarSenha(Fila* fila){

    if(fila->topo == MAX){
        return "Lista cheia.";
    }

    char* senhaGerada = malloc(sizeof(char) * 8);
    for(int i = 0; i < 8; i++){
        senhaGerada[i] = '\0';
    }
    senhaGerada = strcat(senhaGerada, "IFET");
    snprintf((char*)(senhaGerada+4),3,"%d",fila->topo+1);
    //senhaGerada[6] = (char) ((fila->topo + 1) + 48);
    senhaGerada[7] = '\0';

    fila->lista[fila->topo] = senhaGerada;

    fila->topo++;

    return "Senha criada com sucesso.";
}

char* recuperarSenha(Fila* fila) {

    if (fila->comeco == fila->topo)
        return NULL;

    char *senha = malloc(strlen((const char *) fila->lista));
    strcpy(senha, fila->lista[fila->comeco]);

    free(fila->lista[fila->comeco]);
    fila->lista[fila->comeco] = NULL;
    fila->comeco++;
    return senha;
}

void encerrar(Fila* senhas, char* on){
    printf("\nEncerrando...");
    for(int i = 0; i < MAX; i++){
        free(senhas->lista[i]);
    }
    if (strcmp(os, "windows") == 0){
        system("pause");
    }
    *on = 'f';
}