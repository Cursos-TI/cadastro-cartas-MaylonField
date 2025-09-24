#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char carta[1];                           //carta
    char estado[14] = "Massachusetts";       //estado
    char codigo[10] = "A";                   //código da carta
    char cidade[15] = "Boston";              //O nome da cidade
    int  habitantes = 673458 ;               //O número de habitantes da cidade
    float largura = 2321000 ;                //A área da cidade em quilkometros quadrados
    float PIB = 363000000 ;                  //O produto Interno Bruto da cidade
    int pontosturisticos = 20;               //A quantidade de pontos Turísticos na cidade

    // As Cartas B terminaram com numero 1 no final para diferenciar os dados.
    char carta1[1];                          //carta
    char estado1[30] = "Tokyo";              //estado
    char codigo1[30] = "B" ;                 //código da carta 
    char cidade1[30] = "Tokyo";              //O nome da cidade
    int  habitantes1 = 14250000;             //O número de habitantes da cidade
    float largura1 = 218900;                 // A área da cidade em quilkometros quadrados
    float PIB1 = 113000000000;               // O produto Interno Bruto da cidade
    int pontosturisticos1 = 20;              // A quantidade de pontos Turísticos na cidade

  
       // Área para entrada de dados 
       printf("Seja muito bem vindo(a) ao SuperTrunfo\n");  // um breve convite e motivação para o jogador.
       printf("Um Jogo unico de cartas\n");
       printf("Preparado(a) para ser o grande vencedor(a)? \n");
       printf("Vamos começar!\n");
       
       // seleção e impressão da carta A
       printf("Digite a carta A: ");                                       // seleçao determinada de uma carta ( carta A)
       scanf("\n %c", carta);                                              // dado armazenado da carta A
       printf(" - Codigo: %s\n - Estado: %s\n", codigo, estado);           // selecão e impressão de Codigo e Estado.
       printf(" - Cidade: %s\n - Habitantes: %d\n", cidade, habitantes);   // selecão e impressão de Cidade e Habitantes.
       printf(" - Largura: %.2f km²\n - PIB: R$ %.2f\n", largura, PIB);    // selecão e impressão de Tamanho por quilometro da cidade e PIB.
       printf(" - Pontos Turísticos: %d\n", pontosturisticos);             // selecão e impressão de Pontos Turisticos.

      // seleção e impressão da carta B
       printf("\n Digite a carta B: ");                                    // seleçao determinada de uma carta ( carta B).
       scanf("\n %c", carta1);                                             // dado armazenado da carta B.
       printf(" - Codigo: %s\n - Estado: %s\n", codigo1, estado1);         // selecão e impressão de Codigo e Estado.
       printf(" - Cidade: %s\n - Habitantes: %d\n", cidade1, habitantes1); // selecão e impressão  de Cidade e Habitantes.
       printf(" - Largura: %.2f km²\n - PIB: R$%.2f\n", largura1, PIB1);   // selecão e impressão de Tamanho por quilometro e PIB.
       printf(" - Pontos Turísticos: %d\n", pontosturisticos1);            // selecão e impressão de Pontos Turísticos.



  return 0;

} 
