#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int somaDivisoresProprios(int numero) {
    int soma = 1; 
    for (int i = 2; i <= sqrt(numero); i++){
        if (numero % i == 0) {
            soma += i;
            if (i != numero / i){
                soma += numero / i;
            }
        }
    }
    return soma;
}

char saoColegas(int numero1, int numero2) {
    int soma1 = somaDivisoresProprios(numero1);
    int soma2 = somaDivisoresProprios(numero2);
    
    int diferenca1 = abs(soma1 - numero2);
    int diferenca2 = abs(soma2 - numero1);
    
    if (diferenca1 <= 2 && diferenca2 <= 2){
        return 'S';
    } else {
        return 'N';
    }
}

int main() {
    int numero1, numero2;
    
    scanf("%d", &numero1);
    scanf("%d", &numero2);
    
    char resultado = saoColegas(numero1, numero2);
    printf("%c\n", resultado);
    
    return 0;
}
