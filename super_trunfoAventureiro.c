#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
     //Desafio Nível Aventureiro
    
    //variaveis da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int pontosturistico1, opcao1;
    float area1, pib1, densidade1, pibpercapita1; 
    unsigned long int populacao1;
    float superpoder1;

    //Variaveis da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int pontosturistico2, opcao2;
    float area2, pib2, densidade2, pibpercapita2; 
    unsigned long int populacao2;
    float superpoder2;


      printf("--- Carta 1: --- \n");
    printf("Estado (A-H)");
    scanf(" %c", &estado1); //Espaço antes do c para limpar o teclado
    printf("Codigo da carta ex(A01-B03): ");
    scanf("%s", &codigo1);
    printf("Nome do País: ");
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
    printf("Nome do País: ");
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
    printf("Escolha a opção de comparação (1-População, 2-Área, 3-PIB, 4-Densidade Demografica, 5-PIB per capita, 6-Pontos Turisticos)\n");
    scanf("%d", &opcao1);
    switch (opcao1)
    {
    case 1:
        if(populacao1 > populacao2){
            printf("Carta 1 vence com população de %lu contra %lu da carta 2\n", populacao1, populacao2);
        }else if (populacao2 > populacao1){
             printf("Carta 2 vence com população de %lu contra %lu da carta 1\n", populacao2, populacao1);
        }else{
            printf("Empate! Amabas as cartas possuem população de %lu\n", populacao1);
        }break;
        case 2:
        if(area1 > area2){
            printf("Carta 1 vence com Área de %.2f contra %.2f da carta 2\n",area1, area2);
        }else if (area2 > area1){
             printf("Carta 2 vence com Área de %.2f contra %.2f da carta 1\n",area2, area1);
        }else{
            printf("Empate! Amabas as cartas possuem área de %.2f\n", area1);
        }break;
        case 3:
        if(pib1 > pib2){
            printf("Carta 1 vence com PIB de %.2f contra %.2f da carta 2\n",pib1, pib2);
        }else if (pib2 > pib1){
             printf("Carta 2 vence com PIB de %.2f contra %.2f da carta 1\n",pib2, pib1);
        }else{
            printf("Empate! Amabas as cartas possuem PIB de %.2f\n", pib1);
        }break;
        case 4:
        if (densidade1 > densidade2){
            printf("Carta 2 vence com Densidade Demografica de %.2f contra %,2f da carta 1\n", densidade2, densidade1);
        }else if (densidade2 > densidade1){
             printf("Carta 1 vence com Densidade Demografica de %.2f contra %.2f da carta 2\n", densidade1, densidade2);
        }else{
            printf("Empate! Ambas as cartas possuem Densidade Demografica de %.2f\n",densidade1);
        }break;
        case 5:
        if (pibpercapita1 > pibpercapita2){
        printf("Carta 1 vence com PIB per capita de %.2f contra %.2f da carta 2\n", pibpercapita1, pibpercapita2);
        }else if (pibpercapita2 > pibpercapita1){
        printf("Carta 2 vence com PIB per capita de %.2f contra %.2f da carta 1\n", pibpercapita2, pibpercapita1);
        }else{
        printf("Empate! Ambas as cartas possuem PIB per capita de %.2f\n", pibpercapita1);
        }break;
        case 6:
        if(pontosturistico1 > pontosturistico2){
            printf("Carta 1 vence com %d pontos turísticos contra %d da carta 2\n", pontosturistico1, pontosturistico2);
        }else if(pontosturistico2 > pontosturistico1){
            printf("Carta 2 vence com %d pontos turísticos contra %d da carta 1\n", pontosturistico2, pontosturistico1);
        }else{
            printf("Empate! Ambas as cartas possuem %d pontos turísticos\n", pontosturistico1);
        }
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}
