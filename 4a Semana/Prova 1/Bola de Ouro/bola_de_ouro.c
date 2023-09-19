#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    float bolao[3][n], indice = 1, ganhador, comes_bebes = 0, total = 0;
    
    for(int i = 0; i < n; i++){
        bolao[0][i] = indice;
        indice++;
    }
    for(int i = 0; i < n; i++){
        scanf("%f %f", &bolao[1][i], &bolao[2][i]);
        total += bolao[1][i];
        bolao[1][i] = ceil(bolao[1][i] * 0.9);
        comes_bebes += ceil(bolao[1][i] * 0.1);

    } scanf("%f", &ganhador);


    int vencedores = 0, perdedores = 0;
    for(int i = 0; i < n; i++){
        if(bolao[0][i] == ganhador){
            vencedores++;
        } else {
            perdedores++;
        }
    }
        

    float mWin[2][vencedores], mLoser[2][perdedores];
    
    printf("Total: %0.f \n", total);
    if(perdedores == n){
        for(int i = 0; i < n; i++){
            printf("Apostador %.0f: %0.f \n", bolao[0][i], bolao[1][i]);
        }
    }
    printf("Comidas e bebidas: %0.f", comes_bebes);

    return 0;
}