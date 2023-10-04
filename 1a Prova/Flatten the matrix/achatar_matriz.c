#include <stdio.h>

void flatten(int l, int c, int m[l][c], int vetor[], int ordem){
    int contador = 0;
    if (ordem == 0)
        for(int i = 0; i < l; i++)
            for(int j = 0; j < c; j++){
                vetor[contador] = m[i][j];
                contador++;
        }
    
    if (ordem == 1)
        for(int j = 0; j < c; j++)
            for (int i = 0; i < l; i++){
                vetor[contador] = m[i][j];
                contador++;
            }
}

int main(){
    int linhas, colunas, ordem;
    scanf("%d %d %d", &ordem, &linhas, &colunas);

    int matriz[linhas][colunas];
    int tamVetor = linhas * colunas;
    int vetor[tamVetor];

    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            scanf("%d", &matriz[i][j]);

    flatten(linhas, colunas, matriz, vetor, ordem);

    for (int i = 0; i < tamVetor; i++)
        printf("%d ", vetor[i]);

    return 0;
}