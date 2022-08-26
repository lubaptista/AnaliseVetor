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

int main()
{
  int vet[1000], inicio=0, fim=1000, geraV;

  geraV=gerador(vet);
  BubbleSort(geraV, fim);
  imprime_ordenado(geraV);
  QuickSort(geraV, inicio,fim);

  return 0;
}
