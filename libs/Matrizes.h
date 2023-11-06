/** @file matrizes.h
 *
 * @author Guilherme de Almeida Oliveira
 *
 * @brief Biblioteca de Matrizes feita à mão para as necessidades do projeto C de computação gráfica..
 *
 * A biblioteca matrizes.h utiliza a estrutura de dados MatrizF como base para todas as operações, e esta representa uma
 * matriz de quaisquer dimensão (com linhas e colunas positivas), e as dimensões são armazenadas por questões de
 * validação e acesso. Só devem ser usadas as funções da biblioteca para acessar os valores da matriz, utilizando sempre
 * o padrão de linhas e colunas matemático como sistema de coordenadas. Por exemplo: Para acessar o primeiro elemento de
 * uma matriz, passaria-se (1, 1). Para acessar o último elemento de uma matriz n x m, passaria-se (n x m).
 * O sistema de coordenadas foi determinado de forma a simplificar a transição de esquemas matemáticos para código.
 *
 * Considerando o propósito do projeto de realizar testes e experimentos utilizando computação gráfica, a biblioteca vem
 * com algumas funções relacionadas a operações matriciais voltadas para computação gráfica, exemplo:
 * matrizRotacional2D.
 *
 */

// Comando para "compilar" o doc: doxygen docs/doxygenConfig

//
// Created by guilherme on 19/09/23.
//

#ifndef ESTRUTURASDEDADOS_MATRIZES_H
#define ESTRUTURASDEDADOS_MATRIZES_H


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Arquivos.h"

int testarMultiplicassao();

/**
 * @struct matriz
 * @brief Armazena as dimensões da matriz e o ponteiro da matriz em si.
 *
 * Armazena o ponteiro 'p' do tipo (float *) que aponta o endereço de memória onde estão alocados os valores da matriz
 * em si. Os parâmetros 'linhas' e 'colunas', que são do tipo (int) indicam as dimensões da matriz. As funções
 * da biblioteca gerenciam as matrizes, criando-as, acessando-as e realizando operações aritméticas.
 *
 * @warning As informações apontadas por p não devem ser acessadas diretamente, apenas pelo uso das funções da
 * biblioteca. O uso direto é desincentivado pois pode provocar erros de alocação de memória.
 *
 * @var matriz::linhas
 * @brief Representa o número de linhas da matriz.
 *
 * @var matriz::colunas
 * @brief Representa o número de colunas da matriz.
 *
 * @var matriz::p
 * @brief Aponta para a matriz alocada na memória.
 */
struct matriz{
    float *p;
    int linhas, colunas;
}typedef MatrizF;


/**
 * @brief Aloca o espaço de memória necessário para a MatrizF no ponteiro p.
 *
 * @param mat A estrutura da matriz a ser alocada.
 *
 * Pode ser usado em conjunto com a função CriarMatrizFP().
 */
void alocarPonteiro(MatrizF* mat);
/**
 * @brief Cria a MatrizF e define seus elementos como 0.
 *
 * A função aloca uma matriz bidimensional com as dimensões especificadas pelos parâmetros, e a seguir armazena o
 * ponteiro dos dados alocados assim como as dimensões da matriz na struct. Em seguida, define todos os valores da
 * matriz como igual a 0.
 *
 * @param linhas Número de linhas da matriz a ser criada.
 * @param colunas Número de colunas da matriz a ser criada.
 * @return Retorna o ponteiro da struct MatrizF da matriz criada.
 */
MatrizF* criarMatrizF(int linhas, int colunas);
/**
 * @brief Cria a MatrizF e não aloca a memória da matriz.
 *
 * A função aloca uma matriz bidimensional com as dimensões especificadas pelos parâmetros, e a seguir armazena o
 * ponteiro dos dados alocados assim como as dimensões da matriz na struct.
 *
 * @param linhas Número de linhas da matriz a ser criada.
 * @param colunas Número de colunas da matriz a ser criada.
 * @return Retorna o ponteiro da struct MatrizF da matriz criada.
 *
 * @warning A função criarMatrizFP não aloca ou define nenhum valor da matriz, ela deve ser inicializada utilizando
 * a função alocarPonteiro().
 */
MatrizF* criarMatrizFP(int linhas, int colunas);
/**
 * @brief Cria a MatrizF e define seus valores aos do arquivo passado.
 *
 * Utiliza da sub-biblioteca arquivos.h para criar uma MatrizF apartir do mesmo.
 *
 * @param path O caminho do arquivo que será usado.
 * @param nome ?
 * @return Retorna o ponteiro da struct MatrizF da matriz criada.
 * @warning Ainda não implementada!!!
 */
MatrizF* criarMatrizFile(char* path, char* nome);
/**
 * @brief Define todos os elementos da matriz como iguais ao valor.
 *
 * Itera por todos os elementos da matriz e sobscreve todos os seus valores com o parâmetro valor. Útil para limpar a MatrizF rapidamente.
 *
 * @param mat A matriz a ser redefinida.
 * @param valor O valor para sobrescreever a matriz com.
 */
void redefinirMatriz(MatrizF *mat, float valor);
/**
 * @brief Define todos os elementos da matriz para zero.
 *
 * Chama a função refefinirMatriz() passando como parâmetro a matriz mat passada, e o valor 0. Útil para rapidamente
 * limpar a MatrizF.
 *
 * @param mat A matriz a ser zerada.
 */
void zerarMatriz(MatrizF *mat);
/**
 * @brief Libera os valores do ponteiro da matriz, assim como a struct da matriz em si.
 *
 * Chama a função free() passando como parâmetro o ponteiro da MatrizF mat passada, assim como chama o free()
 * passando o ponteiro da MatrizF mat em si.
 *
 * @param mat A matriz a ser liberada.
 *
 * @warning Caso a matriz tenha sido alterada manualmente, pode causar problemas de liberação de memória.
 */
void freeM(MatrizF *mat);
/**
 * @brief Retorna o ponteiro para um elemento da matriz, dado pelas coordenadas (em sistema matemático).
 *
 * Acessa a matriz na posição dada pelos parâmetros linha e coluna, usando a fórmula ((linha) * mat -> colunas) + coluna.
 * As posições são posicionadas em sistema matemático. <br>Exemplo:
 * <br>[ 1 1, 1 2 ]<br>[ 2 1, 2 2 ]
 *
 * @param mat A matriz a ser acessada.
 * @param linha A linha a ser acessada.
 * @param coluna A coluna a ser acessada.
 * @return O valor da matriz na posição especificada.
 */
float* getMF(MatrizF *mat, int linha, int coluna);
/**
 * @brief Printa a matriz passada
 *
 * Printa a matriz toda, usando um looping que chama a função printf.
 * Não possui uma visibilidade tão clara, não tem caracteres como [ ou |.
 *
 * @param mat O ponteiro da MatrizF a ser printada.
 */
void printaMatriz(MatrizF* mat);

/**
 * @brief Soma as matrizes e armazena o resultado na matriz 1.
 *
 * Soma as MatrizF's passadas e armazena os resultados na matriz 1.
 * Em caso de erro (como as matrizes tendo dimensões diferentes), retorna -1.
 * \f(\sigma = \sqrt\dfrac{\sum(x - \bar{x})²}{N}\f)
 *
 * @param mat1 A primeira matriz a ser somada, é onde será armazenado o resultado.
 * @param mat2 A segunda matriz a ser somada.
 * @return Um código de retorno 0 indica sucesso e um código de erro -1 indica fracasso.
 */
int somarMatriz(MatrizF *mat1, MatrizF *mat2);
/**
 * @brief Subtrai as matrizes e armazena o resultado na matriz 1.
 *
 * Substrai as MatrizF's passadas e armazena os resultados na matriz 1.
 * Em caso de erro (como as matrizes tendo dimensões diferentes), retorna -1.
 *
 * @param mat1 A matriz minuendo, onde será armazenado o resultado.
 * @param mat2 A matriz subtraendo.
 * @return Um código de retorno 0 indica sucesso e um código de erro -1 indica fracasso.
 */
int subtrairMatriz(MatrizF *mat1, MatrizF *mat2);
/**
 * @brief Retorna o ponteiro MatrizF de mat1 e mat2.
 *
 * Retorna o ponteiro referente à MatrizF criada para armazenar os resultados.
 * A matriz terá dimensões: linhas de mat1 e colunas de mat2.
 *
 * @param mat1 A primeira MatrizF da multiplicação.
 * @param mat2 A segunda MatrizF da multiplicação.
 * @return A MatrizF produto da multiplicação.
 */
MatrizF* multiplicarMatriz(MatrizF *mat1, MatrizF *mat2);
/**
 * @brief Calcula o cofator da Matriz, dado o elemento na posição x, y (em sistema matemático de Matrizes).
 *
 * Calcula o cofator da MatrizF mat, dado o elemento de posição x, y.
 * A função calcula a MatrizF menor referente ao elemento, depois calcula a determinante da menor.
 * Em seguida, multiplica o elemento de posição (x, y) pela determinante (função calcularDeterminante()) da menor e retorna este valor.
 *
 * @param mat A matriz a ser calculada.
 * @param x A posição referente à linha do elemento.
 * @param y A posição referente à coluna do elemento.
 * @return O cofator calculado.
 */
float calcularCofator(MatrizF *mat, int x, int y);
/**
 * @brief Calcula a Determinante da MatrizF passada.
 *
 * Chama recursivamente a função calcularCofator() que chama a função calcularDeterminante até que se calcule a
 * determinante de uma matriz 2x2. Em seguida, retorna os cofatores para calcular a determinante maior.
 * Caso a MatrizF não seja uma matriz quadrada, ou caso uma de suas dimensões seja negativa, o retorno será de 0.
 *
 * @param mat A matriz a ser calculada.
 * @return O valor da determinante.
 * @warning O retorno de 0 não indica necessariamente 0, visto que a determinante da MatrizF mat pode ser 0.
 */
float calcularDeterminante(MatrizF *mat);
/**
 * @brief Retorna uma nova MatrizF que representa uma matriz de rotação no espaço 2D.
 *
 * Cria uma matriz de rotação "em volta do eixo z", que pode ser tanto no formato 2D quanto 3D, de acordo com o
 * parâmetro tamanho.
 * A matriz segue o seguinte padrão (a -> angle):
 * <pre>
 * [ cos a , sen a ]  [ cos a , sen a ,   0   ]
 * [-sen a , cos a ]  |-sen a , cos a ,   0   |
 *                    [   0   ,   0   ,   1   ]
 * </pre>
 *
 * @param angulo O ângulo de rotação a ser utilizado.
 * @param tamanho O tamanho, sendo apenas 2 ou 3 tamanhos válidos.
 * @return O ponteiro da MatrizF criada apontando a matriz de rotação.
 */
MatrizF* matrizRotacional2D(float angulo, int tamanho);



#endif //ESTRUTURASDEDADOS_MATRIZES_H
