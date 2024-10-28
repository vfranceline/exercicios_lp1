// Escreva uma função void multiplicaPorDois(int *arr, int tamanho) que multiplica cada elemento de um array
// por 2. No main, declare um array int dados[] = {1, 3, 5, 7, 9};, chame a função e imprima o array modificado.

#include <stdio.h>
#include <stdlib.h>

void multiplicaPorDois(int *arr, int tamanho){
    while(tamanho >= 0){
        arr[tamanho] *= 2;
        tamanho--;
    }
}

int main(){
    int dados[] = {1, 3, 5, 7, 9};
    int tamanho = sizeof(dados)/sizeof(dados[0]);
    int *ptr = dados;
    int i = 0;
    
    multiplicaPorDois(dados, tamanho);

    while(i < tamanho){
        printf("%d \n", *ptr++);
        i++;
    }

    return 0;
}