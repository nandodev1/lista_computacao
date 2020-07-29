#include <stdio.h>

int main()
{
  int vetor[5];
  int i = 0;
  for(i = 0; i < 5; i++){
    int numero;
    printf("Digite nota %d: ", i + 1);
    scanf("%d", &numero);
    vetor[i] = numero;
  }

  float media = 0;

  for(i = 0; i < 5; i++){
    media += vetor[i];
  }
  printf("Sua média é %f\n", media/5);
}