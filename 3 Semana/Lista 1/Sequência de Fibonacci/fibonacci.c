#include <stdio.h>

unsigned long long int fibonacci(int num){
    if (num == 1) {
        return 0;
    }
    else if (num == 2){
        return 1;
    }
    
    unsigned long long int i, fib = 0, fib1 = 0, fib2 = 1;

    for (i = 3 ; i <= num ; i++){
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }
    
    return fib;
}

int main(){
    int n;
    
    scanf("%d", &n);
    printf("%llu", fibonacci(n+1));

    return 0;
}