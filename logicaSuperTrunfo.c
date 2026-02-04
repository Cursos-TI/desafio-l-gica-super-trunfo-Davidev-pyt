#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
     //Desafio Nível Novato
    
    //variaveis da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int pontosturistico1;
    float area1, pib1, densidade1, pibpercapita1; 
    unsigned long int populacao1;
    float superpoder1;

    //Variaveis da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int pontosturistico2;
    float area2, pib2, densidade2, pibpercapita2; 
    unsigned long int populacao2;
    float superpoder2;


      printf("--- Carta 1: --- \n");
    printf("Estado (A-H)");
    scanf(" %c", &estado1); //Espaço antes do c para limpar o teclado
    printf("Codigo da carta ex(A01-B03): ");
    scanf("%s", &codigo1);
    printf("Nome da cidade: ");
    scanf("%s",&cidade1);    
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Àrea: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos Túristicos: ");
    scanf("%d", &pontosturistico1);

    //--- Cálculo da densidade demografica
    densidade1 = (float)populacao1 / area1;
    //Se o pib for adicionado em bilhões multiplicar por 1000000000
    pibpercapita1 =  (pib1 * 1000000000) / (float) populacao1;

    //Cadastro da carta 2

    printf("--- Carta 2: --- \n");
    printf("Estado (A-H)");
    scanf(" %c", &estado2); //Espaço antes do c para limpar o teclado
    printf("Codigo da carta ex(A01-B03): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s",cidade2);    // %[^\n le as strings com espaços
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Àrea: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos Túristicos: ");
    scanf("%d", &pontosturistico2);

     //Calculo da densidade demografica da carta 2
    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / (float) populacao2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB,

    // Exibição dos Resultados:
    printf("Comparação de Cartas (Atributo: Àrea)\n");
    printf("O Resultado é: \n");
     if (area1 > area2) {
        printf("A Carta 1 Venceu!!! \n");
    }else {
        printf("A Carta 2 Venceu!!! \n ");
    }

    return 0;
}
