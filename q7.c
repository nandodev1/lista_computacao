#include <stdio.h>

int main()
{
  float altura;
  float peso;
  int i = 0;
  printf("Digite altura: " );
  scanf("%f", &altura);

  printf("Digite peso: " );
  scanf("%f", &peso);

  float IMC = peso/(altura* altura);

  if(IMC < 18.5){
    printf("Abaixo do peso.\n");
  }else if (IMC >= 18.5 && IMC < 24.9 ){
    printf("Peso normal.\n");
  }else if (IMC >= 25.0 && IMC < 29.9){
    printf("Sobrepeso.\n");
  }else if (IMC >= 30.0 && IMC < 34.9){
    printf("Obesidade Grau I.\n");
  }else if (IMC >= 35.0 && IMC < 39.9){
    printf("Obesidade Grau II.\n");
  }else if (IMC >= 40){
    printf("Obesidade Grau III.\n");
  }

}
