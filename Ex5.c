#include <stdio.h>

int pot (int numero);

void main ()
{
  int  numero,codigo;
  
  printf("Entre com um numero:");
  scanf("%d", &numero);
  
  
  codigo = pot(numero);
  
  if(numero==0)
    {
      printf("Numero invalido");
    }
}



      

int pot (int numero)
{
 int i,base;

  base=numero; 

    if( (numero<=9) && (numero>=1))
    {
      for (i=0;i<=9;i++)
      {
        printf("%d^%d =%d \n",numero,i,base);
        base*=numero;
      }
      return 1;
    }

    return 0;

}