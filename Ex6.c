#include <stdio.h>

float somatorio (int n);
int fatorial (int base);
int potencia (int base,int expo);
void main ()
{
  int n;
  float resposta;

  printf("Entre com um numero:");
  scanf("%d",&n);

  resposta = somatorio(n);

  printf("Resposta = %.1f",resposta);

}

float somatorio (int n)
{
  int i;
  float s = 1;

  for (i=1;i<n;i++)
  {
    
    s += (float)potencia( n-i , i)/fatorial(i);

  }
  return s;
}
int fatorial (int base)
{
  int i,fator=1;

  for (i=2;i<=base;i++)
  {
    fator *=i;
  }
  
}
int potencia (int base, int expo)
{
  int i,pot=1;

  for (i=1;i<=expo;i++)
  {
    pot*=base;
  }
  //printf("\n%d\n",pot);
  return pot;
}