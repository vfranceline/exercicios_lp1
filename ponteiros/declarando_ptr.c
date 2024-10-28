// Declare uma variável inteira num com o valor 10. Em seguida, declare um ponteiro 
// pNum que aponta para num. Imprima o valor de num usando o ponteiro pNum.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 10;
    int *pnum = &num;

    printf("%d \n", *pnum);

    return 0;
}