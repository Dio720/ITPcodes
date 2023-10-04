#include <stdio.h>


int somaLinhaMatrizMeio (int matriz[][9], int linhas, int colunas){
    int soma = 0;
    int meioLinha = linhas / 2;
    int meioColuna = colunas / 2;

    for (int i = 0; i < colunas; i++)
        soma += matriz[meioLinha][i];
    for(int i = 0; i < linhas; i++)
        soma += matriz[i][meioColuna];


    return soma;
}   

int main(){
    int linha, coluna;
    int matriz[9][9];
    scanf("%d %d", &linha, &coluna);

    for(int i = 0; i < linha; i++)
        for(int j = 0; j < coluna; j++)
            scanf("%d", &matriz[i][j]);
    
    int resultado = somaLinhaMatrizMeio(matriz, linha, coluna);
    printf("%d", resultado);

    return 0;
}