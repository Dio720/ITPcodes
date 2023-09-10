#include <stdio.h>

int main()
{
    float preco, orcamento;
    int numero_itens, total_itens;

    numero_itens = 0;
    total_itens = 0;
    preco = 0;
    orcamento = 0;

    do
    {
        total_itens = total_itens + numero_itens;
        orcamento = orcamento + (preco * numero_itens);
        scanf("%d %f",&numero_itens, &preco);

    } while (numero_itens >= 0);

    printf("%d %.2f",total_itens, orcamento);
    
    return 0;

}