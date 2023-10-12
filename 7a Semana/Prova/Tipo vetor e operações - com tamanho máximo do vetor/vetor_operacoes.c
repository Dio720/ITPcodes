#include <stdio.h>

typedef struct {
    int N;
    double valores[100];
} Vetor;

void entrada(Vetor *vetor, int tamanho){
    for (int i = 0; i < tamanho; i++)
        scanf("%lf", &vetor->valores[i]);
}

void soma_vetor(Vetor vetor1, Vetor vetor2, int tamanho, double saida[]){
    for (int i = 0; i < tamanho; i++)
        saida[i] = vetor1.valores[i] + vetor2.valores[i];
}

double produto_interno(Vetor vetor1, Vetor vetor2, int tamanho){
    double produto_interno = 0.0;

    for (int i = 0; i < tamanho; i++)
        produto_interno += vetor1.valores[i] * vetor2.valores[i];

    return produto_interno;
}

int main(){
    Vetor vetor1, vetor2;
    double resultado[100], produto_vetores;

    scanf("%d", &vetor1.N);

    vetor2.N = vetor1.N;

    entrada(&vetor1, vetor1.N); 
    entrada(&vetor2, vetor2.N);

    soma_vetor(vetor1, vetor2, vetor1.N, resultado);
    produto_vetores = produto_interno(vetor1, vetor2, vetor1.N);

    for (int i = 0; i < vetor1.N; i++)
        printf("%.2lf ", resultado[i]); 
        
    printf("\n%.2lf", produto_vetores); 

    return 0;
}
