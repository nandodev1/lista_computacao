#include <stdio.h>

int main()
{
  int A[] = {1,0,5,-2,-5,7};
  int simples = A[0] + A [1] + A[5];
  printf("Soma: %d\n", simples);
  A[4] = 100;
  int i = 0;

  for(i = 0; i < 5; i++){
    printf("%d\n", A[i]);
  }
}
