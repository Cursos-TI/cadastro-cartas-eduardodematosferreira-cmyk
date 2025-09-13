#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

      // Área para definição das variáveis para armazenar as propriedades das cidades

      char estado_A[50], estado_B[50], codigoA01[50], codigoB02[50], nome_cidade1[50], nome_cidade2[50];
      int populacao1, populacao2, p_turisticos1, p_turisticos2;
      float area1, area2, pib1, pib2;

      // Área para entrada de dados

      printf("Digite a letra correspondente ao Estado: ");
      scanf("%s", estado_A);
      printf("Digite o código da Cidade: ");
      scanf("%s", codigoA01);
      printf("Nome da Cidade: ");
      scanf("%s", nome_cidade1);
      printf("População: ");
      scanf("%d", &populacao1);
      printf("Area: ");
      scanf("%f", &area1);
      printf("PIB da Cidade: ");
      scanf("%f", &pib1);
      printf("Pontos Turísticos: ");
      scanf("%d", &p_turisticos1);

      printf("\n");

      printf("Digite a letra correspondente ao Estado: ");
      scanf("%s", estado_B);
      printf("Digite o código da Cidade: ");
      scanf("%s", codigoB02);
      printf("Nome da Cidade: ");
      scanf("%s", nome_cidade2);
      printf("População: ");
      scanf("%d", &populacao2);
      printf("Area: ");
      scanf("%f", &area2);
      printf("PIB da Cidade: ");
      scanf("%f", &pib1);
      printf("Pontos Turísticos: ");
      scanf("%d", &p_turisticos2);

      printf("\n\n");

      // Área para exibição dos dados da cidade

      printf("Carta 1: ");
      printf("\nEstado: %s", estado_A);
      printf("\nCódigo: %s", codigoA01);
      printf("\nNome da Cidade: %s", nome_cidade1);
      printf("\nPopulação: %d", populacao1);
      printf("\nArea: %.2fkm²", area1);
      printf("\nPIB: %.2f bilhões de reais", pib1);
      printf("\nNúmero de Pontos Turísticos: %d \n", p_turisticos1);

      printf("\n");

      printf("Carta 2: ");
      printf("\nEstado: %s", estado_B);
      printf("\nCódigo: %s", codigoB02);
      printf("\nNome da Cidade: %s", nome_cidade2);
      printf("\nPopulação: %d", populacao2);
      printf("\nArea: %.2fkm²", area2);
      printf("\nPIB: %.2f bilhões de reais", pib2);
      printf("\nNúmero de Pontos Turísticos: %d \n", p_turisticos2);
      printf("\n");

return 0;

} 
