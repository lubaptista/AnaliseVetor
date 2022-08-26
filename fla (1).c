#include <time.h>

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int gerador(int Vet[1001]);
void imprimirVet(int Vet[1000]);


int main(){
    int vet[1001], i,geraV;

  geraV=gerador(vet);
  imprimirVet(geraV);

 return 0;}

int gerador(int Vet[]){

    printf("Vetor Gerado: ");
      for(int i=0;i<1000;i++){
        Vet[i] = rand();

  }
  return Vet;
}
//codigo gerador de numeros

void imprimirVet(int Vet[]){
   printf("\n>Vetor gerado: ");
   for (int i=0; i<1000; i++){
        printf("\n%d- %d", i, Vet[i]);
    }
}

