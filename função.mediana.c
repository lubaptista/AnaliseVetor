#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerador(int Vet[])
{
    printf("Vetor Gerado: ");
    for(int i=0;i<1000;i++)
    {
        Vet[i] = rand();
        printf(" %d", Vet[i]);
        if(i!=1000)
            printf(",");
    }
    printf("}");
    return Vet;
}

int particiona(int *Vet, int inicio, int final)
{
  int esq, dir, pivo, j;
  esq=inicio;
  dir=final;
  pivo=Vet[inicio];
  while(esq<dir)
  {
    while(Vet[esq]<=pivo)
       esq++;
    while(Vet[dir]>pivo)
      dir--;
    if(esq<dir)
    {
      j=Vet[dir];
      Vet[esq]=Vet[dir];
      Vet[dir]=j;
    }
  }
  Vet[inicio]=Vet[dir];
  Vet[dir]=pivo;
  return dir;
}

void QuickSort (int *Vet, int inicio, int fim)
{
  int pivo;
  if(inicio<fim)
  {
    pivo=particiona(Vet,inicio,fim);
    QuickSort(Vet,inicio,pivo-1);
    QuickSort(Vet,pivo+1,fim);
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

void mediana(int Vet[], int n){
  int m1, m2, M;

  BubbleSort(Vet, n);

      m1 = Vet[n / 2 - 1];
      m2 = Vet[n / 2];
      m1 += m2;
      M = m1 / 2;

      printf("\nMediana: %d", M);
}

int main()
{
  int vet[1000], inicio=0, fim=1000, geraV;

  geraV=gerador(vet);
  BubbleSort(geraV, fim);
  imprime_ordenado(geraV);
  //QuickSort(geraV, inicio,fim);

  mediana(geraV, fim);

  return 0;
}

