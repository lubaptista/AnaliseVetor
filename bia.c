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