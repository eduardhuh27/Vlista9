#include <stdio.h>

int leituraDados (float *maior)
{
  float n;
  int cont=0;
  *maior=0;
  while (n!=0) 
    {
      printf("Entre com numero (Caso deseje terminar digite 0):");
      scanf("%f",&n);
        if(n==0)
        {
        break;
        }
        cont++;
        if(n>*maior)
        {
          *maior=n;
        }
    }
 return cont;
}

void main ()
{
  int quantidade;
  float maior;
  quantidade=leituraDados(&maior);

  printf("Quantidade de dados lidos:%d\n Maior dado lido:%.1f",quantidade, maior);
}