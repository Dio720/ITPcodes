#include <stdio.h>
#include <stdbool.h>

int retira_repetidas(int vetor[], int tamanho) {
    bool rept;

    for (int i = 0; i < tamanho; i++) {
        rept = false;
        for (int j = 0; j < i; j++) { 
            if (vetor[i] == vetor[j]) {
                rept = true;
                break;
            }
        }
        if (!rept) {
            printf("%d ", vetor[i]); 
        }
    }
    printf("\n"); 
    return 0; 
}

int ordenaVetor(int vetor[], int tamanho){
    int troca;
    do {
        troca = 0;
        for (int i = 0; i < tamanho - 1; i++) {
            if (vetor[i] > vetor[i + 1]) {
                int temp = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = temp;
                troca = 1;
            }
        }
    } while (troca);
}

int main(){
    int tamanho;
    scanf("%d", &tamanho);
    int vetor[tamanho];

    for(int i = 0; i < tamanho; i++)
        scanf("%d", &vetor[i]);
    
    ordenaVetor(vetor, tamanho);
    retira_repetidas(vetor, tamanho);

    return 0;
}
