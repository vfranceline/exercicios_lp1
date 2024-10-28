// Escreva uma func¸ao que aceita como par ˜ ametro um array de inteiros com N valores, e ˆ
// determina o maior elemento do array e o numero de vezes que este elemento ocorreu ´
// no array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, 
// a func¸ao deve retorna para o programa que a chamou o valor 15 e o n ˜ umero 3 ´
// (indicando que o numero 15 ocorreu 3 vezes). A func¸ ´ ao deve ser do tipo ˜ void.

#include <stdio.h>

void func_maior(int *arr, int *maior, int *ocorrencias, int tamanho){
    *maior = arr[0];

    for (int i = 0; i < tamanho; i++){
        if(arr[i] > *maior){
            *maior = arr[i];
            *ocorrencias = 1;

        }
        else if(arr[i] == *maior){
            (*ocorrencias)++;
        }
    }

}

int main(){
    int arr[] = {5, 2, 15, 3, 7, 15, 8, 6, 15};
    int maior = 0, cont = 0;
    int tamanho = sizeof(arr)/sizeof(arr[0]);


    func_maior(arr, &maior, &cont, tamanho);
    
    printf("maior: %d \n ocorrencias: %d \n", maior, cont);
    
}