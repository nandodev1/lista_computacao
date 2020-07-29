#include <stdio.h>

int main()
{
  float salario;
  printf("Digite o salário: ");
  scanf("%f", &salario);

  float t_d;

  if( salario <= 1903.98 ){
    t_d = 0;
    printf("Faixa 1.\n");
  }else if (salario >= 1903.99 && salario <= 2826.65 ){
    printf("Faixa 2.\n");
    t_d = 0.075;
  }else if (salario >= 2826.66 && salario <= 3751.05){
    printf("Faixa 3.\n");
    t_d = 0.15;
  }else if (salario >= 3751.06 && salario <= 4664.68){
    printf("Faixa 4.\n");
    t_d = 0.225;
  }else if (salario >= 4664.68){
    printf("Faixa 5.\n");
    t_d = 0.275;
  }
  salario -= salario*t_d;
  printf("salário liquido: %f.\n", salario);
}
