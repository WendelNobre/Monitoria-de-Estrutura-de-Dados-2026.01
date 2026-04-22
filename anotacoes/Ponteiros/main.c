#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 20;

    int *p = &num;

    printf("Antes de modificar: Num é igual a %d\n",num);

    *p = 50;

    printf("Depois de modificar: Num é igual a %d\n",num);

}