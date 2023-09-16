#include <stdio.h>

int mdc(int x1, int x2, int x3){
    int resto;

    do{
        resto = x1 % x2;
        x1 = x2;
        x2 = resto;
    } while (resto != 0);

    do{
        resto = x1 % x3;
        x1 = x3;
        x3 = resto;
    } while (resto != 0);

    return x1; 
}

int main(){
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    if (mdc(num1, num2, num3) == 1){
        printf("tripla pitagorica primitiva");
    }
    else if (mdc(num1, num2, num3) == 2){
        printf("tripla pitagorica");
    }
    else{
        printf("tripla");
    }
}

