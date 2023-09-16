#include <stdio.h>

int main()
{
    int linhas, i, j;

    char letra;

    
    scanf("%d %c", &linhas, &letra);
    
    linhas -= 1;

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < linhas; j++)
        {
            if (i == j || i + j == linhas - 1)
            {
                printf("%c", letra);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
