#include <stdio.h>
#include <stdlib.h> 

int somaMatriz3x3(int matriz[3][3]) {
    int soma = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            soma += matriz[i][j];

    return soma;
}

int main() {
    int tamanhoMatriz, indice, descarte;
    scanf("%d %d %d", &tamanhoMatriz, &descarte, &indice);

    int matrizMaior[tamanhoMatriz][tamanhoMatriz];

    for (int i = 0; i < tamanhoMatriz; i++)
        for (int j = 0; j < tamanhoMatriz; j++)
            scanf("%d", &matrizMaior[i][j]);

    int resultadoMaisProximo = somaMatriz3x3(matrizMaior); 
    int LinhaDaMaisProxima = 0;
    int ColunaDaMaisProxima = 0;

    for (int i = 0; i <= tamanhoMatriz - 3; i++) {
        for (int j = 0; j <= tamanhoMatriz - 3; j++) {
            int matriz3x3[3][3];
            for (int x = 0; x < 3; x++)
                for (int y = 0; y < 3; y++)
                    matriz3x3[x][y] = matrizMaior[i + x][j + y];

            int soma = somaMatriz3x3(matriz3x3);
            
            if (abs(soma - indice) < abs(resultadoMaisProximo - indice)){
                resultadoMaisProximo = soma;
                LinhaDaMaisProxima = i;
                ColunaDaMaisProxima = j;
            }
        }
    }

    resultadoMaisProximo = abs(resultadoMaisProximo - indice);

    printf("A melhor area para exploracao eh %d %d com valor %d\n", LinhaDaMaisProxima + 1, ColunaDaMaisProxima + 1, resultadoMaisProximo);

    return 0;
}
