#include <stdio.h>
#include <stdbool.h>
#include <string.h>

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

int main() {
    int entrada1, entrada2;
    scanf("%d %d", &entrada1, &entrada2);
    int conjunto1[entrada1], conjunto2[entrada2], saida[entrada1 + entrada2];

    for (int i = 0; i < entrada1; i++) {
        scanf("%d", &conjunto1[i]); 
    }
    for (int i = 0; i < entrada2; i++) {
        scanf("%d", &conjunto2[i]); 
    }

    memcpy(saida, conjunto1, sizeof(conjunto1));
    memcpy(saida + (sizeof(conjunto1) / sizeof(int)), conjunto2, sizeof(conjunto2)); 

    retira_repetidas(saida, (entrada1 + entrada2)); 

    return 0;
}
