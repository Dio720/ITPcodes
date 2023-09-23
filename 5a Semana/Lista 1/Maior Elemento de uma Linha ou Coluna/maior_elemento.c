#include <stdio.h>

int retorna_maior(int matriz[30][30], int n, int m, char a, int x){
    int maior = -100;
    if(a == 'l'){
        for(int i = 0; i < n; i++){
            if(matriz[x][i] > maior){
                maior = matriz[x][i];
            }
        }
    } else if(a == 'c'){
        for(int i = 0; i < n; i++){
            if(matriz[i][x] > maior){
                maior = matriz[i][x];
            }
        }
    }
    return maior;
}

int main(){
    char a;
    int n, m, x;
    int matriz[30][30] = {0};
    
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matriz[i][j]);
        }
    } scanf(" %c %d", &a, &x);

    int resultado = retorna_maior(matriz, n, m, a, x);
    
    printf("%d", resultado);
    
    return 0;
}