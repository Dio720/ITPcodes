#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[15];
    int golsMarcados;
    int golsSofridos;
} Time;

void ordena_times(Time times[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (times[j].golsMarcados < times[j + 1].golsMarcados){
                Time temp = times[j];
                times[j] = times[j + 1];
                times[j + 1] = temp;
            }
}


int main(){
    int qntd_times;
    Time times[30];
    
    scanf("%d", &qntd_times);

    for (int i = 0; i < qntd_times; i++){
    scanf(" %[^\n]", times[i].nome);
    scanf("%d %d", &times[i].golsMarcados, &times[i].golsSofridos);
    }


    ordena_times(times, qntd_times);


    int indice = 1;
    for (int i = 0; i < qntd_times; i++){        
        printf("%d - %s\n", indice, times[i].nome);
        printf("Gols marcados: %d \nGols sofridos: %d \n", times[i].golsMarcados, times[i].golsSofridos);
        
        indice++;
    }

    return 0;
}