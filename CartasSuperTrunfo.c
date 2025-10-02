#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  
  // Área para definição das variáveis para armazenar as propriedades das cidades.

    char carta[1];                           //carta.
    char estado[14] = "Massachusetts";       //estado.
    char codigo[10] = "A01";                 //código da carta.
    char cidade[15] = "Boston";              //O nome da cidade.
    int  habitantes = 673458;               //O número de habitantes da cidade.
    float Área = 2321000;                    //A área da cidade em quilometros quadrados.
    float PIB = 363000000.00;                   //O produto Interno Bruto da cidade.
    int pontosturisticos = 20;               //A quantidade de pontos Turísticos na cidade.
    float densidadepopulacional = (float) habitantes / Área;
    float pibpc = (float) PIB / habitantes;

    // As Cartas B terminaram com numero 1 no final para diferenciar os dados.

    char carta1[1];                          //carta.
    char estado1[30] = "Tokyo";              //estado.
    char codigo1[30] = "B01" ;               //código da carta.
    char cidade1[30] = "Tokyo";              //O nome da cidade.
    int  habitantes1 = 14250000;             //O número de habitantes da cidade.
    float Área1 = 218900;                    // A área da cidade em quilometros quadrados.
    float PIB1 = 1400000000.00;               // O produto Interno Bruto da cidade.
    int pontosturisticos1 = 20;              // A quantidade de pontos Turísticos na cidade.
    float densidadepopulacional1 = (float) habitantes1 / Área1;
    float pibpc1 = (float) PIB1 / habitantes1;
                 

  
       // Área para entrada de dados 

       printf("Seja muito bem-vindo(a) ao SuperTrunfo!\n");                // um breve convite e motivação para o jogador.
       printf("Um Jogo unico de cartas\n");
       printf("Preparado(a) para ser o(a) grande vencedor(a)? \n");
       printf("Vamos começar!\n");
       
       // seleção e impressão da carta A
       printf("\nDigite a carta A: ");                                       // seleçao determinada de uma carta ( carta A).
       scanf("\n %c", carta);                                              // dado armazenado da carta A.
       printf(" - Codigo: %s\n - Estado: %s\n", codigo, estado);           // selecão e impressão de Codigo e Estado.
       printf(" - Cidade: %s\n - Habitantes: %d\n", cidade, habitantes);   // selecão e impressão de Cidade e Habitantes.
       printf(" - Área: %.2f km²\n - PIB: U$%.2f bilhões\n", Área, PIB);          // selecão e impressão de Área por quilometro da cidade e PIB.
       printf(" - Pontos Turísticos: %d\n", pontosturisticos);             // selecão e impressão de Pontos Turisticos.
       printf(" - Densidade populacional: %.2f km²\n",densidadepopulacional);
       printf(" - PIB per capita:R$%.2f\n", pibpc);
  
      // seleção e impressão da carta B
       printf("\n Digite a carta B: ");                                    // seleçao determinada de uma carta ( carta B).
       scanf("\n %c", carta1);                                             // dado armazenado da carta B.
       printf(" - Codigo: %s\n - Estado: %s\n", codigo1, estado1);         // selecão e impressão de Codigo e Estado.
       printf(" - Cidade: %s\n - Habitantes: %d\n", cidade1, habitantes1); // selecão e impressão de Cidade e Habitantes.
       printf(" - Área: %.2f km²\n - PIB: U$%.2f trilhões\n", Área1, PIB1);         // selecão e impressão de Área por quilometro da cidade e PIB.
       printf(" - Pontos Turísticos: %d\n", pontosturisticos1);            // selecão e impressão de Pontos Turísticos.
       printf(" - Densidade populacional: %2f km²\n", densidadepopulacional1);
       printf(" - PIB per capita: U$%.2f trilhões\n", pibpc1);
    
       


  return 0;

} 
