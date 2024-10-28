// Escreva uma funçao que dado um numero real passado como parametro, retorne a parte
// inteira e a parte fracionaria deste n ´ umero. Escreva um programa que chama esta func¸ ´ ao. ˜
// Prototipo: ´
// void frac(float num, int* inteiro, float* frac);

#include <stdio.h>

void frac(float num, int *inteiro, float *frac){
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

int main(){
    float num, parteFracionaria;
    int parteInteira;

    printf("Digite um número real: ");
    scanf("%f", &num);

    frac(num, &parteInteira, &parteFracionaria);

    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionária: %f\n", parteFracionaria);

    return 0;
    
}