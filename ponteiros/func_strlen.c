// Escreva uma função size_t meuStrlen(const char *str) que retorna o 
// comprimento de uma string sem usar a função padrão strlen.

#include <stdio.h>
#include <stdlib.h>

size_t meuStrlen(const char *str){
    size_t len = 0;

    while (*str != '\0')
    {
        len ++;
        str ++;
    }
    return len;
}

int main(){
    const char texto[] = "Vitoria";

    size_t comprimento = meuStrlen(texto);

    printf("%zu \n", comprimento);

    return 0;
}