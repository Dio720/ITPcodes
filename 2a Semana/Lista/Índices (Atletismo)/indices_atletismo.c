#include <stdio.h>
 
int main()
{
    int qntd_anos, i, aux;
    float media, performance;

    scanf("%d", &qntd_anos);

    aux = qntd_anos;

    for (i = 0; i < qntd_anos; i++)
    {   
        scanf("%f", &performance);

        if (performance >=0)
        {
            media += performance;
        }
        else
        {
            aux = qntd_anos - 1;
        }       
    }

    media = media / aux;

    if (media < 1 || qntd_anos < 1)
    {
        printf("A competicao nao possui dados historicos!");
    }
    else
    {
        printf("%.2f\n", media);
    }

    return 0;
}