// Dada uma variável inteira contagem = 5, use um ponteiro para incrementar seu valor em 1 e imprima o valor atualizado.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int contagem = 5;
    int *ptr = &contagem;

    printf("%d \n", *ptr+=1);

    return 0;
}