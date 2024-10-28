// 6: Declare uma variável ponto-flutuante e um ponteiro para esse ponto-flutuante. Atribua o endereço da 
// variável ao ponteiro e imprima o valor do ponto-flutuante usando tanto a variável quanto o ponteiro.

#include <stdio.h>
#include <stdlib.h>

int main(){
    float v = 1.58;
    float *ptr_v = &v;

    printf("valor do ponto flutuante pela variavel: %.2f \n", v);
    printf("valor do ponto flutuante pelo ponteiro: %.2f \n", *ptr_v);

    return 0;
}