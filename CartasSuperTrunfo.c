#include <stdio.h>

int main() {
    // Carta 1
    char estado1[2] = "A";
    char codigo1[4] = "A01";
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pib_per_capita1, super_poder1;

    // Carta 2
    char estado2[2] = "B";
    char codigo2[4] = "B01";
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pib_per_capita2, super_poder2;

    // Entrada - Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a area (km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cálculos - Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1.0f / densidade1);

    // Exibir Carta 1
    printf("\n\n=== Super Trunfo - Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Entrada - Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a area (km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos - Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1.0f / densidade2);

    // Exibir Carta 2
    printf("\n\n=== Super Trunfo - Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações
    int v_populacao = (populacao1 > populacao2);
    int v_area = (area1 > area2);
    int v_pib = (pib1 > pib2);
    int v_pontos = (pontos1 > pontos2);
    int v_pibpc = (pib_per_capita1 > pib_per_capita2);
    int v_densidade = (densidade1 < densidade2); // Menor densidade vence
    int v_super_poder = (super_poder1 > super_poder2);

    // Resultado da comparação
    printf("\n\n===== RESULTADO DA COMPARAÇÃO =====\n");
    printf("População: Carta %d venceu (%d)\n", v_populacao ? 1 : 2, v_populacao);
    printf("Área: Carta %d venceu (%d)\n", v_area ? 1 : 2, v_area);
    printf("PIB: Carta %d venceu (%d)\n", v_pib ? 1 : 2, v_pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", v_pontos ? 1 : 2, v_pontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", v_densidade ? 1 : 2, v_densidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", v_pibpc ? 1 : 2, v_pibpc);
    printf("Super Poder: Carta %d venceu (%d)\n", v_super_poder ? 1 : 2, v_super_poder);

    return 0;
}
