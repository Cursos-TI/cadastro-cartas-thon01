#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 char Estado[2];
 char codigo[5];
 char Nome_da_Cidade[50];
 int População;
 float area;
 float PIB;
 int numero_de_Pontos_Turísticos;

 char Estado2[2];
 char codigo2[5];
 char Nome_da_Cidade2[50];
 int População2;
 float area2;
 float PIB2;
 int numero_de_Pontos_Turísticos2;
 
 
 
 // Área para entrada de dados carta 1
 printf("Carta Nº1:\n ");
 
  printf("Digite Estado: ");
  scanf(" %s", Estado);

  printf("Digite codigo da carta: ");
  scanf(" %s", codigo);

  printf("Digite Nome da Cidade: ");
  scanf(" %s", Nome_da_Cidade);

  printf("Digite População: ");
  scanf(" %d", &População);

  printf("Digite Área: ");
  scanf(" %f", &area);

  printf("Digite PIB: ");
  scanf(" %f", &PIB);

  printf("Digite Número de Pontos Turísticos: ");
  scanf(" %d", &numero_de_Pontos_Turísticos);

  // Área para exibição dos dados da cidade carta 1
  printf("Carta Nº1:\n ");

  printf("Estado: %s\n", Estado);

  printf("Codigo da carta: %s\n", codigo);

  printf("Nome da Cidade: %s\n", Nome_da_Cidade);

  printf("População: %d\n", População);

  printf("Área: %2f", area);
  printf("km²\n");

  printf("PIB: %f2\n", PIB);

  printf("Número de Pontos Turísticos: %d\n", numero_de_Pontos_Turísticos);



  // Área para entrada de dados carta 2
  printf("Carta nº2:\n ");

  printf("Digite Estado: ");
  scanf(" %s", Estado2);

  printf("Digite codigo da carta: ");
  scanf(" %s", codigo2);

  printf("Digite Nome da Cidade: ");
  scanf(" %s", Nome_da_Cidade2);

  printf("Digite População: ");
  scanf(" %d", &População2);

  printf("Digite Área: ");
  scanf(" %f", &area2);

  printf("Digite PIB: ");
  scanf(" %f", &PIB2);

  printf("Digite Número de Pontos Turísticos: ");
  scanf(" %d", &numero_de_Pontos_Turísticos2);



  // Área para exibição dos dados da cidade carta 2
  printf("Carta nº2:\n ");

  printf("Estado: %s\n", Estado2);

  printf("Codigo da carta: %s\n", codigo2);

  printf("Nome da Cidade: %s\n", Nome_da_Cidade2);

  printf("População: %d\n", População2);

  printf("Área: %2f", area2);
  printf("km²\n");

  printf("PIB: %2f\n", PIB2);

  printf("Número de Pontos Turísticos: %d\n", numero_de_Pontos_Turísticos2);



return 0;
} 
