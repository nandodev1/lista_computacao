#include <stdio.h>

int main()
{
  int A = 2;
  int B = 5;
  int C = 10;

  int expressao1 = A+B*C/A;
  int expressao2 = B+C%A*(B-A/2);
  int expressao3 = (B+C)%2+A*(B+(C*4));

  printf("Expressão 1: %d\n", expressao1);
  printf("Expressão 2: %d\n", expressao2);
  printf("Expressão 3: %d\n", expressao3);

}
