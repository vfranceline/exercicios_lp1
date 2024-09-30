#include <stdio.h>
#include "calculadora.h"

int main(){
  float num1 = 0, num2 = 0;

  int escolha;

  printf("Qual operação voce gostaria de realizar: \n 1- soma \n 2- subtração \n");
  scanf("%d", &escolha);

  printf("Informe o primeiro número da operação: ");
  scanf("%f", &num1);
  printf("Informe o segundo número da operação: ");
  scanf("%f", &num2);

  if(escolha == 1){
    printf("%d \n", soma(num1, num2));
  } else if(escolha == 2){
    printf("%d \n", subtracao(num1, num2));
  }

  return 0;
}