#include <stdio.h>

int main()
{
  int vetor[10];
  int count = 0;
  int i = 0;
  for(i = 0; i < 10; i++){
    int numero;
    printf("Digite numero %d: ", i + 1);
    scanf("%d", &numero);
    vetor[i] = numero;
    if( numero < 0 ){
      count += 1; 
    }
  }
  printf("%d valores são NEGATIVOS\n", count);
}