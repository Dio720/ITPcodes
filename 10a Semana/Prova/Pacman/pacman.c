#include <stdio.h>

#define TAM_MAX 10

char mapa[TAM_MAX][TAM_MAX];
int linhas, colunas;
int bolinhas_comidas = 0;

void entrada() {
    scanf("%d %d", &linhas, &colunas);

    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            scanf(" %c", &mapa[i][j]);
}

void encontra_pacman(int *lin, int *col) {
    for (int i = 0; i < linhas; i++) 
        for (int j = 0; j < colunas; j++)
            if (mapa[i][j] == 'C') {
                *lin = i;
                *col = j;
                break;
            }
}

void saida() {
    printf("Total de bolinhas devoradas: %d\n", bolinhas_comidas);
    printf("Mapa final: \n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (mapa[i][j] == '-')
                mapa[i][j] = ' ';

            printf("%c", mapa[i][j]);
        }
        printf("\n");
    }
}

void come(int x, int y) {
    if (x < 0 || y < 0 || x >= linhas || y >= colunas || mapa[x][y] == '*' || mapa[x][y] == 'M' || mapa[x][y] == '-')
        return;

    if (mapa[x][y] == '.') {
        bolinhas_comidas++;
        mapa[x][y] = ' ';
    }

    char temp = mapa[x][y];
    mapa[x][y] = '-';

    come(x + 1, y);
    come(x - 1, y);
    come(x, y + 1);
    come(x, y - 1);

    mapa[x][y] = temp;
}


int main() {
    int pacman_x, pacman_y;

    entrada();
    encontra_pacman(&pacman_x, &pacman_y);
    come(pacman_x, pacman_y);
    saida();

    return 0;
}
