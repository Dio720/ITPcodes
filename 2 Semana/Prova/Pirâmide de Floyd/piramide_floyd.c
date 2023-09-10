#include <stdio.h>
int main() {
   int linhas, i, j, num = 1;
   
   scanf("%d", &linhas);

   if (linhas > 0)
   {
    for (i = 1; i <= linhas; i++) 
    {
        for (j = 1; j <= i; ++j) 
        {
            if (num < 10)
            {
                printf(" %d ", num);
            }
            else
            {
                printf("%d ", num);
            }
            num++;
        }
        printf("\n");
    }
   }
   else
   {
    printf("Você entrou com %d, tente de novo na próxima", linhas);
   }
   
   return 0;
}
