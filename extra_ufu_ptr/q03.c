// Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do
// teclado. Em seguida, compare seus endereços e exiba o conteudo do maior endereço.

#include <stdio.h>

int main(){
    int A, B, maior;

    printf("informe a primeira variavel: ");
    scanf("%d", &A);

    printf("informe a segunda variavel: ");
    scanf("%d", &B);

    if (&A > &B){
        maior = A;
    }
    else{
        maior = B;
    }

    printf("o endereço de A é: %p \n", &A);
    printf("o endereço de B é: %p \n", &B);
    printf("conteudo do maior endereço: %d \n", maior);

    return 0;
}