// Faça um programa que leia 2 valores inteiros e chame uma funcao que receba estas 2 variaveis 
// e troque o seu conteudo, ou seja, esta funçao é chamada passando duas variaveis A e B por exemplo 
// e, apos a execuçao da funçao, A contera o valor de B e B tera o valor de A.

#include <stdio.h>

int swap(int *A, int *B){
    int temporario = *A;

    *A = *B;
    *B = temporario;

    return 0;

}

int main(){
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    swap(&A, &B);

    printf("Após a troca, A = %d e B = %d\n", A, B);

    return 0;
    
}