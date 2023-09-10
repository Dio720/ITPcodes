#include <stdio.h>

int main(){
    int grana, preco, troco;
    char combo;
    
    scanf("%s %d", &combo, &grana);
    
    switch(combo){
        case '1': preco = 12; break;
        case '2': preco = 23; break;
        case '3': preco = 31; break;
        case '4': preco = 28; break;
        case '5': preco = 15; break;
        default: printf("Esse combo nao existe\n");
    }

    if(preco == grana){
        printf("Deu certim!\n");
    }
    if(preco < grana){
        troco = grana - preco;
        printf("Troco = %d reais", troco);
    }
    if(preco > grana){
        troco = preco - grana;
        printf("Saldo insuficiente! Falta %d reais", troco);
    }
    return 0;
}