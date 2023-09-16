#include <stdio.h>
#include <math.h>

int main()
{
    int numeros[10], i, j;
    float media_a, media_g, media_h, erro_medio, erro_h, erro_g;

    media_a = 0;
    media_g = 1;
    media_h = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &numeros[i]);
    }
    
    for (j = 0; j < 10; j++)
    {
        media_a += numeros[j];
        media_g *= numeros[j];
        media_h += 1.0/numeros[j];
    }
    
    media_a = media_a / 10;
    media_g = pow(media_g, 1.0/10);
    media_h = 10.0/media_h;
    
    erro_h = (media_h - media_a) / media_a;
    erro_g = (media_g - media_a) / media_a;
    erro_medio = ((erro_h + erro_g)/2)*100;

    printf("Média aritmética é %.2f \nMédia harmônica é %.2f \nMédia geométrica é %.2f \nErro médio é %.2f %%", media_a, media_h, media_g, erro_medio);
    return 0;
}