#include <stdio.h>

void entrada(float vetor[], int tamanho) {
    int descarte1;
    char descarte2;
    
    for(int i = 0; i < tamanho; i++) {
        scanf("%d %c %f", &descarte1, &descarte2, &vetor[i]);
    }
}

int main() {
    int alunos;
    scanf("%d", &alunos);
    float lista[alunos];

    // Entrada
    entrada(lista, alunos);

    // Aprovados
    printf("Aprovados: ");
    int aprovados = 0; 

    for(int i = 0; i < alunos; i++) {
        if(lista[i] >= 7){
            aprovados++;
            if(aprovados > 1) {
                printf(", "); 
            }
            printf("%d (%.1f)", i+1, lista[i]);
        }
    } printf("\n");

    //Recuperação
    printf("Recuperação: ");
    int recuperacao = 0;

    for(int i = 0; i < alunos; i++) {
        if(lista[i] >= 5 && lista[i] < 7){
            recuperacao++;
            if(recuperacao > 1) {
                printf(", ");
            }
            printf("%d (%.1f)", i+1, lista[i]);
        }
    } printf("\n");

    //Reprovados
    printf("Reprovados: ");
    int reprovados = 0;

    for(int i = 0; i < alunos; i++) {
        if(lista[i] < 5) {
            reprovados++;
            if(reprovados > 1){
                printf(", ");
            }
            printf("%d (%.1f)", i+1, lista[i]);
        }
    }
    
    return 0;
}
