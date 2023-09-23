#include <stdio.h>
#include <stdbool.h>

void entrada(int matriz[5][5], int matrizT[5][5], int n){
    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
            matrizT[j][i] = matriz[i][j];
        }
    }
}

bool verifica(int matriz[5][5], int matrizT[5][5], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matriz[i][j] != matrizT[i][j]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    if(n != m){
        printf("Matriz não simétrica");
    } else{
        int A[n][n], At[n][n];
        entrada(A, At, n);
        bool igual = verifica(A, At, n);
        if(igual){
            printf("Matriz Simétrica");
        } else{
            printf("Matriz não Simétrica");
        }
        
        return 0;
    }
}