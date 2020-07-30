#include <stdio.h>

int main()
{
  int idade;
  printf("Qual a sua idade?: ");
  scanf("%d", &idade);

  if( idade >= 18 && idade <= 67 )
    printf("Parabêns você é um candidato à ajudar o próximo.\n");
  else 
    printf("Você não poderá doar sangue.\n");
}
