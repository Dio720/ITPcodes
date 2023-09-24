#include <stdio.h>

int calcular_aposta(int largura, int altura, int bandeira[8][12], char cor, int inicial){
    int soma = 0;
    if(cor == 'G'){
        for(int i = 0; i < altura; i++)
            for(int j = 0; j < largura; j++)
                if(bandeira[i][j] == inicial + 1)
                    soma += bandeira[i][j];
    } else if(cor == 'Y'){
        for(int i = 0; i < altura; i++)
            for(int j = 0; j < largura; j++)
                if(bandeira[i][j] == inicial + 2)
                    soma += bandeira[i][j];  
    } else if(cor == 'R'){
        for(int i = 0; i < altura; i++)
            for(int j = 0; j < largura; j++)
                if(bandeira[i][j] == inicial + 3)
                    soma += bandeira[i][j];
    }

    return soma;
}

int main() {
    char cor;
    int largura, altura, valor, resultado, inicial;
    int bandeira[8][12];
    scanf("%d %d %c", &largura, &inicial, &cor);
    altura = (2*largura) / 3;
    valor = inicial;
    
    for(int i = 0; i < altura; i++){
        valor = inicial;
        for(int j = 0; j < largura; j++){
            if(j % (altura / 2) == 0)
                valor++;
            bandeira[i][j] = valor;
        }
    }

    resultado = calcular_aposta(largura, altura, bandeira, cor, inicial);

    printf("%d", resultado);

    return 0; 
}