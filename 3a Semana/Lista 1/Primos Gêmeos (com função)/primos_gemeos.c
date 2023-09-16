#include <stdio.h>
#include <stdlib.h>

int primo_gemeo(int x){
    int i, j, primo = 0, primo1 = 0;
    for (i = 2 ; i <= x / 2 ; i++){
        if (x % i == 0){
            primo++;
            break;
        }
    }
    for (i = 2 ; i <= (x+2) / 2 ; i++){
        if ((x+2) % i == 0){
            primo1++;
            break;
        }
    }

    if (primo == 0 && primo1 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int numero;
    scanf("%d", &numero);
    
    if (numero == 1){
        printf("Numero nao forma par de gemeos");
    }
    else if (primo_gemeo(numero)){
        printf("Numero forma par de gemeos");
    }
    else{
        printf("Numero nao forma par de gemeos");
    }

    return 0;
}