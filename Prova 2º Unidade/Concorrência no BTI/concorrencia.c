#include <stdio.h>

typedef struct {
    char nome[100];
    float mediaConclusao;
    char turno;
} Aluno;

void comparaAlunos(Aluno alunos[], Aluno aprovados[], int quantidadeAlunos, int quantidadeVagas, char turno) {
    Aluno temporario[quantidadeAlunos];
    int i;

    for (i = 0; i < quantidadeAlunos; i++)
        if (alunos[i].turno == turno)
            temporario[i] = alunos[i];

    for (int j = 0; j < i; j++)
        for (int k = 0; k < i; k++)
            if (temporario[j].mediaConclusao > temporario[k].mediaConclusao) {
                Aluno auxiliar = temporario[j];
                temporario[j] = temporario[k];
                temporario[k] = auxiliar;
            }

    for (int j = 0; j < quantidadeVagas; j++)
        aprovados[j] = temporario[j];
}
int main() {
    char turmaDescarte[100];
    char turno;
    int quantidadeVagas, quantidadeAlunos;

    scanf("%[^\n]", turmaDescarte);
    scanf(" %d %c %d", &quantidadeVagas, &turno, &quantidadeAlunos);

    Aluno alunos[quantidadeAlunos];
    Aluno alunosAprovados[quantidadeVagas];

    for (int i = 0; i < quantidadeAlunos; i++)
        scanf(" %[^\n] %f %c", alunos[i].nome, &alunos[i].mediaConclusao, &alunos[i].turno);

    comparaAlunos(alunos, alunosAprovados, quantidadeAlunos, quantidadeVagas, turno);

    for (int i = 0; i < quantidadeVagas; i++)
        printf("%s\n", alunosAprovados[i].nome);

    return 0;
}
