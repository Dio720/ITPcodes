#include <stdio.h>

#define tamanho 9
int sudoku[tamanho][tamanho];

void entrada_sudoku() {
    char linha[11];

    for (int i = 0; i < tamanho; i++) {
        scanf("%10s", linha);
        for (int j = 0; j < tamanho; j++) {
            if (linha[j] == '*')
                sudoku[i][j] = 0;
            else
                sudoku[i][j] = linha[j] - '0';
        }
    }
}

void imprime_sudoku() {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++)
            printf("%d", sudoku[i][j]); 

        printf("\n");
    }
}

int espaco_vazio(int *linha, int *coluna) {
    int espaco_vazio = 0;

    for (int i = 0; i < tamanho; i++)
        for (int j = 0; j < tamanho; j++)
            if (sudoku[i][j] == 0) {
                *linha = i;
                *coluna = j;
                espaco_vazio = 1;
                return espaco_vazio;
            }

    return espaco_vazio;
}

int is_safe(int num, int linha, int coluna) {
    for (int i = 0; i < tamanho; i++)
        if (sudoku[linha][i] == num) 
            return 0;

    for (int i = 0; i < tamanho; i++)
        if (sudoku[i][coluna] == num)
            return 0;
    
    int linhaInicial = (linha / 3) * 3;
    int colunaInicial = (coluna / 3) * 3;

    for (int i = linhaInicial; i < linhaInicial + 3; i++)
        for (int j = colunaInicial; j < colunaInicial + 3; j++)
            if (sudoku[i][j] == num)
                return 0;

    return 1;
}

int resolveSudoku() {
    int lin, col;

    if (espaco_vazio(&lin, &col) == 0)
        return 1;
    
    for (int i = 1; i <= tamanho; i++)
        if (is_safe(i, lin, col)) {
            sudoku[lin][col] = i;
            if (resolveSudoku())
                return 1;
            
            sudoku[lin][col] = 0;
        }
    
    return 0;
}

int main(void) {
    entrada_sudoku();

    if (resolveSudoku()) 
        imprime_sudoku();
    else
        printf("Não tem solução!\n");
    
    return 0;
}

