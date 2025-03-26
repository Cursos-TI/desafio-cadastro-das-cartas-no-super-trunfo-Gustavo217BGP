#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

  



char nome[50], codigo[50], estado[50];
int populacao, pontosturisticos;
float pib, areakm;

printf ("Digite o nome do estado:  ");
scanf ("%s", estado);

printf ("Digite o código da cidade: ");
scanf ("%s", codigo);

printf ("Digite o nome da cidade:  ");
scanf ("%s", nome);

printf("Digite a nmero de pontos turisticos: ");
scanf ("%d", &pontosturisticos);

printf("Digite a população: ");
scanf ("%d", &populacao);

printf("Digite o PIB: ");
scanf ("%f", &pib);

printf("Digite a area km²: ");
scanf ("%f", &areakm);

printf("Cidade: %s\n\nEstado: %s\n\n", nome, estado);
printf("Pontos turisticos: %d\n\nPopulação: %d\n\n", pontosturisticos, populacao);
printf("Área km²: %f\n\nPIB: %f\n\nCódigo da carta: %s\n\n", areakm, pib, codigo);





char nome2[50], codigo2[50], estado2[50];
int populacao2, pontosturisticos2;
float pib2, areakm2;

printf ("Digite o nome do estado:  ");
scanf ("%s", estado2);

printf ("Digite o código da cidade: ");
scanf ("%s", codigo2);

printf ("Digite o nome da cidade:  ");
scanf ("%s", nome2);

printf("Digite a nmero de pontos turisticos: ");
scanf ("%d", &pontosturisticos2);

printf("Digite a população: ");
scanf ("%d", &populacao2);

printf("Digite o PIB: ");
scanf ("%f", &pib2);

printf("Digite a area km²: ");
scanf ("%f", &areakm2);

printf("Cidade: %s\n\nEstado: %s\n\n", nome2, estado2);
printf("Pontos turisticos: %d\n\nPopulação: %d\n\n", pontosturisticos2, populacao2);
printf("Área km²: %f\n\nPIB: %f\n\nCódigo da carta: %s\n\n", areakm2, pib2, codigo2);




return 0;

}
