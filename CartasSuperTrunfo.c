#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: Nível Mestre

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

    //Dados de entrada da carta B, com final 2 para diferenciar os dados;

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

    int resultadoA, resultadoB, resultadoC, resultadoD, resultadoE, resultadoF, resultadoG;        // entrada de dado das variaveis resultados

  
       // Área para entrada de dados 

       printf("Seja muito bem-vindo(a) ao SuperTrunfo!\n");                //Um breve convite e motivação para o jogador.
       printf("Um Jogo unico de cartas!\n");
       printf("Preparado(a) para ser o(a) grande vencedor(a)? \n");
       printf("Vamos começar!!!\n");
       
       // seleção e impressão da carta A

       printf("\nDigite a carta A: ");                                                 // seleção determinada de uma carta ( carta A).
       scanf("\n %c", carta1);                                                         // dado armazenado da carta A.
       printf(" - Codigo: %s\n - Estado: %s\n", codigo1, estado1);                     // selecão e impressão de Codigo e Estado.
       printf(" - Cidade: %s\n - Habitantes: %d\n", cidade1, habitantes1);             // selecão e impressão de Cidade e Habitantes.
       printf(" - Área: %.2f km²\n - PIB: U$%.2f bilhões\n", Área1, PIB1);             // selecão e impressão de Área por quilometro da cidade e PIB.
       printf(" - Pontos Turísticos: %d\n", pontosturisticos1);                        // selecão e impressão de Pontos Turisticos.
       printf(" - Densidade populacional: %.2f hab/km²\n",densidadepopulacional1);     // seleção e impressão da densidade populacional por quilometro².
       printf(" - PIB per capita: U$%.2f dolares\n", pibpc1);                          // seleção e impressão do PIB per capita.
  
      // seleção e impressão da carta B

       printf("\n Digite a carta B: ");                                               // seleçao determinada de uma carta ( carta B).
       scanf("\n %c", carta2);                                                        // dado armazenado da carta B.
       printf(" - Codigo: %s\n - Estado: %s\n", codigo2, estado2);                    // selecão e impressão de Codigo e Estado.
       printf(" - Cidade: %s\n - Habitantes: %d\n", cidade2, habitantes2);            // selecão e impressão de Cidade e Habitantes.
       printf(" - Área: %.2f km²\n - PIB: U$%.2f trilhões\n", Área2, PIB2);           // selecão e impressão de Área por quilometro da cidade e PIB.
       printf(" - Pontos Turísticos: %d\n", pontosturisticos2);                       // selecão e impressão de Pontos Turísticos.
       printf(" - Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);   // seleção e impressão da densidade populacional por quilometro².
       printf(" - PIB per capita: U$%.2f dolares\n", pibpc2);                         // seleção e impressão do PIB per capita.

       resultadoA = habitantes1 > habitantes2;    // calculo diferencial de maior e menor, entre as cartas A e B.
       resultadoB = Área1 > Área2;
       resultadoC = PIB1 > PIB2;
       resultadoD = pontosturisticos1 > pontosturisticos2;
       resultadoE = densidadepopulacional1 > densidadepopulacional2;
       resultadoF = pibpc1 < pibpc2;
       resultadoG = superPoder1 > superPoder2;

        // impressão dos resultados das comparações entre as cartas A e B.

       printf("\nResultados das comparações:\n");                          // resultados com numero 1 é o vencedor.
       printf("Habitantes: Carta A venceu %d\n", resultadoA);            
       printf("Área: Carta A venceu %d\n", resultadoB);
       printf("PIB: Carta A venceu %d\n", resultadoC);
       printf("Pontos Turísticos: Carta A venceu %d\n", resultadoD);
       printf("Densidade populacional: Carta B venceu %d\n", resultadoE);
       printf("PIB per capita: Carta B venceu %d\n", resultadoF);
       printf("Super poder: Carta A venceu %d\n", resultadoG);



  





  return 0;

} 
