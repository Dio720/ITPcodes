#include <stdio.h>

int main(){
    int entrada, dias, anos, meses, resto1;

    scanf("%d", &entrada);

    anos = entrada / 365;
    resto1 = entrada % 365;
    meses = resto1 / 30;
    dias = resto1 % 30;

    printf("Ano(s): %d\nMes(es): %d\nDia(s): %d", anos, meses, dias);
    
    return 0;

}