// Crie uma struct que represente um aluno com os seguintes campos: nome, matricula (um número inteiro) e nota (um valor float). Escreva um programa que permita:

// Adicionar alunos a um array.
// Exibir todos os alunos com seus detalhes.
// Pesquisar um aluno pelo número de matrícula e exibir seus detalhes.
// Passos:

// Defina a struct Aluno:

// A struct deve ter três campos: nome (uma string de caracteres), matricula (um número inteiro), e nota (um valor float).
// Implemente Funções:

// Adicionar Aluno: Uma função para adicionar um aluno a um array.
// Exibir Alunos: Uma função para exibir todos os alunos no array.
// Pesquisar Aluno: Uma função para pesquisar um aluno pelo número de matrícula.
// Teste o Programa:

// Na função main, crie um array de alunos, adicione alguns alunos a ele e, em seguida, use as outras funções para exibir e pesquisar alunos.

#include <stdio.h>
#include <string.h>
#define MAX_ALUNOS 100

typedef struct {
    char nome[51];
    int matricula;
    float nota;
} Aluno;

void func_add(Aluno arrAlunos[], int *numAlunos){
    Aluno novoAluno;

    printf("digite o nome do aluno: ");
    scanf("%49s", novoAluno.nome);
    
    printf("digite a matricula: ");
    scanf("%d", &novoAluno.matricula);

    printf("digite a nota: ");
    scanf("%f", &novoAluno.nota);

    arrAlunos[*numAlunos] = novoAluno;
    (*numAlunos)++;
}

void func_exibir(Aluno arrAlunos[], int numAlunos){
    for(int i = 0; i < numAlunos; i++){
        printf("aluno: %s \n matricula: %d \n nota: %f \n", 
        arrAlunos[i].nome, 
        arrAlunos[i].matricula, 
        arrAlunos[i].nota);
    }
}

void func_pesquisar(Aluno arrAlunos[], int numAlunos, int matricula){
    for(int i = 0; i < numAlunos; i++){
        if(arrAlunos[i].matricula == matricula){
            printf("aluno encontrado! \n nome: %s \n nota: %f", arrAlunos[i].nome, arrAlunos[i].nota);
        }
    }
    printf("aluno não encontrado");
}

int main(){
    Aluno alunos[MAX_ALUNOS];
    int numAlunos = 0;
    int opcao = 1, matricula;

    while(opcao =! 0){
        printf("\n menu: \n 1. add aluno\n 2. exibir todos alunos\n 3. pesquisar um aluno\n 0. sair\n digite sua opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            func_add(alunos, &numAlunos);
            break;
        case 2:
            func_exibir(alunos, numAlunos);
            break;
        case 3:
            printf("digite a matricula do aluno: ");
            scanf("%d", &matricula);
            func_pesquisar(alunos, numAlunos, matricula);
            break;
        case 0:
            printf("saindo...\n");
        default:
            printf("opcao invalida \n");
        }
    }
    return 0;
}