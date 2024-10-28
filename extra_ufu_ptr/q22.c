// Crie uma func¸ao para somar dois arrays. Esta funçao deve receber dois arrays e retornar
// a soma em um terceiro array. Caso o tamanho do primeiro e segundo array seja diferente
// entao a funçao retornar a ZERO (0). Caso a funçao seja concluıda com sucesso a mesma
// deve retornar o valor UM (1). Utilize aritmetica de ponteiros para manipulaçao do array.

#include <stdio.h>

int somar_arr(int *arr1, int *arr2, int *arr3, int tamA, int tamB){
    if (tamA != tamB){
        return 0;
    }
    else{
        for(int i = 0; i < tamA; i++){
            arr3[i] = arr1[i] + arr2[i];
        }
        return 1;
    }

}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};
    int tamanho1 = sizeof(arr1) / sizeof(arr1[0]);
    int tamanho2 = sizeof(arr2) / sizeof(arr2[0]);
    int resultado[tamanho1]; // Array para armazenar o resultado

    int status = somar_arr(arr1, arr2, resultado, tamanho1, tamanho2);

    if (status == 1) {
        printf("Arrays somados com sucesso. Resultado:\n");
        for (int i = 0; i < tamanho1; i++) {
            printf("%d ", *(resultado + i));
        }
    } else {
        printf("Erro: Os arrays têm tamanhos diferentes.\n");
    }

    return 0;
}