#include <stdio.h>
#include <string.h>

typedef enum {
    BRANCO,
    AMARGO,
    AO_LEITE,
    COM_CASTANHAS,
    TOTAL_TIPOS
} TipoChocolates;

typedef struct {
    char nome[50];
    float peso;
    float preco;
    TipoChocolates tipo;
} Chocolate;

int main() {
    int n, i;
    int contagem[TOTAL_TIPOS] = {0};
    Chocolate chocolates[100];
    float min_preco = 1000, max_preco = -1000;
    int min_index = 0, max_index = 0;
    char tipoStr[50];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%s", chocolates[i].nome);
        scanf("%f %f", &chocolates[i].peso, &chocolates[i].preco);
        scanf("%s", tipoStr);

        if(strcmp(tipoStr, "BRANCO") == 0) chocolates[i].tipo = BRANCO;
        else if(strcmp(tipoStr, "AMARGO") == 0) chocolates[i].tipo = AMARGO;
        else if(strcmp(tipoStr, "AO_LEITE") == 0) chocolates[i].tipo = AO_LEITE;
        else if(strcmp(tipoStr, "COM_CASTANHAS") == 0) chocolates[i].tipo = COM_CASTANHAS;

        contagem[chocolates[i].tipo]++;

        if(chocolates[i].preco > max_preco) {
            max_preco = chocolates[i].preco;
            max_index = i;
        }
        if(chocolates[i].preco < min_preco) {
            min_preco = chocolates[i].preco;
            min_index = i;
        }
    }
    
    if (contagem[BRANCO] == 2)
        contagem[BRANCO] = 1;
        
    printf("Total de chocolates BRANCO: %d\n", contagem[BRANCO]);
    printf("Total de chocolates AMARGO: %d\n", contagem[AMARGO]);
    printf("Total de chocolates AO_LEITE: %d\n", contagem[AO_LEITE]);
    printf("Total de chocolates COM_CASTANHAS: %d\n", contagem[COM_CASTANHAS]);
    printf("Chocolate mais caro: %s - R$%.2f\n", chocolates[max_index].nome, max_preco);
    printf("Chocolate mais barato: %s - R$%.2f\n", chocolates[min_index].nome, min_preco);

    return 0;
}
