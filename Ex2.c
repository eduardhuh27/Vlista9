#include <stdio.h>

int potencia (int a, int b, int *maior)
{
  int i,p2=1,cont=0,maximo,menor;
  *maior=0;
  if(a<b)
  {
    maximo=b;
    menor=a;
  }
  else
  {
    maximo=a;
    menor=b;
  }

  for(i=menor;i<=maximo;i++)
  {
    for(p2=2;p2<=i;p2*=2)
    { 
      if(i==p2)
      {
        cont++;
        if(i>*maior)
        {
          *maior=i;
        }
      }
    }
  }
  return cont;
}
void main ()
{
  int a,b,maior,quantidade;

  printf("Entre com o intervalo:");
  scanf("%d %d",&a,&b);

  quantidade= potencia(a,b,&maior);

  printf("Quantidade de pontecias de 2:%d\n Maior das potencias presente no intevalo:%d",quantidade, maior);
}