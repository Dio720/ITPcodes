#include <stdio.h>
#include <stdlib.h>

void compute_votes(int n, int votes[n], int *most_voted, int *second_most_voted){
    int moda1 = -1, moda2 = -1; 
    int contagem_maxima1 = 0, contagem_maxima2 = 0;

    for (int i = 0; i < n; i++){
        int contagem = 0;

        for (int j = 0; j < n; j++)
            if (votes[j] == votes[i])
                contagem++;

        if (contagem > contagem_maxima1){
            contagem_maxima2 = contagem_maxima1;
            moda2 = moda1;
            contagem_maxima1 = contagem;
            moda1 = votes[i];

        } else if (contagem > contagem_maxima2 && contagem != contagem_maxima1){
            contagem_maxima2 = contagem;
            moda2 = votes[i];
        }
    }

    *most_voted = moda1;
    *second_most_voted = moda2;

}

int main(){
    int tamanho;
    int maisVotado = 0, segundoMaisVotado; 
    int *votos;

    scanf("%d", &tamanho);

    votos = (int *)malloc(tamanho * sizeof(int));

    if (votos == NULL){
        printf("Falha em alocar memória\n");
        return 1;
    }

    for (int i = 0; i < tamanho; i++)
        scanf("%d", &votos[i]);

    compute_votes(tamanho, votos, &maisVotado, &segundoMaisVotado);

    printf("%d %d", maisVotado, segundoMaisVotado); 

    free(votos);

    return 0;
}
