// Escreva uma função void converteParaMaiusculas(char *str) que altera todas as letras minúsculas
//  de uma string para maiúsculas. Teste com a string char texto[] = "Programação";

#include <stdio.h>
#include <stdlib.h>

void converteParaMaiusculas(char *str){
    while (*str != '\0'){
        if(*str >= 'a' && *str <= 'z'){
            *str -= 32;
        }
        str++;
    }
}

int main(){
    char texto[] = "Vitoria";
    converteParaMaiusculas(texto);

    puts(texto);

    return 0;
}