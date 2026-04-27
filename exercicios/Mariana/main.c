#include "controller.c"

int main(){

    Lista* li = criarLista();

    inserirInicio(li,4);
    inserirInicio(li,3);
    inserirInicio(li,2);
    inserirInicio(li,1);

    imprimirLista(li);

    free(li);

    return 0;
}