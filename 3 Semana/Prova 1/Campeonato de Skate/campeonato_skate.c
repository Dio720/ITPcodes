#include <stdio.h>

int calcular_score_do_dia(int scores[]) {
    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            if (scores[i] > scores[j]) {
                int temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;
            }
        }
    }

    return scores[1];
}

int calcular_score_final(int scores[][3]) {
    int scores_do_dia[3];

    for (int dia = 0; dia < 3; dia++) {
        scores_do_dia[dia] = calcular_score_do_dia(scores[dia]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            if (scores_do_dia[i] > scores_do_dia[j]) {
                int temp = scores_do_dia[i];
                scores_do_dia[i] = scores_do_dia[j];
                scores_do_dia[j] = temp;
            }
        }
    }

    return scores_do_dia[1];
}

char verificar_maior(int num1, int num2) {
    if (num1 > num2) {
        return 'A';
    } else if (num2 > num1) {
        return 'B';
    } else {
        return 'E'; // Empate
    }
}

int main() {
    int scores_a[3][3];
    int scores_b[3][3];

    // Leitura dos scores dos skatistas A
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &scores_a[i][j]);
        }
    }

    // Leitura dos scores dos skatistas B
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &scores_b[i][j]);
        }
    }

    int score_final_a = calcular_score_final(scores_a);
    int score_final_b = calcular_score_final(scores_b);

    char resultado = verificar_maior(score_final_a, score_final_b);

    if (resultado == 'E') {
        printf("empate");
    } else {
        printf("%c", resultado);
    }

    return 0;
}
