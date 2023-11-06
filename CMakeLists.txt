cmake_minimum_required(VERSION 3.25)
project(EstruturasDeDados C)

set(CMAKE_C_STANDARD 11)

add_executable(EstruturasDeDados
        Exercicios/buscas.c
        Exercicios/aritmeticaPonteiros2.c
        Main.h
        Main.c
        Exercicios/exerciciosPonteiros.c
        libs/Arquivos.c
        libs/Arquivos.h
        libs/Matrizes.c
        libs/Matrizes.h
        Listas/ListaEncadeada.c
        Listas/ListaEncadeada.h Listas/ListaContiguaDinamica.c Listas/ListaContiguaDinamica.h)

target_link_libraries(EstruturasDeDados
        m)
