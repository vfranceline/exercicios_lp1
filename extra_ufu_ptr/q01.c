// Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. 
// Associe as variaveis aos ponteiros (use &). Modifique os valores de cada variavel usando os ponteiros. 
// Imprima os valores das variaveis antes e apos a modificaçao.

#include <stdio.h>

int main(){
    int n_int = 10;
    float n_real = 0.0;
    char carac = 'V';

    int *iptr = &n_int;
    float *fptr = &n_real;
    char *cptr = &carac;

    printf("antes de mudar:\n int: %d real: %f char: %c \n", n_int, n_real, carac);

    *iptr = 5;
    *fptr = 1.5;
    *cptr = 'F';

    printf("depois de mudar:\n int: %d real: %f char: %c \n", n_int, n_real, carac);
}