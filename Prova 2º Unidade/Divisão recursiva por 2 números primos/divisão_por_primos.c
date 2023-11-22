#include <stdio.h>

int divisao(int n) {
    for (int i = 2; i <= 7; i++) {
        if (n % i == 0) {
            printf("%d ", n / i);
            return divisao(n / i);
        }
    }
    return n;
}

int main() {
    int n;

    scanf("%d", &n);
    printf("%d ", n);
    divisao(n);
    return 0;
}