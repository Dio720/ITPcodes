#include <stdio.h>
#include <stdbool.h>

int main() {
    bool primeiro = true;
    int tam, maior;
    scanf("%d", &tam);
    int vetor[tam];

    for(int i = 0; i < tam; i++) {
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i < tam; i++) {
        for(int j = 0; j < tam; j++) {
            if(i != j) {
                if(vetor[i] == vetor[j]) {
                    if(primeiro) {
                        maior = vetor[i];
                        primeiro = false;
                    } else if(vetor[i] > maior) {
                        maior = vetor[i];
                    }
                }
            }
        }
    }

    printf("%d", maior);

    return 0;
}