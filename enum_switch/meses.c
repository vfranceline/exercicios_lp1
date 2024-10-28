// Desenvolva um programa em C que solicite ao usuário a entrada de um número inteiro correspondente a um mês
// do ano (1 para janeiro, 2 para fevereiro, e assim por diante). O programa deve então exibir o nome completo 
// do mês correspondente. Caso o usuário insira um número fora do intervalo de 1 a 12, o programa deve exibir 
// uma mensagem informando que a entrada é inválida.

// DESAFIO: Caso o usuário digite 0 o mês corrente deve ser obtido e utilizado

#include <stdio.h>
#include <stdlib.h>

int main(){

    int mes_selec = 0;

    printf("Digite um número inteiro de 1 a 12 correspondente a um mês do ano: ");
    scanf("%d", &mes_selec);

    switch (mes_selec)
    {
    case 1:
        printf("JANEIRO");
        break;

    case 2:
        printf("FEVEREIRO");
        break;

    case 3:
        printf("MARÇO");
        break;

    case 4:
        printf("ABRIL");
        break;

    case 5:
        printf("MAIO");
        break;

    case 6:
        printf("JUNHO");
        break;

    case 7:
        printf("JULHO");
        break;

    case 8:
        printf("AGOSTO");
        break;

    case 9:
        printf("SETEMBRO");
        break;

    case 10:
        printf("OUTUBRO");
        break;

    case 11:
        printf("NOVEMBRO");
        break;

    case 12:
        printf("DEZEMBRO");
        break;

    default:
        printf("ENTRADA INVALIDA, TENTE NOVAMENTE");
        break;

    }
    return 0;

}