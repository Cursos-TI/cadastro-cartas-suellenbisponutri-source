#include <stdio.h>

int main() {
    // ==== Declaração das variáveis da Carta 1 ====
    char estado1;
    char codigo1[10];
    char nomeCidade1[50];
    unsigned long int populacao1; // Tipo para grandes números inteiros
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;
    float superPoder1; 

    // ==== Declaração das variáveis da Carta 2 ====
    char estado2;
    char codigo2[10];
    char nomeCidade2[50];
    unsigned long int populacao2; // Tipo para grandes números inteiros
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;
    float superPoder2; 

    // ======== CARTA 1 - ENTRADA DE DADOS ========
    printf("=== CADASTRO DA CARTA 1 ===\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%s", nomeCidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1); // Uso de %lu para unsigned long int

    printf("Digite a area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ==== Cálculos da Carta 1 ====
    // Garantindo que a populacao seja tratada como float na divisao
    densidade1 = (float)populacao1 / area1; 
    pibPerCapita1 = pib1 / (float)populacao1;

    // Cálculo do Super Poder: Soma de atributos + Inverso da Densidade
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // ======== CARTA 2 - ENTRADA DE DADOS ========
    printf("\n=== CADASTRO DA CARTA 2 ===\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%s", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2); // Uso de %lu para unsigned long int

    printf("Digite a area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ==== Cálculos da Carta 2 ====
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;

    // Cálculo do Super Poder
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // --- EXIBIÇÃO DOS DADOS ---
    printf("\n=== DADOS DA CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.6f bilhoes por habitante\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n=== DADOS DA CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.6f bilhoes por habitante\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // --- RESULTADOS DAS COMPARAÇÕES ---
    printf("\n=== RESULTADOS DAS COMPARAÇÕES (1: CARTA 1 VENCE, 0: CARTA 2 VENCE) ===\n");

    // Lógica: Maior valor vence (1 se C1 > C2)
    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2); 

    // Lógica Inversa: Menor valor vence (1 se C1 < C2)
    printf("Densidade Populacional: %d\n", densidade1 < densidade2); 

    return 0;
}