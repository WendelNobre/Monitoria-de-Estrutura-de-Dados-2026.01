#ifndef VIEW_H
#define VIEW_H

#include <stdio.h>
#include <stdlib.h>

#ifndef _WIN64
    #define LIMPAR "clear"
#else
    #define LIMPAR "cls"
#endif

#define limpar system(LIMPAR);

void limpar_buffer();

typedef struct No {
    int valor;
    struct No* prox; 
} No;

typedef struct No* Lista;

Lista* criarLista();
void inserirInicio();

//Função que você irá criar:
void inserirPelaPosicao(/* Coloque os parâmetros aqui */);
// ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^

void removerPelaPosicao(Lista* li, int posicao);
void imprimirLista(Lista* li);
int tamanhoLista(Lista* li);

#endif