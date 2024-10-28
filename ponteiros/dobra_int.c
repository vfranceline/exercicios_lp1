// Exercício 0: escreva uma função que recebe um ponteiro para um inteiro e dobra seu valor

#include <stdio.h>

int func(int *n){

    printf("%d \n", *n*2); //poderia ser tbm (*n *= 2)

    return 0;
}

int main(void){
    int num = 10;

    func(&num);

    return 0;
}