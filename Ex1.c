#include <stdio.h>

void numeros (int n, int a , int b)
{
  int i;

  for (i=a;i<=b;i++)
  {
    if(i%n!=0)
    {
      printf("\t%d",i);
    }
  }
}
void main ()
{
  int n,a,b;
  
  printf("Entre com um numero:");
  scanf("%d",&n);

  printf("Entre com um intervalo(sendo em ordem crescente):");
  scanf("%d %d",&a,&b);
  
  numeros(n,a,b);
}