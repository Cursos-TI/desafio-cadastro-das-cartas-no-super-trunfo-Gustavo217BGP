#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {

char nome[50], codigo[50], estado[50], tipocomparacao, tipodeataque;
int  populacao, pontosturisticos;
float areakm, densidadepop, pibpercapta, pib, resultado;
printf("escolha entre ataque(A), defesa(D) ou recuo(R):");
scanf(" %c", &tipocomparacao);

printf("escolha entre densidade populacional(D), pib per capta(P) ou numero de pontos turisticos(T) para atacar: ");
scanf(" %c", &tipodeataque);

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

densidadepop2 = populacao2 / areakm2;
pibpercapta2 = pib2 / populacao2;



switch (tipocomparacao)
{
 case 'A':
 case 'a':
printf("Você escolheu a opção ataque!\n");
break;
case 'D':
case 'd':
printf("voce escolheu a opção defesa!\n");
break;
case 'R':
case 'r':
printf("você escolheu a opção recuo!\n");
break;
}

switch(tipodeataque)
{
case'D':
case'd':
printf("você quer atadar usando a densidade populacional!\n");
printf("a sua densidade populacional é:%f e a do adversario é %f\n", densidadepop,densidadepop2);
resultado = densidadepop < densidadepop2 ? 1:0;
break;
case'P':
case'p':
printf("voce quer atacar usando o pib percapta!\n");
printf("a sua pib per capta é %f e a do adversario é %f\n", pibpercapta, pibpercapta2);
resultado = pibpercapta > pibpercapta2 ? 1:0;
break;
case 'T':
case 't':
printf("você quer atacar usando os pontos turisticos!\n");
printf("o seu numero de pontos turisticos é %d e odo adversario é %d\n", pontosturisticos, pontosturisticos2);
resultado = pontosturisticos > pontosturisticos2 ? 1:0;
break;
}
if(resultado == 1){
printf("você venceu!!!\n");
}else{
printf("você perdeu!\n");
}




return 0;

}
