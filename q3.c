#include <stdio.h>

int main()
{
  int vetor[20];
  int i = 0;
  for(i = 0; i < 20; i++){
    int numero;
    printf("Digite numero %d: ", i + 1);
    scanf("%d", &numero);
    vetor[i] = numero;
  }

  for(i = 0; i < 20; i++){
    if( !(vetor[i] % 2) )
    printf("O valor %d é par na posição: %d\n", vetor[i], i);
    else 
    printf("O valor %d é ínpar na posição: %d\n", vetor[i], i);
  }
}