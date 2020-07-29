#include <stdio.h>

int main()
{
  int count = 0;
  int i;
  for(i = 1; i <= 200; i++){
    if((i % 2) == 0)count += 1;
  }
  printf("Quantidade de pares %d\n", count);
}