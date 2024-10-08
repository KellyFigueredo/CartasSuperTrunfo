#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int estado;
  int codigo;
  char cidade[50];
  int populaçao;
  float area;
  float densidade;
  float pib;
  int capita;
  int turistico;
  float media;

  // Área para entrada de dados

  printf ("Digite o estado: \n");
  scanf ("%d", &estado);

  printf ("Digite o código da carta: \n");
  scanf ("%d", &codigo);

  printf ("Digite o nome da cidade: \n");
  scanf ("%s", &cidade);

  printf ("Digite a população: \n");
  scanf ("%d", &populaçao); 

  printf ("Digite o área: \n");
  scanf ("%.2f", &area);

  printf ("Digite a densidade populacional: \n");
  scanf ("%.2f", &densidade);

  printf ("Digite o PIB: \n");
  scanf ("%.2f", &pib);

  printf ("Digite o PIB per Capita: \n");
  scanf ("%d", &capita);

  printf ("Digite o número de pontos turísticos: \n");
  scanf ("%d", &turistico);

  // Área para exibição dos dados da cidade
  // soma da Densidade Populacional e o PIB per Capita

  media = ( densidade + capita );

  printf("A soma é: %.2f", media);

return 0;
}
