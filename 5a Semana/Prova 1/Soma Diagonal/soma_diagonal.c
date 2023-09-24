#include <stdio.h>

int soma_diagonal(int matriz[10][10], int n){
    int soma_diagonal = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                soma_diagonal += matriz[i][j];
            }
        }
    }
    return soma_diagonal;
}

int main(){
    int matriz[10][10];
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int resultado = soma_diagonal(matriz, n);
    printf("%d", resultado);

    return 0;
}
