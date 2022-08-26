#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerador(int Vet[])
{
    for(int i=0;i<1000;i++)
    {
        Vet[i] = rand();
    }
    return Vet;
}

void imprimirVet(int Vet[]){
   printf("\n>Vetor gerado: {");
   for (int i=0; i<1000; i++){
        printf(" %d", Vet[i]);
        if(i<1000)
            printf(",");
    }
    printf("}");
}

void maiorValor(int Vet[]){
  int maior; //variavel para calcular maior valor do vetor
  //calculo do maior valor
  maior = Vet[0];

  for(int i=0; i<1000;i++)
    {
      if(maior < Vet[i])
        maior = Vet[i];
    }

  printf("\n\n>Maior valor do vetor: %d", maior);
}

void menorValor(int Vet[]){
  int menor; //variavel para calcular menor valor do vetor
  //calculo do menor valor
    menor = Vet[0];

  for(int i=0; i<1000;i++)
    {
      if(menor > Vet[i])
        menor = Vet[i];
    }

  printf("\n\n>Menor valor do vetor: %d", menor);
}

void media(int Vet[]){
  float med;//variavel para calcular média
  //calculo da media
  int soma=0;
  for(int i=0;i<1000;i++){
  soma=soma+Vet[i];
  }
  med=soma/1000;
  printf("\n\n>Media do vetor: %f", med);
  }

int particiona(int *vet, int inicio, int final)
{
  int esq, dir, pivo, j;
  esq=inicio;
  dir=final;
  pivo=vet[inicio];
  while(esq<dir)
  {
    while(vet[esq]<=pivo)
       esq++;
    while(vet[dir]>pivo)
      dir--;
    if(esq<dir)
    {
      j=vet[dir];
      vet[esq]=vet[dir];
      vet[dir]=j;
    }
  }
  vet[inicio]=vet[dir];
  vet[dir]=pivo;
  return dir;
}

void QuickSort (int *vet, int inicio, int fim)
{
  int pivo;
  if(inicio<fim)
  {
    pivo=particiona(vet,inicio,fim);
    QuickSort(vet,inicio,pivo-1);
    QuickSort(vet,pivo+1,fim);
  }
}

void BubbleSort(int *vet, int n)
{
  int i, continua, j, fim=n, k;
  do{
    continua=0;
    for(i=0;i<fim-1;i++)
    {
      if(vet[i]>vet[i+1])
      {
        j=vet[i];
        vet[i]=vet[i+1];
        vet[i+1]=j;
        continua=i;
      }}
    fim--;
  }while(continua!=0);
}

void imprime_ordenado(int *vet)
{
    int i;
    printf("\n\n\n\nVetor ordenado: {");
    for(i=0;i<1000;i++)
    {
        printf(" %d", vet[i]);
        if(i!=1000)
            printf(",");
    }
    printf("} ");
}

void mediana(int Vet[], int n)
{
  int m1, m2, M;

  BubbleSort(Vet, n);

      m1 = Vet[n / 2 - 1];
      m2 = Vet[n / 2];
      m1 += m2;
      M = m1 / 2;

      printf("\n\n>Mediana: %d", M);
}

int main()
{
  int vet[1000], inicio=0, fim=1000, geraV;
  char escolha;

  geraV=gerador(vet);
  imprimirVet(geraV);
  BubbleSort(geraV, fim);
  imprime_ordenado(geraV);
  ///QuickSort(geraV, inicio, fim);
  maiorValor(geraV);
  menorValor(geraV);
  media(geraV);
  mediana(geraV, fim);

  return 0;
}
