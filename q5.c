#include <stdio.h>

int main()
{
  int vetor[3][3];
  int i;
  int j;
  for(i = 0; i < 3; i++){
    int numero;
      for(j = 0; j < 3; j++){
        printf("Digite numero: ");
        scanf("%d", &numero);
        vetor[i][j] = numero;
    }
  }

  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
        printf("%d ", vetor[i][j]);
    }
    printf("\n");
  }
    printf("-----------\n");

    int soma_diagonal = 0;

    for(j = 0; j < 3; j++){
        printf("%d ", vetor[j][j]);
        soma_diagonal += vetor[j][j];
        vetor[j][j] *= 2;
    }
    printf("\n-----------\n");

    for(j = 0; j < 3; j++){
        printf("%d ", vetor[j][j]);
    }

    printf("\n-----------\n");
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
        printf("%d ", vetor[i][j]);
    }
    printf("\n");
  }
    printf("-----------\n");

}



