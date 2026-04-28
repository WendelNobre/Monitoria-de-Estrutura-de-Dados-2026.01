// Inclui o arquivo controller.c, que contém as implementações das funções da lista
#include "controller.c"

// Define a função principal do programa
int main(){
    // Cria uma nova lista encadeada vazia e armazena o ponteiro em li
    Lista* li = criarLista();

    // Insere o valor 4 no início da lista
    inserirInicio(li,4);
    // Insere o valor 3 no início da lista (agora a lista é 3 -> 4)
    inserirInicio(li,3);
    // Insere o valor 2 no início da lista (agora a lista é 2 -> 3 -> 4)
    inserirInicio(li,2);
    // Insere o valor 1 no início da lista (agora a lista é 1 -> 2 -> 3 -> 4)
    inserirInicio(li,1);

    // Comentário sugerindo experimentar inserir dados diferentes
    // Experimente inserir dados diferentes

    // Comentário indicando onde inserir as funções a serem implementadas
    // Insira as funções aqui!

    // Imprime os elementos da lista
    imprimirLista(li);

    // Libera a memória alocada para o ponteiro da lista (não libera os nós, apenas o ponteiro)
    free(li);

    // Retorna 0, indicando que o programa terminou com sucesso
    return 0;
}