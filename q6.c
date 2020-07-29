#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if( !(numero % 2) )
    printf("O numero %d é par\n", numero);
    else 
    printf("O numero %d é ínpar\n", numero);
}
