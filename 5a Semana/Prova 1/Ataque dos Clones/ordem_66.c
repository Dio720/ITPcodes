#include <stdio.h>

int pico_radiacao(int mapa[][5], int N, int M, int i, int j) {
    int radiacao = mapa[i][j];
    
    for (int x = i - 1; x <= i + 1; x++) {
        for (int y = j - 1; y <= j + 1; y++) {
            if (x >= 0 && x < N && y >= 0 && y < M && (x != i || y != j) && mapa[x][y] >= radiacao) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    int jedi_x, jedi_y;
    scanf("%d %d", &jedi_x, &jedi_y);
    
    int mapa[5][5];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &mapa[i][j]);
        }
    }
    
    int indice = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (pico_radiacao(mapa, N, M, i, j)) {
                indice++;
                printf("Local %d: %d %d\n",  indice, i + 1, j + 1);
            }
        }
    }
    
    if (pico_radiacao(mapa, N, M, jedi_x - 1, jedi_y - 1)) {
        printf("Descanse na Força...\n");
    } else {
        printf("Ao resgate!\n");
    }

    return 0;
}
