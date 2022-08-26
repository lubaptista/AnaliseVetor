#include<stdio.h>
#include<stdlib.h>
#include <time.h>                       //biblioteca para função rand

int gerador(int Vet[1001]);

int main(){
    int vet[1001], i,geraV;

  geraV=gerador(vet);
  imprimirVet(geraV);

 return 0;}

int gerador(int Vet[]){                 //codigo gerador de numeros

    printf("Vetor Gerado: ");
      for(int i=0;i<1000;i++){
        Vet[i] = rand();

  }
  return Vet;
}

