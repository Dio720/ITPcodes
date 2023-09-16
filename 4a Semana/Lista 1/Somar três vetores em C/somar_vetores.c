#include <stdio.h>

int main() {
    int tam;
    scanf("%d", &tam);
    int vetor_a[tam], vetor_b[tam], vetor_c[tam];

    for (int i = 0; i < tam; i++) {
        scanf("%d", &vetor_a[i]);
    }
    for (int i = 0; i < tam; i++) {
        scanf("%d", &vetor_b[i]);
    }
    for (int i = 0; i < tam; i++) {
        scanf("%d", &vetor_c[i]);
        vetor_c[i] += vetor_b[i] + vetor_a[i];
    }

    for (int i = 0; i < tam; i++) {
        printf("%d ", vetor_c[i]); 
    }

    return 0;
}
