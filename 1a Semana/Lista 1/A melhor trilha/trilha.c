#include <stdio.h>

int main(){
    int numerot,a;

    scanf("%d",&numerot);

    if(numerot>=0 && numerot<5){
        printf("Iniciante");
    }
    if(numerot>=5 && numerot<20){
        scanf("%d", &a);
        if(a == 1){
            printf("Intermediário");
        }
        if(a == 0){
            printf("Iniciante");
        }
    }
    if(numerot>=20){
        scanf("%d", &a);
        if(a ==  1){
         printf("Avançado");
        }
        if(a == 0){
            printf("Intermediário");
        }
    }
    return 0;
}