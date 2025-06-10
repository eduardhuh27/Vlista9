#include <stdio.h>

int logari (int base, int log);


void main ()
{
  int base, log, expo,cont;

  printf("Entre com a base:");
  scanf("%d",&base);
  
  printf("Entre com o logaritmando:");
  scanf("%d",&log);
  
  cont= logari(base,log);
  printf("Resposta:%d",cont);
}

int logari (int base,int log)
{
  int cont=0;

  while (log>1)
  {
    log/=base;
    cont++;
  }
  return cont;
}