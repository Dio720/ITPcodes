#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char comando[10];
    char trabalhando[10][100] = {0}; 
    int contador = 0; 

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%s", comando);
        
        if (strcmp(comando, "INSERIR") == 0){
            scanf("%s", trabalhando[contador]);
            contador++;

        } else if (strcmp(comando, "REMOVER") == 0){
            char nomeParaRemover[10];
            scanf("%s", nomeParaRemover);

            int indice = -1;
            for (int j = 0; j < contador; j++){
                if (strcmp(trabalhando[j], nomeParaRemover) == 0) {
                    indice = j;
                    break;
                }
            }

            if (indice != -1){
                for (int j = indice; j < contador - 1; j++)
                    strcpy(trabalhando[j], trabalhando[j + 1]);

                contador--;
            }
            
        } else if (strcmp(comando, "IMPRIMIR") == 0){
            printf("Atualmente trabalhando:\n");
           
            for (int j = 0; j < contador; j++) {
                printf("%s\n", trabalhando[j]);
            }
            printf("\n");
        }
    }

    return 0;
}
