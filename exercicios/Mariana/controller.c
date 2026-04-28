// Adiciona o arquivo com as funções que você vai fazer
#include "suasfuncoes.c"

// Faz uma função para criar uma lista nova e vazia
Lista* criarLista(){
    // Reserva um espaço na memória para guardar a lista
    Lista *li = malloc(sizeof(Lista));
    // Se conseguiu reservar, deixa a lista vazia
    if(li != NULL) *li = NULL;
    // Devolve a lista criada
    return li;
}

// Faz uma função para adicionar um número no começo da lista
void inserirInicio(Lista* li, int valor){
    // Se a lista não existe, para aqui
    if(li == NULL) return;

    // Reserva espaço para um novo pedaço da lista
    No* novo = malloc(sizeof(No));
    // Coloca o número no novo pedaço
    novo->valor = valor;

    // Liga o novo pedaço ao começo da lista antiga
    novo->prox = *li;

    // Agora o começo da lista é o novo pedaço
    *li = novo;

    // Termina a função
    return;
}

// Faz uma função para tirar um pedaço da lista em um lugar específico
void removerPelaPosicao(Lista* li, int posicao){
    // Se a lista não existe, está vazia ou o lugar é errado, para aqui
    if(li == NULL || *li == NULL || posicao <= 0) return;

    // Se o lugar é o primeiro
    if(posicao == 1){
        // Pega o primeiro pedaço para tirar
        No* remover = *li;
        // O começo agora é o próximo pedaço
        *li = remover->prox;
        // Libera o espaço do pedaço tirado
        free(remover);
        // Termina a função
        return;
    }

    // Começa do começo da lista
    No* aux = *li;
    // Conta os lugares
    int cont = 1;

    // Anda pela lista até chegar perto do lugar certo
    while(aux->prox != NULL && cont < posicao - 1){
        // Vai para o próximo
        aux = aux->prox;
        // Conta mais um
        cont++;
    }

    // Se não achou o lugar, para aqui
    if(aux->prox == NULL) return;

    // Pega o pedaço para tirar
    No* remover = aux->prox;
    // Liga o pedaço anterior ao próximo
    aux->prox = remover->prox;
    // Libera o espaço do pedaço tirado
    free(remover);
}

// Faz uma função para contar quantos pedaços há na lista
int tamanhoLista(Lista* li){
    // Se a lista não existe, diz que tem 0
    if(li == NULL) return 0;

    // Começa do começo da lista
    No* aux = *li;

    // Começa a contar do zero
    int cont = 0;

    // Anda por toda a lista
    while(aux != NULL){
        // Conta mais um
        cont++;
        // Vai para o próximo
        aux = aux->prox;
    }

    // Devolve quantos contou
    return cont;
}

// Faz uma função para mostrar todos os números da lista
void imprimirLista(Lista* li){
    // Se a lista não existe
    if (li == NULL){
        // Mostra mensagem de erro
        printf("Lista inválida");
        // Termina a função
        return;
    // Se a lista está vazia
    } else if (*li == NULL) {
        // Mostra que está vazia
        printf("Lista vazia");
        // Termina a função
        return;
    } 

    // Começa do começo da lista
    No* aux = *li;

    // Anda por toda a lista
    while(aux != NULL){
        // Mostra o número e uma seta
        printf(" %d ->",aux->valor);
        // Vai para o próximo
        aux = aux->prox;
    }

    // Mostra o fim da lista
    printf(" NULL\n");

}