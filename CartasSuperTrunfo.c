#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado[14] = "Massachusetts";       //estado
    char carta[3] = "A";                     //código da carta
    char cidade[15] = "Boston";              //O nome da cidade
    int  habitantes;                         //O número de habitantes da cidade
    float largura;                           //A área da cidade em quilkometros quadrados
    float produtobruto;                      // O produto Interno Bruto da cidade
    int pontosturisticos;                    // A quantidade de pontos Turísticos na cidade

    // As Cartas B terminaram com numero 1 no final para diferenciar os dados.

    char estado1[10] = "Tokyo";             //estado
    char codigo1[4] = "B";                  //código da carta 
    char cidade1[10] = "Shibuya";           //O nome da cidade
    int  habitantes1;                       //O número de habitantes da cidade
    float largura1;                         // A área da cidade em quilkometros quadrados
    float produtobruto1;                    // O produto Interno Bruto da cidade
    int pontosturisticos1;                  // A quantidade de pontos Turísticos na cidade

  
  // Área para entrada de dados
       printf("Seja bem Vindo ao SuperTrunfo\n");
       printf("Escolha uma das seguintes cartas: carta A ou B\n");
       
       printf("Digite a carta: ");
       scanf("%c", &carta);
       scanf("%c", &codigo1);
       printf("Estado: %s\n Cidade: %s\n", estado, cidade);
       printf("Estado: %s\n Cidade: %s\n", estado1, cidade1);
return 0;
} 
