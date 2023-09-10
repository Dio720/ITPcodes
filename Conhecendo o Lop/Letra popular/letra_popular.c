#include <stdio.h>

int main(){
    float pontuacao;
    float indice;
    int freq;
    char letra;

    printf("Digite uma Letra: ");
    scanf("%c", &letra);
    printf("\nA quantidade de vezes que essa letra apareceu: ");
    scanf("%d", &freq);
    printf("\nDigite o indice de popularidade: ");
    scanf("%f", &indice);

    pontuacao = freq * indice;

    printf("A popularidade de %c é %.2f", letra, pontuacao);

    return 0;
}