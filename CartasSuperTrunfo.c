#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: logica do jogo Nível novato

int main() {

  
  // Área para definição das variáveis para armazenar as propriedades das cidades.

    //Dados de entrada da carta A

    char carta1[1];                                                       //cartaA.
    char estado1[30] = "Tokyo";                                           //estadoA.
    char codigo1[30] = "A01" ;                                            //código da cartaA.
    char cidade1[30] = "Tokyo";                                           //O nome da cidadeA.
    int  habitantes1 = 14250000;                                          //O número de habitantes da cidadeA.
    float Área1 = 627000;                                                 //A área da cidade em quilometros quadrados.
    float PIB1 = 1400000000.00;                                           //O produto Interno Bruto da cidade.
    int pontosturisticos1 = 40;                                           //A quantidade de pontos Turísticos na cidade.
    float densidadepopulacional1 = (float) habitantes1 / Área1;           //Dado de entrada da densidade populacional,habitantes dividido por Área.
    float pibpc1 = (float) PIB1 / habitantes1;                            //Dado de entrada do PIB per capita, PIB dividido por habitates.
    float densidadepopulacionalInvertida1 = 1 / densidadepopulacional1;   //Dado de entrada da densidade populacional invertida, 1 dividido pela densidade populacional.
    float superPoder1 = (float) habitantes1 + Área1 + PIB1 + densidadepopulacionalInvertida1 + pontosturisticos1 + pibpc1; //Dado de entrada do super poder, soma de todos os atributos da carta A.

    //Dados de entrada da carta B com final 2 para diferenciar;

    char carta2[1];                                                         //cartaB.
    char estado2[14] = "Massachusetts";                                     //estadoB.
    char codigo2[10] = "B01";                                               //código da cartaB.
    char cidade2[15] = "Boston";                                            //O nome da cidadeB.
    int  habitantes2 = 673458;                                              //O número de habitantes da cidadeB.
    float Área2 = 232140;                                                   //A área da cidadeB em quilometros quadrados.
    float PIB2 = 363000000.00;                                              //O produto Interno Bruto da cidade.
    int pontosturisticos2 = 20;                                             //A quantidade de pontos Turísticos na cidade.
    float densidadepopulacional2 = (float) habitantes2 / Área2;             //Dado de entrada da densidade populacional,habitantes dividido por Área.
    float pibpc2 = (float) PIB2 / habitantes2;                              //Dado de entrada do PIB per capita, PIB dividido por habitates.
    float densidadepopulacionalInvertida2 = 1 / densidadepopulacional2;     //Dado de entrada da densidade populacional invertida, 1 dividido pela densidade populacional.
    float superPoder2 = (float) habitantes2 + Área2 + PIB2 + densidadepopulacionalInvertida2 + pontosturisticos2 + pibpc2; //Dado de entrada do super poder, soma de todos os atributos da carta B.

    int resultadoA, resultadoB, resultadoC, resultadoD, resultadoE, resultadoF, resultadoG;        //resultados das comparações entre as cartas A e B. 

  
       // Área para entrada de dados 

       printf("Seja muito bem-vindo(a) ao SuperTrunfo!\n");                //Um breve convite e motivação para o jogador.
       printf("Um Jogo unico de cartas!\n");
       printf("Preparado(a) para ser o(a) grande vencedor(a)? \n");
       printf("Vamos começar!\n");
       
       // seleção e impressão da carta A

       printf("\nDigite a carta A: ");                                                 // seleçao determinada de uma carta ( carta A).
       scanf("\n %c", carta1);                                                         // dado armazenado da carta A.
       printf(" - Codigo: %s\n - Estado: %s\n", codigo1, estado1);                     // selecão e impressão de Codigo e Estado.
       printf(" - Cidade: %s\n - Habitantes: %d\n", cidade1, habitantes1);             // selecão e impressão de Cidade e Habitantes.
       printf(" - Área: %.2f km²\n - PIB: U$%.2f bilhões\n", Área1, PIB1);             // selecão e impressão de Área por quilometro da cidade e PIB.
       printf(" - Pontos Turísticos: %d\n", pontosturisticos1);                        // selecão e impressão de Pontos Turisticos.
       printf(" - Densidade populacional: %.2f hab/km²\n",densidadepopulacional1);     // seleção e impressão da densidade populacional por quilometro².
       printf(" - PIB per capita: U$%.2f dolares\n", pibpc1);                          // seleção e impressão do PIB per capita.
       printf(" - Densidade Invertida: %.2f hab/km²\n", densidadepopulacionalInvertida1); //seleção e impressão da densidade populacional invertida.
       printf(" - Super Poder: %.2f\n", superPoder1);                                      // seleção e impressão do super poder
  
      // seleção e impressão da carta B

       printf("\n Digite a carta B: ");                                               // seleçao determinada de uma carta ( carta B).
       scanf("\n %c", carta2);                                                        // dado armazenado da carta B.
       printf(" - Codigo: %s\n - Estado: %s\n", codigo2, estado2);                    // selecão e impressão de Codigo e Estado.
       printf(" - Cidade: %s\n - Habitantes: %d\n", cidade2, habitantes2);            // selecão e impressão de Cidade e Habitantes.
       printf(" - Área: %.2f km²\n - PIB: U$%.2f trilhões\n", Área2, PIB2);           // selecão e impressão de Área por quilometro da cidade e PIB.
       printf(" - Pontos Turísticos: %d\n", pontosturisticos2);                       // selecão e impressão de Pontos Turísticos.
       printf(" - Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);   // seleção e impressão da densidade populacional por quilometro².
       printf(" - PIB per capita: U$%.2f dolares\n", pibpc2);                         // seleção e impressão do PIB per capita.
       printf(" - Densidade Invertida: %.2f hab/km²\n", densidadepopulacionalInvertida2); // seleção e impresão da densidade populacional invertida.
       printf(" - Super Poder: %.2f\n", superPoder2);                                     //seleção e impressão do superpoder.

      

       if( habitantes1 > habitantes2){             //comparação de valores dos habitantes, se é maior ou menor.
         printf("\n - Carta A venceu!\n");
       } else {
         printf(" - Carta B vendeu!\n");
       }

       if( Área1 > Área2){                        //comparação da Área, se é maior ou menor.
         printf(" - Carta A venceu!\n");
       } else {
         printf(" - Carta B vendeu!\n");
       }

       if( pontosturisticos1 > pontosturisticos2){  //comparação de pontos Turisticos
         printf(" - Carta A venceu!\n");
       } else {
         printf(" - Carta B vendeu!\n");
       }
       
       if( PIB1 > PIB2){                            //comparação de pib
         printf(" - Carta A venceu!\n");
       } else {
         printf(" - Carta B vendeu!\n");
       }

       if( densidadepopulacional1 < densidadepopulacional2){   //comparação de densidade populacional
         printf(" - Carta A venceu!\n");
       } else {
         printf(" - Carta B vendeu!\n");
       }

       if( pibpc1 > pibpc2){                                    //comparação de pib per capita
         printf(" - Carta A venceu!\n");     
       } else {
         printf(" - Carta B vendeu!\n");
       }

       if( superPoder1 > superPoder2){                          // comparação dos super poderes
         printf(" - Carta A venceu!\n");
       } else {
         printf(" - Carta B vendeu!\n");
       }
       
       
       
       
       
       
       return 0;
}