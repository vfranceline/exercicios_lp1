// Escreva uma funçao que receba um array de inteiros V e os enderec¸os de duas variaveis
// inteiras, min e max, e armazene nessas variaveis o valor m ´ ´ınimo e maximo do array.
// Escreva tambem uma funçao main que use essa funçao.

#include <stdio.h>

void min_max(int *v, int *min, int *max, int tam){
    *min = v[0];

    *max = v[0];

    while(tam > 0){
        if(*v > *max){
            *max = *v;
        }
        else if(*v < *min){
            *min = *v;
        }
        v++;
        tam--;
    }
}

int main(){
    int arr[5] = {2, 6, 8, 1, 4};
    int minimo, maximo;
    int tamanho = sizeof(arr)/sizeof(arr[0]);

    min_max(arr, &minimo, &maximo, tamanho);

    printf("minimo: %d maximo: %d \n", minimo, maximo);
    
}