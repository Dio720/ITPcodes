#include <stdio.h>
#include <stdlib.h>

int fuso_horario(int x, int y, int z){
    int chegada;
    chegada = x + y + z;
    
    if (chegada > 23){
        chegada -= 24;
    }
    else if (chegada < 0){
        chegada += 24;
    }
    printf("Hora de saída: %d \nHora de chegada: %d", x, chegada);
}

int main(){
    int partida, tempo_viagem, diff_horario;
    
    scanf("%d %d %d", &partida, &tempo_viagem, &diff_horario);
    
    fuso_horario(partida, tempo_viagem, diff_horario);

    return 0;
}