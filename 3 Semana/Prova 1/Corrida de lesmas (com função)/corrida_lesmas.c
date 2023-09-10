#include <stdio.h>

int verificaMaior(int lista[], int tamanho){
    int maior = lista[0];
    for (int i = 1 ; i < tamanho; i++){
        if (lista[i] > maior){
            maior = lista[i];
        }
    }
    return maior;
}

int verificaNivel (int top1){
    if(top1 < 10){
        return 1;
    } else if(top1 >= 10 && top1 < 20){
        return 2;
    } else{
        return 3;
    }
}

int main(){
    int tamanho_grupo, maiorDoGrupo;
    scanf("%d", &tamanho_grupo);

    int grupo[tamanho_grupo];

    for (int i = 0 ; i < tamanho_grupo ; i++){
        scanf("%d", &grupo[i]);
    }
    maiorDoGrupo = verificaMaior(grupo, tamanho_grupo);
    
    printf("Level %d", verificaNivel(maiorDoGrupo));

    return 0;
}
