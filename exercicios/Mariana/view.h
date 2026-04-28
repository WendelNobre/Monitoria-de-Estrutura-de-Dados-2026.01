// Guarda de inclusão para evitar múltiplas inclusões deste arquivo de cabeçalho
#ifndef VIEW_H
// Define a macro do guarda de cabeçalho
#define VIEW_H

// Inclui a biblioteca padrão de entrada/saída para funções como printf
#include <stdio.h>
// Inclui a biblioteca padrão para funções de alocação de memória como malloc e free
#include <stdlib.h>

// Compilação condicional: verifica se não está compilando para Windows 64 bits
#ifndef _WIN64
    // Define LIMPAR como o comando "clear" para sistemas Unix-like (Linux, macOS)
    #define LIMPAR "clear"
#else
    // Define LIMPAR como o comando "cls" para sistemas Windows
    #define LIMPAR "cls"
#endif

// Define limpar como uma macro que executa o comando do sistema para limpar a tela
#define limpar system(LIMPAR);

// Declara um protótipo de função para limpar o buffer de entrada (implementação em outro lugar)
void limpar_buffer();

// Define uma struct chamada No para representar um nó na lista encadeada
typedef struct No {
    // Campo inteiro para armazenar o valor do nó
    int valor;
    // Ponteiro para o próximo nó na lista
    struct No* prox; 
} No;

// Define Lista como um alias de tipo para um ponteiro para No, representando a cabeça da lista
typedef struct No* Lista;

// Declara um protótipo de função para criar uma nova lista vazia
Lista* criarLista();
// Declara um protótipo de função para inserir um valor no início da lista
void inserirInicio();

// Comentário indicando a função que o usuário precisa implementar
//Função que você irá criar:
// Declara um protótipo de função para inserir um valor em uma posição específica na lista
void inserirPelaPosicao(/* Coloque os parâmetros aqui */);
// ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^

// Declara um protótipo de função para remover um nó em uma posição específica
void removerPelaPosicao(Lista* li, int posicao);
// Declara um protótipo de função para imprimir o conteúdo da lista
void imprimirLista(Lista* li);
// Declara um protótipo de função para retornar o tamanho (número de elementos) da lista
int tamanhoLista(Lista* li);

// Fim do guarda de inclusão
#endif