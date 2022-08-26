void maiorValor(int Vet[]){
  int maior; //variavel para calcular maior valor do vetor
  //calculo do maior valor
  maior = Vet[0];

  for(int i=0; i<1000;i++)
    {
      if(maior < Vet[i])
        maior = Vet[i];
    }

  printf("\n>Maior valor do vetor: %d", maior);
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

  printf("\n>Menor valor do vetor: %d", menor);
}
