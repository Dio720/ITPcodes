#include <stdio.h> 
#include <string.h> 

typedef struct {
    int codigoLED;
    char descricao[50];
    float preco;
} Produto;

void entrada(Produto p[], int a){
    for (int i = 0; i < a; i++){
        scanf("%d", &p[i].codigoLED);
        scanf(" %[^\n]", p[i].descricao);
        scanf(" %f", &p[i].preco);
    }

}

int busca_codigo(Produto p[], int tam, int codigo){
    for (int i = 0; i < tam; i++)
        if (codigo == p[i].codigoLED)
            return i;

    return -1;
}

int main(){
    int qntd_produtos;
    float conta = 0.0;
    Produto produtos[30];

    scanf("%d", &qntd_produtos);
    entrada(produtos, qntd_produtos);

    while(1){
        int codigo, quantidade;
        scanf("%d", &codigo);

        if (codigo == 0)
            break;

        scanf("%d", &quantidade);
        if (quantidade < 0 )
            continue;

        int indiceProd = busca_codigo(produtos, qntd_produtos, codigo);
        if (indiceProd != -1)
            conta += produtos[indiceProd].preco * quantidade;
    }

    printf("%.2f", conta);

    return 0;
}