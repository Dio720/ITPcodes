#include <stdio.h>

int main()
{
    int numero, aux, palindromo = 0, digito = 0;

    scanf("%d", &numero);

    aux = numero;

    while (numero > 0)
    {
        digito = numero % 10;
        palindromo = palindromo * 10 + digito;
        numero /= 10;
    }
    
    if (palindromo == aux && palindromo % 2 == 0)
    {
        printf("%d é Palíndromo e par.", aux);
    }
    else if (palindromo == aux && palindromo % 2 != 0)
    {
        printf("%d é Palíndromo e impar.", aux);
    }
    else
    {
        printf("%d não é Palíndromo e par.", aux);
    }
    
    
    return 0;
}