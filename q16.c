#include <stdio.h>

int main()
{
  int maior = 0;
  int menor = 0;
  int i = 0;
  for(i = 0; i < 3; i++){
    int numero;
    printf("Digite numero %d: ", i + 1);
    scanf("%d", &numero);
    if(numero > maior) maior = numero;
    if(numero < menor) menor = numero;
  }

    printf("Valor maior é: %d e o menor é: %d\n", maior, menor);
}
