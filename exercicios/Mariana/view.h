// Protege o arquivo para não ser incluído mais de uma vez
#ifndef VIEW_H
// Define uma palavra especial para proteger o arquivo
#define VIEW_H

// Adiciona ferramentas para entrada e saída, como imprimir na tela
#include <stdio.h>
// Adiciona ferramentas para gerenciar memória, como reservar espaço
#include <stdlib.h>

// Verifica se o computador não é Windows 64 bits
#ifndef _WIN64
    // Define uma palavra para limpar a tela no Linux/Mac
    #define LIMPAR "clear"
#else
    // Define uma palavra para limpar a tela no Windows
    #define LIMPAR "cls"
#endif

// Cria uma ferramenta para limpar a tela
#define limpar system(LIMPAR);

// Diz que existe uma função para limpar o que o usuário digitou
void limpar_buffer();

// Cria um tipo de dado para um pedaço da lista
typedef struct No {
    // O número que guardamos
    int valor;
    // O link para o próximo pedaço
    struct No* prox; 
} No;

// Cria um nome mais fácil para o início da lista
typedef struct No* Lista;

// Diz que existe uma função para criar uma lista nova
Lista* criarLista();
// Diz que existe uma função para adicionar no começo
void inserirInicio();

// Esta é a função que você vai fazer:
//Função que você irá criar:
// Diz que existe uma função para adicionar em um lugar específico
void inserirPelaPosicao(/* Coloque os parâmetros aqui */);
// ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^

// Diz que existe uma função para remover de um lugar específico
void removerPelaPosicao(Lista* li, int posicao);
// Diz que existe uma função para mostrar a lista
void imprimirLista(Lista* li);
// Diz que existe uma função para contar quantos itens há
int tamanhoLista(Lista* li);

// Fim da proteção do arquivo
#endif