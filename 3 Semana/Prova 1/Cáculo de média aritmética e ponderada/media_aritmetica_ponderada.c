#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculaMedia (char tipo, float n1, float n2, float n3){
    float media;
    
    if (tipo == 'A'){
        media = (n1 + n2 + n3) / 3;
    }
    else if (tipo == 'P'){
        media = ((n1*4) + (n2*5) + (n3*6)) / 15;
    }
    return media; 
}

int main(){
    setlocale (LC_ALL, "Portuguese_Brazil");
    char tipo;
    float not1, not2, not3;
    scanf("%c %f %f %f", &tipo, &not1, &not2, &not3);
    printf("Média %.2f", calculaMedia(tipo, not1, not2, not3));

    return 0;
}

