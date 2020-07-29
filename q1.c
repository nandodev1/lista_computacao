#include <stdio.h>

int main()
{
  int vetor[15];
  int i = 0;
  for(i = 0; i < 16; i++){
    int numero;
    printf("Digite numero %d: ", i + 1);
    scanf("%d", &numero);
    vetor[i] = numero;
  }

  for(i = 0; i < 16; i++){
    printf("Valor %d: %d\n", i, vetor[i]);
  }
}
