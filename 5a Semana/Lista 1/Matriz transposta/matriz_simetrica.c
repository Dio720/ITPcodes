#include <stdio.h>
#include <stdbool.h>

void entrada(int matriz[5][5], int n){
    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
}

bool verifica(int matriz[5][5], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matriz[i][j] != matriz[j][i]){
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
        int A[n][n];
        entrada(A, n);
        bool igual = verifica(A, n);
        if(igual){
            printf("Matriz Simétrica");
        } else{
            printf("Matriz não Simétrica");
        }
        
        return 0;
    }
}