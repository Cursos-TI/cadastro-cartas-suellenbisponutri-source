#include <stdio.h>

int main() {

    // =====================================================================
    // ====================== DECLARAÇÃO CARTA 1 ============================
    // =====================================================================
    char estado1;
    char codigo1[10];
    char nomeCidade1[50];
    unsigned long int populacao1; 
    float area1, pib1;
    int pontosTuristicos1;

    float densidade1, pibPerCapita1;
    float superPoder1;

    // =====================================================================
    // ====================== DECLARAÇÃO CARTA 2 ============================
    // =====================================================================
    char estado2;
    char codigo2[10];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    float densidade2, pibPerCapita2;
    float superPoder2;

    // =====================================================================
    // ============================ CARTA 1 =================================
    // =====================================================================
    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%s", nomeCidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ==== Cálculos da Carta 1 ====
    densidade1 = (float)populacao1 / area1;

    // PIB per capita REAL (PIB em bilhões → reais)
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;

    superPoder1 = (float)populacao1 + area1 + pib1 +
                  (float)pontosTuristicos1 + pibPerCapita1 +
                  (1.0f / densidade1);

    // =====================================================================
    // ============================ CARTA 2 =================================
    // =====================================================================
    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%s", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ==== Cálculos da Carta 2 ====
    densidade2 = (float)populacao2 / area2;

    // PIB per capita REAL
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    superPoder2 = (float)populacao2 + area2 + pib2 +
                  (float)pontosTuristicos2 + pibPerCapita2 +
                  (1.0f / densidade2);

    // =====================================================================
    // ======================= EXIBIÇÃO DAS CARTAS ==========================
    // =====================================================================

    printf("\n=== DADOS DA CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n=== DADOS DA CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // =====================================================================
    // ========================== COMPARAÇÕES ===============================
    // =====================================================================

    // 1 = verdadeiro  → Carta 1 vence
    // 0 = falso       → Carta 2 vence

    int cPopulacao      = (populacao1 > populacao2);
    int cArea           = (area1 > area2);
    int cPib            = (pib1 > pib2);
    int cPontos         = (pontosTuristicos1 > pontosTuristicos2);
    int cPerCapita      = (pibPerCapita1 > pibPerCapita2);
    int cSuperPoder     = (superPoder1 > superPoder2);

    // Densidade: MENOR vence → por isso usa "<"
    int cDensidade      = (densidade1 < densidade2);

    // =====================================================================
    // ===================== RESULTADOS DAS COMPARAÇÕES ====================
    // =====================================================================

    printf("\n=== RESULTADOS DAS COMPARACOES ===\n");
    printf("(1 = Carta 1 vence | 0 = Carta 2 vence)\n\n");

    printf("Populacao: %d\n", cPopulacao);
    printf("Area: %d\n", cArea);
    printf("PIB: %d\n", cPib);
    printf("Pontos Turisticos: %d\n", cPontos);
    printf("PIB per Capita: %d\n", cPerCapita);
    printf("Super Poder: %d\n", cSuperPoder);
    printf("Densidade Populacional: %d\n", cDensidade);

    return 0;
}
