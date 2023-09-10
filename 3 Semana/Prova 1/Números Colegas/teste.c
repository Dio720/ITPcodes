#include <stdio.h>
#include <math.h>

int main(){
    int i, j, num1, num2, sum1 = 0, sum2 = 0;
    
    scanf("%d %d", &num1, &num2);
    printf("Divisores de %d:\n", num1);
    
    for (i = 1 ; i <= sqrt(num1); i++){
        if (num1 % i == 0){
            sum1 += i;
            if( i != numero / i){
                soma += numero / i;
                printf
            }
        }
    }
    printf("\nDivisores de %d:\n", num2);
    for (j = 1 ; j <= sqrt(num2); j++){
        if (num2 % j == 0){
            sum2 += j;
        }
    }

    printf("\nSoma dos divisores de %d: %d\n", num1, sum1);
    printf("Soma dos divisores de %d: %d\n", num2, sum2);

    return 0;
}