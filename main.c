#include <stdio.h>
#include <stdlib.h>

int gerador(int * Vet[1001]);
int BubbleSort(int Vet[1001]);
int QuickSort(int Vet[1001]);
void imprimirVet(int Vet[1001]);
void media(int Vet[1001]);
void mediana(int Vet[1001]);
void maiorValor(int Vet[1001]);
void menorValor(int Vet[1001]);

int main(){
    int vet[1001], i;

  gerador(&vet);

  BubbleSort(vet);
  QuickSort(vet);


  imprimirVet(vet);

  media(vet);
  mediana(vet);
  maiorValor(vet);
  menorValor(vet);
  return 0;}

int gerador(int * Vet[1001]){

//codigo gerador de numeros


}

int BubbleSort(int Vet[1001]){

//codigo Bubble Sort

}

int QuickSort(int Vet[1001]){

  //codigo Quick Sort

}




void imprimirVet (int Vet[1001]){
   printf("\n>Vetor gerado: ");
   for (int i=0; i<1000; i++)
        printf("%d", Vet[i]);
}

void media(int Vet[1001]){
  int med; //variavel para calcular média
  //calculo da media
  printf("\n\n>Media do vetor: %d", med);
}

void mediana(int Vet[1001]){
  int MED; //variavel para calcular mediana
  //calculo mediana
  printf("\n>Mediana do vetor: %d", MED);
}

void maiorValor(int Vet[1001]){
  int maior; //variavel para calcular maior valor do vetor
  //calculo do maior valor
  printf("\n>Maior valor do vetor: %d", maior);
}

void menorValor(int Vet[1001]){
  int menor; //variavel para calcular menor valor do vetor
  //calculo do menor valor
  printf("\n>Menor valor do vetor: %d", menor);
}
