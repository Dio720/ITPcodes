#include <stdio.h>

int main(){

    int numero, a, a1, a2, a3;

    scanf("%d", &numero);

    if (numero < 10)
    {
        printf("%d", numero);
    }
    else if (numero >= 10 && numero < 100)
    {
        a = numero % 10;
        numero = numero / 10;
        printf("%d\n", numero);
        printf("%d\n",a);
    }
    else if (numero >=100 && numero < 1000)
    {
        a = numero % 10;
        numero = numero / 10;
        a1 = numero % 10;
        numero = numero / 10;
        printf("%d\n%d\n%d",numero, a1, a);
    }
    else if (numero >= 1000 && numero < 10000)
    {
        a = numero % 10;
        numero = numero / 10;
        a1 = numero % 10;
        numero = numero / 10;
        a2 = numero % 10;
        numero = numero / 10;
        printf("%d\n%d\n%d\n%d",numero, a2, a1, a);      
    }
    else if (numero >= 10000 && numero < 100000)
    {
        a = numero % 10;
        numero = numero / 10;
        a1 = numero % 10;
        numero = numero / 10;
        a2 = numero % 10;
        numero = numero / 10;
        a3 = numero % 10;
        numero = numero / 10;
        printf("%d\n%d\n%d\n%d\n%d",numero, a3, a2, a1, a);        
    }
    
    
    
    return 0;
}