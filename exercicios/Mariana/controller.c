// Inclui o arquivo suasfuncoes.c, que contém as funções a serem implementadas
#include "suasfuncoes.c"

// Define a função criarLista, que cria uma nova lista encadeada vazia
Lista* criarLista(){
    // Aloca memória para um ponteiro de Lista (ponteiro para ponteiro de No)
    Lista *li = malloc(sizeof(Lista));
    // Se a alocação foi bem-sucedida, inicializa a lista como NULL (vazia)
    if(li != NULL) *li = NULL;
    // Retorna o ponteiro para a lista criada
    return li;
}

// Define a função inserirInicio, que insere um valor no início da lista
void inserirInicio(Lista* li, int valor){
    // Verifica se a lista é inválida (ponteiro nulo), se sim, retorna sem fazer nada
    if(li == NULL) return;

    // Aloca memória para um novo nó
    No* novo = malloc(sizeof(No));
    // Define o valor do novo nó
    novo->valor = valor;

    // Faz o próximo do novo nó apontar para o atual início da lista
    novo->prox = *li;

    // Atualiza o início da lista para o novo nó
    *li = novo;

    // Retorna da função
    return;
}

// Define a função removerPelaPosicao, que remove um nó em uma posição específica
void removerPelaPosicao(Lista* li, int posicao){
    // Verifica se a lista é inválida, vazia ou posição inválida (<=0), se sim, retorna
    if(li == NULL || *li == NULL || posicao <= 0) return;

    // Se a posição é 1, remove o primeiro elemento
    if(posicao == 1){
        // Ponteiro para o nó a ser removido (o primeiro)
        No* remover = *li;
        // Atualiza o início da lista para o próximo nó
        *li = remover->prox;
        // Libera a memória do nó removido
        free(remover);
        // Retorna da função
        return;
    }

    // Ponteiro auxiliar para percorrer a lista, começando do início
    No* aux = *li;
    // Contador para acompanhar a posição atual
    int cont = 1;

    // Percorre a lista até encontrar o nó anterior ao que será removido
    while(aux->prox != NULL && cont < posicao - 1){
        // Avança para o próximo nó
        aux = aux->prox;
        // Incrementa o contador
        cont++;
    }

    // Se o próximo nó é NULL, significa que a posição é inválida, retorna
    if(aux->prox == NULL) return;

    // Ponteiro para o nó a ser removido (o próximo do auxiliar)
    No* remover = aux->prox;
    // Atualiza o próximo do auxiliar para pular o nó removido
    aux->prox = remover->prox;
    // Libera a memória do nó removido
    free(remover);
}

// Define a função tamanhoLista, que retorna o número de elementos na lista
int tamanhoLista(Lista* li){
    // Se a lista é inválida, retorna 0
    if(li == NULL) return 0;

    // Ponteiro auxiliar para percorrer a lista, começando do início
    No* aux = *li;

    // Contador para contar os elementos
    int cont = 0;

    // Percorre a lista até o final
    while(aux != NULL){
        // Incrementa o contador
        cont++;
        // Avança para o próximo nó
        aux = aux->prox;
    }

    // Retorna o contador (tamanho da lista)
    return cont;
}

// Define a função imprimirLista, que imprime os elementos da lista
void imprimirLista(Lista* li){
    // Verifica se a lista é inválida
    if (li == NULL){
        // Imprime mensagem de lista inválida
        printf("Lista inválida");
        // Retorna da função
        return;
    // Verifica se a lista está vazia
    } else if (*li == NULL) {
        // Imprime mensagem de lista vazia
        printf("Lista vazia");
        // Retorna da função
        return;
    } 

    // Ponteiro auxiliar para percorrer a lista, começando do início
    No* aux = *li;

    // Percorre a lista enquanto não chegar ao final
    while(aux != NULL){
        // Imprime o valor do nó atual seguido de " ->"
        printf(" %d ->",aux->valor);
        // Avança para o próximo nó
        aux = aux->prox;
    }

    // Imprime " NULL\n" para indicar o fim da lista
    printf(" NULL\n");

}