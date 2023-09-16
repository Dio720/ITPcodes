#include <stdio.h>
#include <stdbool.h>

int main() {
    bool legal = true;
    int tam;
    scanf("%d", &tam);
    int vetor[tam + 1];

    scanf("%d", &vetor[0]);
    for(int i = 1; i < tam; i++) {
        scanf("%d", &vetor[i]);

        if((vetor[i-1] - vetor[i]) % 2 != 0) {
            legal = false;
            break;
        } 
    }
    if(!legal) {
        printf("Chato");
    } else {
        printf("Legal");
    }

    return 0;
} 