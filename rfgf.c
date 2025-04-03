#include <stdio.h>

int main() {
char nome[50], codigo[50], estado[50];
int  populacao, pontosturisticos;
float areakm, densidadepop, pibpercapta, pib;

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

densidadepop = populacao / areakm;
pibpercapta = pib / populacao;

printf("Cidade: %s \n", nome);
printf("Estado: %s \n", estado);
printf("Pontos turisticos: %d \n", pontosturisticos); 
printf("População: %d \n", populacao);

printf("Área km²: %f\n", areakm);

printf("PIB: %f \n", pib);

printf("Código da carta: %s\n", codigo);

printf("A densidade populacional é: %f\n", densidadepop);

printf("O pib per capta é: %f\n\n", pibpercapta);




char nome2[50], codigo2[50], estado2[50];
int pontosturisticos2;
float pib2, areakm2, densidadepop2, pibpercapta2, populacao2;

printf ("Digite o nome do estado:  ");
scanf ("%s", estado2);

printf ("Digite o código da cidade: ");
scanf ("%s", codigo2);

printf ("Digite o nome da cidade:  ");
scanf ("%s", nome2);

printf("Digite a nmero de pontos turisticos: ");
scanf ("%d", &pontosturisticos2);

printf("Digite a população: ");
scanf ("%f", &populacao2);

printf("Digite o PIB: ");
scanf ("%f", &pib2);

printf("Digite a area km²: ");
scanf ("%f", &areakm2);

densidadepop2 = populacao / areakm;
pibpercapta2 = pib2 / populacao;

printf("Cidade: %s\n", nome2);
printf("Estado: %s\n", estado2);
printf("Pontos turisticos: %d\n", pontosturisticos2); 
printf("População: %f\n", populacao2);
printf("Área km²: %f\n", areakm2);
printf("PIB: %f\n", pib2);
printf("Código da carta: %s\n", codigo2);
printf("A densidade populacional é: %f\n", densidadepop2);
printf("O pib per capta é: %f\n\n", pibpercapta2);



return 0;

}
