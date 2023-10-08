#include <stdio.h>
#include <string.h>

void deletar_substring(char string[], char substring[]) {
    char *ocorrencia = string;
    int tamanho_substring = strlen(substring);
    
    while ((ocorrencia = strstr(ocorrencia, substring)) != NULL) {
        memmove(ocorrencia, ocorrencia + tamanho_substring, strlen(ocorrencia + tamanho_substring) + 1);
    }
}

int main() {
    char Prefixos[10][10], Sufixos[10][10], Palavras[100][100];
    int qntd_Prefixos, qntd_Sufixos;

    scanf("%d", &qntd_Prefixos);
    for (int i = 0; i < qntd_Prefixos; i++)
        scanf("%s", Prefixos[i]);

    scanf("%d", &qntd_Sufixos);
    for (int i = 0; i < qntd_Sufixos; i++)
        scanf("%s", Sufixos[i]);

    int contador = 0;

    while (1) {
        scanf("%s", Palavras[contador]);
        if (strcmp(Palavras[contador], "-1") == 0)
            break;
        contador++;
    }

    for (int i = 0; i < qntd_Prefixos; i++)
        for (int j = 0; j < contador; j++)
            deletar_substring(Palavras[j], Prefixos[i]);
    
    for (int i = 0; i < qntd_Sufixos; i++)
        for (int j = 0; j < contador; j++)
            deletar_substring(Palavras[j], Sufixos[i]);

    for (int i = 0; i < contador; i++)
        printf("%s\n", Palavras[i]);

    return 0;
}
