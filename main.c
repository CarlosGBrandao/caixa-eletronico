#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "main.h"
#define MAX 10



int main()
{
    LISTATURMA m;
    inicializarturma(&m);
    ALUNO aluno1;
    aluno1.cod_aluno = 001;
    aluno1.nome = "Daniel";
    aluno1.idade = 21;
    aluno1.filhos =0;
    inserirAluno_Nao_Ordenado(&m,aluno1);
    aluno1.cod_aluno = 002;
    aluno1.nome = "Suza";
    aluno1.idade = 19;
    aluno1.filhos =0;
    inserirAluno_Nao_Ordenado(&m,aluno1);
    aluno1.cod_aluno = 003;
    aluno1.nome = "Danilo";
    aluno1.idade = 24;
    aluno1.filhos =1;
    inserirAluno_Nao_Ordenado(&m,aluno1);
    aluno1.cod_aluno = 004;
    aluno1.nome = "Camila";
    aluno1.idade = 18;
    aluno1.filhos =0;
    inserirAluno_Nao_Ordenado(&m,aluno1);
    aluno1.cod_aluno = 005;
    aluno1.nome = "Carlos";
    aluno1.idade = 22;
    aluno1.filhos =1;
    inserirAluno_Nao_Ordenado(&m,aluno1);
  int idadeAlvo = 20;
int quantidade = contarAlunos(&m, idadeAlvo);
printf("\n");
printf("Quantidade de alunos com idade maior ou igual a %d: %d\n", idadeAlvo, quantidade);
printf("Carlos Roberto Guimaraes Brandao\n");
printf("Codigo exercicio: 014\n");
    time_t now;
    time(&now);
    printf("Data e hora de entrega %s", ctime(&now));

    


}