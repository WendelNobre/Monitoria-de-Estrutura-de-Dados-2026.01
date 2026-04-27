#include "suasfuncoes.c"

Lista* criarLista(){
    Lista *li = malloc(sizeof(Lista));
    if(li != NULL) *li = NULL;
    return li;
}

void inserirInicio(Lista* li, int valor){
    if(li == NULL) return;

    No* novo = malloc(sizeof(No));
    novo->valor = valor;

    novo->prox = *li;

    *li = novo;

    return;
}

void removerPelaPosicao(Lista* li, int posicao){
    if(li == NULL || *li == NULL || posicao <= 0) return;

    if(posicao == 1){
        No* remover = *li;
        *li = remover->prox;
        free(remover);
        return;
    }

    No* aux = *li;
    int cont = 1;

    while(aux->prox != NULL && cont < posicao - 1){
        aux = aux->prox;
        cont++;
    }

    if(aux->prox == NULL) return;

    No* remover = aux->prox;
    aux->prox = remover->prox;
    free(remover);
}

int tamanhoLista(Lista* li){
    if(li == NULL) return 0;

    No* aux = *li;

    int cont = 0;

    while(aux != NULL){
        cont++;
        aux = aux->prox;
    }

    return cont;
}

void imprimirLista(Lista* li){
    if (li == NULL){
        printf("Lista inválida");
        return;
    } else if (*li == NULL) {
        printf("Lista vazia");
        return;
    } 

    No* aux = *li;

    while(aux != NULL){
        printf(" %d ->",aux->valor);
        aux = aux->prox;
    }

    printf(" NULL\n");

}