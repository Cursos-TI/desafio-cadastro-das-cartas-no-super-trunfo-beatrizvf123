#include <stdio.h>

int main() {
    // ==== Dados da Carta 1 ====
    char nome1[50] = "Natal";
    unsigned long int populacao1 = 890480;
    float area1 = 167.264; // km²
    float pib1 = 24.3;     // em bilhões
    int pontos1 = 25;
    float densidade1 = populacao1 / area1;

    // ==== Dados da Carta 2 ====
    char nome2[50] = "Manaus";
    unsigned long int populacao2 = 2219580;
    float area2 = 11401.0; // km²
    float pib2 = 97.0;     // em bilhões
    int pontos2 = 40;
    float densidade2 = populacao2 / area2;

    int atributo1 = 0, atributo2 = 0;

    // Menu para escolher o primeiro atributo
    printf("=== ESCOLHA DO PRIMEIRO ATRIBUTO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    // Menu para escolher o segundo atributo (diferente do primeiro)
    do {
        printf("\n=== ESCOLHA DO SEGUNDO ATRIBUTO ===\n");
        for (int i = 1; i <= 5; i++) {
            if (i != atributo1) {
                switch(i) {
                    case 1: printf("1 - População\n"); break;
                    case 2: printf("2 - Área\n"); break;
                    case 3: printf("3 - PIB\n"); break;
                    case 4: printf("4 - Pontos Turísticos\n"); break;
                    case 5: printf("5 - Densidade Demográfica\n"); break;
                }
            }
        }
        printf("Opção: ");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 5)
            printf("Opção inválida! Escolha um atributo diferente do primeiro.\n");
    } while (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 5);

    // Variáveis para armazenar os valores escolhidos
    float valor1A, valor1B, valor2A, valor2B;

    // Obter os valores do primeiro atributo
    switch(atributo1) {
        case 1: valor1A = populacao1; valor2A = populacao2; break;
        case 2: valor1A = area1; valor2A = area2; break;
        case 3: valor1A = pib1; valor2A = pib2; break;
        case 4: valor1A = pontos1; valor2A = pontos2; break;
        case 5: valor1A = densidade1; valor2A = densidade2; break;
    }

    // Obter os valores do segundo atributo
    switch(atributo2) {
        case 1: valor1B = populacao1; valor2B = populacao2; break;
        case 2: valor1B = area1; valor2B = area2; break;
        case 3: valor1B = pib1; valor2B = pib2; break;
        case 4: valor1B = pontos1; valor2B = pontos2; break;
        case 5: valor1B = densidade1; valor2B = densidade2; break;
    }

    // Comparação individual de atributos usando ternário
    int ponto1A = (atributo1 == 5) ? (valor1A < valor2A) : (valor1A > valor2A);
    int ponto2A = !ponto1A;

    int ponto1B = (atributo2 == 5) ? (valor1B < valor2B) : (valor1B > valor2B);
    int ponto2B = !ponto1B;

    // Soma dos "pontos" (1 para vencer, 0 para perder) ou valores reais
    float soma1 = valor1A + valor1B;
    float soma2 = valor2A + valor2B;

    // Exibição detalhada
    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");
    printf("%s: %.2f e %.2f\n", nome1, valor1A, valor1B);
    printf("%s: %.2f e %.2f\n", nome2, valor2A, valor2B);
    printf("Soma dos atributos: %s = %.2f, %s = %.2f\n", nome1, soma1, nome2, soma2);

    // Determinar vencedor
    if (soma1 > soma2)
        printf("\n%s venceu!\n", nome1);
    else if (soma2 > soma1)
        printf("\n%s venceu!\n", nome2);
    else
        printf("\nEmpate!\n");

    printf("\n===============================\n");

    return 0;
}
