#include <stdio.h>
#include <string.h>

int main() {
    int tem = 0;
    int fim = 0;
    int indice = -1;
    char string_E[51];
    char string_P[51];
    
    scanf("%s", string_E);
    scanf("%s", string_P);
    
    int tamanhoE = strlen(string_E);
    int tamanhoP = strlen(string_P);
    
    for (int i = 0; i < tamanhoE; i++) {
        int j = 0;
        
        while (j < tamanhoP && string_E[i + j] == string_P[j]) {
            printf("%c ", string_E[i + j]);
            j++;
        }
        
        if (j == tamanhoP) {
            printf("sim\n");
            tem = 1;
            indice = i;
            break;
        } else {
            printf("%c ", string_E[i + j]);
            printf("não\n");
            char caractere = string_E[i + j];
            
            if (strchr(string_P, caractere) == NULL) {
                i = i + j;
            }
            
            if ((i + tamanhoP) > tamanhoE - 1) {
                printf("Não achei o padrão");
                fim = 1;
                break;
            }
        }
    }
    
    if (tem == 0) {
        if (fim == 0) {
            printf("Não achei o padrão\n");
        }
    } else {
        printf("Achei o padrão no índice %d\n", indice);
    }
    
    return 0;
}
