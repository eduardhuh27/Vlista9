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
  //printf("\n%d\n",fator);
  return fator;
  //declaração de variáveis
	/*int i, fat = 1;
	
	//calculando o fatorial de 'n'
	for (i=2;i<=base; i++)
	{
		fat *= i;
	}

	//retornando o resultado
	return fat;*/
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
/*//importação de bibliotecas
#include <stdio.h>
#include <float.h>

//protótipos das funções
float calcularSoma (int n);
int fatorial (int n);
int potencia (int base, int exp);

//main
void main ()
{	
	//declaração de variáveis
	int numero;
	float soma;
	
	//lendo os dados
	printf ("Numero: ");
	scanf ("%d", &numero);
	
	//chamando a função
	soma = calcularSoma (numero);

	//exibindo o resultado
	printf ("\n\nSoma = %.2f", soma);
}

//implementação das funções
float calcularSoma (int n)
{
	//declaração de variáveis
	float s = 1;
	int i;
	
	//calculando o valor de 's'
	for (i=1;i<n;i++)
	{
		s += (float)potencia (n-i, i)/fatorial (i);
	}
		
	//retornando o resultado
	return s;
}

int fatorial (int n)
{
	//declaração de variáveis
	int i, fat = 1;
	
	//calculando o fatorial de 'n'
	for (i=2;i<=n;i++)
	{
		fat *= i;
	}

	//retornando o resultado
	return fat;	
}

int potencia (int base, int exp)
{
	//declaração de variáveis
	int i, pot = 1;
	
	//calculando a potência
	for (i=1;i<=exp;i++)
	{
		pot *= base;
	}
	
	//retornando o resultado
	return pot;
}*/