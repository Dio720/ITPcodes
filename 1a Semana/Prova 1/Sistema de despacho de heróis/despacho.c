#include <stdio.h>

int main()
{
    int quantidade, classe, ameaca;

    scanf("%d %d %d", &quantidade, &classe, &ameaca);

    if(quantidade < 1)
    {
        printf("Melhor chamar Saitama!\n");
    }
    else
    {
            switch(ameaca)
    {
        case 1:
            if(classe == 1 && quantidade >=3)
            {
                printf("Heróis vencerão!\n");
            }
            else if (classe > 1)
            {
                printf("Heróis vencerão!\n");
            }
            else{
                printf("Melhor chamar Saitama!\n");
            }
            break;
        case 2:
            if(classe == 2 && quantidade >= 3) 
            {
                printf("Heróis vencerão!\n");
            }
            else if(classe > 2)
            {
                printf("Heróis vencerão!\n");
            }
            else
            {
                printf("Melhor chamar Saitama!\n");
            }
            break;
        case 3:
            if(classe == 3 && quantidade >=3)
            {
                printf("Heróis vencerão!\n");
            }
            if(classe > 3)
            {
                printf("Heróis vencerão!\n");
            }
            else
            {
                printf("Melhor chamar Saitama!\n");
            }
            break;
        case 4:
            if(classe == 4 && quantidade >=3)
            {
                printf("Heróis vencerão!\n");
            }
            if (classe > 4)
            {
                printf("Heróis vencerão!\n");
            }
            else
            {
                printf("Melhor chamar Saitama!\n");
            }
            break;
        case 5:
            if(classe == 5)
            {
                printf("Heróis vencerão!\n");
            }
            else
            {
                printf("Melhor chamar Saitama!\n");
            }
            break;
    }
    }
    
    
    return 0;
}