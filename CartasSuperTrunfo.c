#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de
// cadastro de cartas de cidades. Siga os comentários para implementar cada
// parte do desafio.
// Teste larissa

int main() {
  // Sugestão: Defina variáveis separadas para cada atributo da cidade.
  // Exemplos de atributos: código da cidade, nome, população, área, PIB, número
  // de pontos turísticos.
  // Definição das variáveis do tipo int
  int population, numberOfTuristicsPoints, cityNumber;

  // Definição das variáveis do tipo float
  float pib, area;

  // Definição das variáveis 'string'
  char name[1000];
  // Cadastro das Cartas:
  // Sugestão: Utilize a função scanf para capturar as entradas do usuário para
  // cada atributo. Solicite ao usuário que insira as informações de cada
  // cidade, como o código, nome, população, área, etc.
  // Colocando os valores nas variáveis usando o scanf
  printf("Insira o número da cidade: ");
  scanf("%d", &cityNumber);
  printf("Insira o nome da cidade: ");
  scanf("%s", name);
  printf("Insira a quantidade de habitantes: ");
  scanf("%d", &population);
  printf("Insira a área da cidade: ");
  scanf("%f", &area);
  printf("Insira o PIB: ");
  scanf("%f", &pib);
  printf("Insira a quantidade de pontos turísticos: ");
  scanf("%d", &numberOfTuristicsPoints);

  // Exibição dos Dados das Cartas:
  // Sugestão: Utilize a função printf para exibir as informações das cartas
  // cadastradas de forma clara e organizada. Exiba os valores inseridos para
  // cada atributo da cidade, um por linha.
  // Fazendo o print das variáveis inseridas
  printf("\n\n\n-----------------------------------\n");
  printf("Cidade N°: %d\n", cityNumber);
  printf("Nome da cidade %s: \n", name);
  printf("Poupulação total: %d\n", population);
  printf("Área total: %0.2f m²\n", area);
  printf("PIB: %0.2f\n", pib);
  printf("Pontos turisticos: %d\n", numberOfTuristicsPoints);

  return 0;
}
