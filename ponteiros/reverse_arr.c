// Escreva uma função void reverte(int *arr, int tamanho) que inverte um array. 
// Use-a em int valores[] = {1, 2, 3, 4, 5}; e imprima o array invertido.

#include <stdio.h>
#include <stdlib.h>

void reverte(int *arr, int tamanho){
    int copia_arr[tamanho];
    for (int i = 0; i < tamanho; i++){
        copia_arr[i] = arr[i];
    }

    int tam = tamanho - 1;

    for(int i = 0; i < tamanho; i++){
        arr[i] = copia_arr[tam--];
    }
}

int main(){
    int valores[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(valores)/sizeof(valores[0]);

    reverte(valores, tamanho);

    for (int i = 0; i<tamanho; i++){
        printf("%d ", valores[i]);
    }

    return 0;
}