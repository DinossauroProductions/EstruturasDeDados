cmake_minimum_required(VERSION 3.25)
project(EstruturasDeDados C)

set(CMAKE_C_STANDARD 11)

add_executable(EstruturasDeDados

        Main.h
        Main.c

        Libs/Arquivos.c
        Libs/Arquivos.h
        Libs/Matrizes.c
        Libs/Matrizes.h

        Listas/ListaEncadeada.c
        Listas/ListaEncadeada.h
        Listas/ListaContiguaDinamica.c
        Listas/ListaContiguaDinamica.h
        Listas/ListaLIFOEncadeada.c
        Listas/ListaLIFOEncadeada.h

        Exercicios/aritmeticaPonteiros.c
        Exercicios/aritmeticaPonteiros.h
        Exercicios/stringsPonteiros.c
        Exercicios/stringsPonteiros.h
        Exercicios/buscas.c
        Exercicios/buscas.h
        Exercicios/exercicio_4_4-1.c
        Exercicios/exercicio_4_4-1.h
        Exercicios/Recursividade.c
        Exercicios/Recursividade.h Exercicios/exercicio_4_4-4.c Exercicios/exercicio_4_4-4.h Exercicios/exercicio_5_4-2.c Exercicios/exercicio_5_4-2.h Exercicios/exercicio_5_4-3.c Exercicios/exercicio_5_4-3.h Exercicios/exercicio_5_4-4.c Exercicios/exercicio_5_4-4.h Exercicios/exercicio_5_4-5.c Exercicios/exercicio_5_4-5.h Arvores/ArvoreBinaria.c Arvores/ArvoreBinaria.h Exercicios/exercicio_8_3-1:2:3.c Exercicios/exercicio_8_3-1:2:3.h)

target_link_libraries(EstruturasDeDados
        m)
