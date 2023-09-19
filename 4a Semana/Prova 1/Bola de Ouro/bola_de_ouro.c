#include <stdio.h>
#include <math.h>

int main() {
    int N, qntdW = 0, qntdL = 0;
    float matriz[3][30] = {0}, indice = 1, total = 0, comes_bebes = 0, ganhador;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%f %f", &matriz[1][i], &matriz[2][i]);
        matriz[0][i] = indice;
        indice++;
        total += matriz[1][i];
        matriz[1][i] = floor(matriz[1][i] * 0.9);
    }
    scanf("%f", &ganhador);

    comes_bebes = ceil(total * 0.1);

    for (int i = 0; i < N; i++) {
        if (matriz[2][i] == ganhador) {
            qntdW++;
        } else {
            qntdL++;
        }
    }

    float matW[2][30] = {0}, matL[2][30] = {0};
    int indexW = 0, indexL = 0; // Índices para as matrizes matW e matL

    for (int i = 0; i < N; i++) {
        if (matriz[2][i] == ganhador) {
            matW[0][indexW] = matriz[0][i];
            matW[1][indexW] = matriz[1][i];
            indexW++;
        } else {
            matL[0][indexL] = matriz[0][i];
            matL[1][indexL] = matriz[1][i];
            indexL++;
        }
    }

    float sumW = 0, sumL = 0;

    for (int i = 0; i < qntdW; i++) {
        sumW += matW[1][i];
    }
    for (int i = 0; i < qntdL; i++) {
        sumL += matL[1][i];
    }

    for (int i = 0; i < qntdW; i++) {
        matW[1][i] = matW[1][i] + ((matW[1][i] / sumW) * sumL);
    }

    printf("Total: R$ %.0f \n", total);
    if (qntdL == N) {
        for (int i = 0; i < N; i++) {
            printf("Apostador %.0f: R$ %.0f \n", matriz[0][i], matriz[1][i]);
        }
    } else {
        for (int i = 0; i < qntdW; i++) {
            printf("Apostador %.0f: R$ %.0f \n", matW[0][i], matW[1][i]);
        }
    }
    printf("Bebidas e petiscos: R$ %.0f", comes_bebes);

    return 0;
}
