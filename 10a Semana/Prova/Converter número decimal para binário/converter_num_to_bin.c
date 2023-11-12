#include <stdio.h>

void convertToBin(unsigned int n) {
    if (n / 2 != 0) {
        convertToBin(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    unsigned int numero;

    scanf("%u", &numero);

    convertToBin(numero);
    printf("\n");

    return 0;
}
