#include <stdio.h>

int main()
{
    float deposito;
    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);

    float investimento;
    printf("Digite o valor do investimento: ");
    scanf("%f", &investimento);


    float meses;
    printf("Digite a quantidade de meses: ");
    scanf("%f", &meses);

  float montante = deposito;
  float juros;

  for(int i = 0; i < meses; i++){
    juros = montante * (0.0157 / 12);
    montante += juros;
    montante += investimento;
  }

  printf("Lucro: %f\n", montante - deposito - (meses * investimento));
}
