#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    char linha[1024];
    int *vetor = NULL;
    int tamanho = 0;
    int capacidade = 10; 
    int num;

    vetor = (int*)malloc(capacidade * sizeof(int));
    if (!vetor) {
        perror("Erro ao alocar memória");
        return 1;
    }

    if (!fgets(linha, sizeof(linha), stdin)) {
        perror("Erro ao ler entrada");
        free(vetor);
        return 1;
    }

    char *token = strtok(linha, " ");
    while (token != NULL) {
        num = atoi(token);
        if (tamanho == capacidade) {
            capacidade *= 2; 
            int *temp = (int*)realloc(vetor, capacidade * sizeof(int));
            if (!temp) {
                perror("Erro ao realocar memória");
                free(vetor);
                return 1;
            }
            vetor = temp;
        }
        vetor[tamanho++] = num;
        token = strtok(NULL, " ");
    }

    qsort(vetor, tamanho, sizeof(int), compare);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
