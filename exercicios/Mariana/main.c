// Adiciona o arquivo com as funções da lista
#include "controller.c"

// Começa o programa aqui
int main(){
    // Faz uma lista nova
    Lista* li = criarLista();

    // Adiciona o número 4 no começo
    inserirInicio(li,4);
    // Adiciona o número 3 no começo (agora é 3,4)
    inserirInicio(li,3);
    // Adiciona o número 2 no começo (agora é 2,3,4)
    inserirInicio(li,2);
    // Adiciona o número 1 no começo (agora é 1,2,3,4)
    inserirInicio(li,1);

    // Tente mudar os números aqui
    // Experimente inserir dados diferentes

    // Coloque suas funções novas aqui
    // Insira as funções aqui!

    // Mostra a lista na tela
    imprimirLista(li);

    // Libera o espaço da lista
    free(li);

    // Termina o programa
    return 0;
}