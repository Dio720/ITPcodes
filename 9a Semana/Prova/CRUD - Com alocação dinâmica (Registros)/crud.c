#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *nome;
    int idade;
    char sexo;
} Pessoa;

Pessoa criar(char *nome, int idade, char sexo) {
    Pessoa p;
    p.nome = strdup(nome); 
    p.idade = idade;
    p.sexo = sexo;
    return p;
}

void inserir(Pessoa **lista, int *tamanho, Pessoa novaPessoa) {
    *lista = realloc(*lista, (*tamanho + 1) * sizeof(Pessoa));
    (*lista)[*tamanho] = novaPessoa;
    (*tamanho)++;
}

void deletar(Pessoa **lista, int *tamanho, Pessoa pessoa) {
    for (int i = 0; i < *tamanho; i++)
        if (strcmp((*lista)[i].nome, pessoa.nome) == 0 && (*lista)[i].idade == pessoa.idade && (*lista)[i].sexo == pessoa.sexo) {
            free((*lista)[i].nome);
            for (int j = i; j < *tamanho - 1; j++) {
                (*lista)[j] = (*lista)[j + 1];
            }
            (*tamanho)--;
            *lista = realloc(*lista, (*tamanho) * sizeof(Pessoa));
            break;
        }

    free(pessoa.nome); 
}

void imprimir(Pessoa *lista, int tamanho) {
    for (int i = 0; i < tamanho; i++)
        printf("%s,%d,%c\n", lista[i].nome, lista[i].idade, lista[i].sexo);
}

int main() {
    Pessoa *lista = NULL;
    int tamanho = 0;
    char operacao, sexo;
    char nome[1024];
    int idade;

    while (scanf(" %c", &operacao) != EOF) {
        if (operacao == 'i') {
            scanf(" %[^\n]s", nome);
            scanf("%d", &idade);
            scanf(" %c", &sexo);
            inserir(&lista, &tamanho, criar(nome, idade, sexo));
        } else if (operacao == 'd') {
            scanf(" %[^\n]s", nome);
            scanf("%d", &idade);
            scanf(" %c", &sexo);
            deletar(&lista, &tamanho, criar(nome, idade, sexo));
        } else if (operacao == 'p') {
            imprimir(lista, tamanho);
            break;
        }
    }

    for (int i = 0; i < tamanho; i++)
        free(lista[i].nome);

    free(lista);

    return 0;
}
