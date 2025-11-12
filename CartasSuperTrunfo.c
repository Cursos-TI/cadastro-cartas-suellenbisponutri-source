#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
  //Variaveis Carta 1
  char estado1;
  char codigo1[3];
  char nomeCidade1[20];
  int  populacao1;
  float area1,pib1;
  int pontosturisticos1;

  //Variaveis Carta 2
  char estado2;
  char codigo2[3];
  char nomeCidade2[20];
  int populacao2;
  float area2,pib2;
  int pontosturisticos2;

  //Entrada de dados Carta 1

  printf("===CADASTRO DA CARTA 1===\n");
  printf("Digite o Estado (letra de A a H): ");
  scanf("%c",&estado1);

  printf("Digite o codigo: ");
  scanf("%s",codigo1);

  printf("Digite o nome da cidade (sem espacos): ");
  scanf("%s",nomeCidade1);

  printf("Digite a populacao: ");
  scanf("%d",&populacao1);

  printf("Digite a area (em km²): ");
  scanf("%f",&area1);

  printf("Digite o PIB (em bilhoes): ");
  scanf("%f",&pib1);

  printf("Digite o numero de pontos turisticos:");
  scanf("%d",&pontosturisticos1);

//Entrada de dados Carta 2

  printf("\n===CADASTRO DA CARTA 2===\n");
  printf("Digite o Estado (letra de A a H): ");
  scanf(" %c",&estado2);

  printf("Digite o codigo: ");
  scanf("%s",codigo2);

  printf("Digite o nome da cidade (sem espacos): ");
  scanf("%s",nomeCidade1);

  printf("Digite a populacao: ");
  scanf("%d",&populacao1);

  printf("Digite a area (em km²): ");
  scanf("%f",&area2);

  printf("Digite o PIB (em bilhoes): ");
  scanf("%f",&pib2);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d",&pontosturisticos2);

  //Exibicao das Cartas Cadastradas
printf("\n===DADOS DA CARTA 1===\n");
printf("Estado:%c\n",estado1);
printf("Codigo:%s\n",codigo1);
printf("Nome da Cidade:%s\n",nomeCidade1);
printf("Populacao:%d\n",populacao1);
printf("Area:%.2f km²\n",area1);
printf("PIB:%.2f bilhoes de reais\n",pib1);
printf("Numero de Pontos Turistios:%d\n",pontosturisticos1);

printf("\n===DADOS DA CARTA 2===\n");
printf("Estado:%c\n",estado2);
printf("Codigo:%s\n",codigo2);
printf("Nome da Cidade:%s\n",nomeCidade2);
printf("Populacao:%d\n",populacao2);
printf("Area:%.2f km²\n",area2);
printf("PIB:%.2f bilhoes de reais\n",pib2);
printf("Numero de Pontos Turistios:%d\n",pontosturisticos2);


return 0;
} 
