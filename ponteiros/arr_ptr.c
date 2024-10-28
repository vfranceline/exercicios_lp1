// Dado um array int numeros[5] = {2, 4, 6, 8, 10};, use um ponteiro para imprimir todos os seus elementos.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[5] = {2, 4, 6, 8, 10};
    // int ss = sizeof(numeros)/sizeof(int);
    int * ptr = numeros;
    int i = 0;

    while(i < 5){
        printf("%d \n", *ptr++);
        i++;
    }

    
    return 0;
}