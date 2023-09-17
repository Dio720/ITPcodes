#include <stdio.h>

int main() {
    int A[3], B[3], C[3], D[3];
    for(int i = 0; i < 3; i++) {
        scanf("%d", &B[i]);
    }
    for(int i = 0; i < 3; i++) {
        scanf("%d", &C[i]);
    }
    for(int i = 0; i < 3; i++) {
        scanf("%d", &D[i]);
        A[i] = B[i] + C[i] - 5*D[i];
    }

    printf("A = [");
    for(int i = 0; i < 3; i++) {
        if(i != 2) {
            printf("%d,", A[i]);
        } else {
            printf("%d", A[i]);
        }
    }
    printf("]");

    return 0;
}