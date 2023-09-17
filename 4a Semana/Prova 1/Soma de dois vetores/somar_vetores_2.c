#include <stdio.h>

int main() {
    int tam;
    scanf("%d", &tam);
    if(tam < 11) {
        int vetor1[tam], vetor2[tam];
        for(int i = 0; i < tam; i++) {
            scanf("%d", &vetor1[i]);
        }
        for(int i = 0; i < tam; i++) {
            scanf("%d", &vetor2[i]);
            vetor2[i] += vetor1[i];
            printf("%d ", vetor2[i]);
        }
    } else {
        printf("Muitos elementos");
    }

    return 0;
}