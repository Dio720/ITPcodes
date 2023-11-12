#include <stdio.h>
#include <string.h>

int palindromo(char *entrada) {
    int tamanho = strlen(entrada);
    char temp, copia[25], copia_sem_espacos[25];
    int j = 0;

    for (int i = 0; i < tamanho; i++) {
        if (entrada[i] != ' ') {
            copia_sem_espacos[j++] = entrada[i];
        }
    }
    copia_sem_espacos[j] = '\0';

    strcpy(copia, copia_sem_espacos);
    
    for (int i = 0, j = strlen(copia) - 1; i < j; i++, j--) {
        temp = copia[i];
        copia[i] = copia[j];
        copia[j] = temp;
    }

    if (strcmp(copia_sem_espacos, copia) == 0)
        return 1;
    else
        return 0;
}

int main(void) {
    char entrada[25];

    fgets(entrada, 24, stdin);
    entrada[strcspn(entrada, "\n")] = '\0';

    if (palindromo(entrada) == 1)
        printf("O texto \"%s\" é palíndromo\n", entrada);
    else
        printf("O texto \"%s\" não é palíndromo\n", entrada);

    return 0;
}
lib.h