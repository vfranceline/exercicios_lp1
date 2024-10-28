// Crie uma função char* meuStrcpy(char *dest, const char *src) que 
// copia a string src para dest sem usar a função padrão strcpy.

#include <stdio.h>
#include <stdlib.h>

char* meuStrcpy(char *dest, const char *src){
    char *copia = dest;
    
    while(*src != '\0'){
        *dest = *src;
        dest ++;
        src ++;
    }

    *dest = '\0';

    return copia;
}

int main(){
    const char strA[80] = "remember then";
    char strB[80];

    meuStrcpy(strB, strA);

    puts(strB);

    return 0;
}