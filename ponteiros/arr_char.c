// Dado um array de caracteres char mensagem[] = "Olá";, use um ponteiro para imprimir cada caractere da string.

#include <stdio.h>
#include <stdlib.h>

int main(){
    char msg[] = "Ola";
    char *ptr = msg;

    while(*ptr != '\0'){
        printf("%c \n", *ptr++);
    }

    return 0;
}