// Elabore uma funçao que receba duas strings como parametros e verifique se a segunda string 
// ocorre dentro da primeira. Use aritmetica de ponteiros para acessar os caracteres das strings.

#include <stdio.h>

int comparandoStr(const char *arrA , const char *arrB){
    const char *p1, *p2, *p1_advance;

    if (*arrB =='\0'){
        return 1;
    }

    for (p1 = arrA; *p1 != '\0'; p1++){
        if (*p1 == *arrB){
            p1_advance = p1;
            p2 = arrB;

            while (*p1_advance != '\0' && *p2 != '\0' && *p1_advance == *p2){
                p1_advance++;
                p2++;
            }

            if(*p2 == '\0'){
                return 1;
            }
        }
    }
    return 0; 
}

int main(){

    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    // Removendo o caractere de nova linha ('\n') de fgets
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Verificação de ocorrência
    if (ocorre(str1, str2)) {
        printf("A segunda string ocorre dentro da primeira.\n");
    } else {
        printf("A segunda string não ocorre dentro da primeira.\n");
    }

    return 0;
    
}