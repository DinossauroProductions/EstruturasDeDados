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
        Exercicios/Recursividade.h Exercicios/exercicio_4_4-4.c Exercicios/exercicio_4_4-4.h)

target_link_libraries(EstruturasDeDados
        m)
