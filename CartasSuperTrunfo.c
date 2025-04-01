#include <stdio.h>
int main(){ 

// VARIAVEIS CARTA 1
char Estado;
char codigo[4];
char nomeCidade[50];
int populacao;
float area;
float PIB;
int Turismo;

// VARIAVEIS CARTA 2
char Estado2;
char codigo2[4];
char nomeCidade2[50];
int populacao2;
float area2;
float PIB2;
int Turismo2;

//CARTA 1
printf("\n-- CARTA 1 --\n");

printf("digite o estado: ");
scanf(" %c", &Estado);

printf("digite o codigo da carta: ");
scanf("%3s", codigo);

printf("digite o nome da cidade: ");
scanf(" %49[^\n]", nomeCidade);

printf("digite a populcão: ");
scanf("%d", &populacao);

printf("digite a area: ");
scanf("%f", &area);

printf("digite o pib: ");
scanf ("%f", &PIB);

printf("digite o numero de pontos turisticos: ");
scanf("%d", &Turismo);

// DADOS DA CARTA NUMERO 1
printf("\n-- Exibindo CARTA 1 --\n");
printf("Estado: %c\n", Estado);
printf("Codigo: %s\n", codigo);
printf("Nome da Cidade: %s\n", nomeCidade);
printf("Populacao: %d\n", populacao);
printf("Area: %.2f km²\n", area);
printf("PIB: %.2f bilhões de reais\n", PIB);
printf("Numero de Pontos Turisticos: %d\n", Turismo);

// CARTA 2
printf("\n-- CARTA 2 --\n");

printf("digite o estado: ");
scanf(" %c", &Estado2);

printf("digite o codigo da carta: ");
scanf("%3s", codigo2);

printf("digite o nome da cidade: ");
scanf(" %49[^\n]", nomeCidade2);

printf("digite a população: ");
scanf("%d", &populacao2);

printf("digite a area: ");
scanf("%f", &area2);

printf("digite o pib: ");
scanf ("%f", &PIB2);

printf("digite o numero de pontos turisticos: ");
scanf("%d", &Turismo2);

// DADOS CARTA 2
printf("\n-- Exibindo CARTA 2 --\n");
printf("Estado: %c\n", Estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", PIB2);
printf("Numero de Pontos Turisticos: %d\n", Turismo2);

return 0;
}