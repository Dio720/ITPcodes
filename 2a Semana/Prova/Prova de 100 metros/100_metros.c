#include <stdio.h>

int main()
{
    int i, contador = 0, series;
    float meta, atleta;
    
    scanf("%f %f", &meta, &atleta);

    while (1)
    {
        scanf("%f", &atleta);

        if (atleta <= meta)
        {
            contador++;
        }
        if (atleta < 0)
        {
            break;
        }
        
    }
    
    if (contador % 8 != 0 || atleta != 0)
    {
        series = 1 + (contador / 8);
    }
    else
    {
        series = contador / 8;
    }
    
    printf("%d %d", contador, series);

    return 0;
}