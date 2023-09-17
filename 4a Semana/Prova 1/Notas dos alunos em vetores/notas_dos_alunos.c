#include <stdio.h>

int main() {
    int alunos, indice = 0;
    scanf("%d", &alunos);
    float lista[2][alunos + 1];

    //Entrada
    for(int i = 1; i <= alunos; i++) {
        indice++;
        lista[0][i] = indice;
    } for(int i = 1; i <= alunos; i++) {
        printf("%d - ", i);
        scanf("%f", &lista[1][i]);

    }

    //Aprovados
    printf("Aprovados: ");
    int aprovados = 0;
    for(int i = 1; i <= alunos; i++) {
        if(lista[1][i] >= 7){
            aprovados++;
            if(aprovados > 1) {
                printf(", ");
            }
            printf("%d (%.1f)", lista[0][i], lista[1][i]);
        }
    } printf("\n");
    
    return 0;
}