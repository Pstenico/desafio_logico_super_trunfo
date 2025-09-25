#include <stdio.h>

int main() {

    // ---------------------------
    // Variáveis da Carta 1
    // ---------------------------
    char estado1[3], codigo1[5], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // ---------------------------
    // Variáveis da Carta 2
    // ---------------------------
    char estado2[3], codigo2[5], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // ---------------------------
    // Cadastro da primeira carta
    // ---------------------------
    printf("\n*** Cadastro da primeira carta ***\n\n");
    printf("Estado (sigla, ex: SP): ");
    scanf("%2s", estado1);
    printf("Código da carta: ");
    scanf("%4s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // ---------------------------
    // Cadastro da segunda carta
    // ---------------------------
    printf("\n*** Cadastro da segunda carta ***\n\n");
    printf("Estado (sigla, ex: SP): ");
    scanf("%2s", estado2);
    printf("Código da carta: ");
    scanf("%4s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // ---------------------------
    // Escolha dos atributos
    // ---------------------------
    int opcao1, opcao2;
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;

    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\n7 - Super Poder\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    // Primeiro switch
    switch (opcao1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontosTuristicos1; valor1_c2 = pontosTuristicos2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
        case 6: valor1_c1 = pibPerCapita1; valor1_c2 = pibPerCapita2; break;
        case 7: valor1_c1 = superPoder1; valor1_c2 = superPoder2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    printf("\nEscolha o SEGUNDO atributo para comparar (diferente do primeiro):\n");
    for (int i = 1; i <= 7; i++) {
        if (i != opcao1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Populacional\n"); break;
                case 6: printf("6 - PIB per Capita\n"); break;
                case 7: printf("7 - Super Poder\n"); break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1) {
        printf("\nErro: não pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    // Segundo switch
    switch (opcao2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontosTuristicos1; valor2_c2 = pontosTuristicos2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
        case 6: valor2_c1 = pibPerCapita1; valor2_c2 = pibPerCapita2; break;
        case 7: valor2_c1 = superPoder1; valor2_c2 = superPoder2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // ---------------------------
    // Comparação e soma
    // ---------------------------
    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    printf("Carta 1 - %s (%s)\n", cidade1, estado1);
    printf("Carta 2 - %s (%s)\n\n", cidade2, estado2);

    // Comparação do atributo 1
    if (opcao1 == 5) { // Densidade
        printf("Atributo 1 (Densidade): %.2f x %.2f\n", valor1_c1, valor1_c2);
        (valor1_c1 < valor1_c2) ? printf("Vencedor: %s\n\n", cidade1) :
        (valor1_c2 < valor1_c1) ? printf("Vencedor: %s\n\n", cidade2) :
                                  printf("Empate!\n\n");
    } else {
        printf("Atributo 1: %.2f x %.2f\n", valor1_c1, valor1_c2);
        (valor1_c1 > valor1_c2) ? printf("Vencedor: %s\n\n", cidade1) :
        (valor1_c2 > valor1_c1) ? printf("Vencedor: %s\n\n", cidade2) :
                                  printf("Empate!\n\n");
    }

    // Comparação do atributo 2
    if (opcao2 == 5) { // Densidade
        printf("Atributo 2 (Densidade): %.2f x %.2f\n", valor2_c1, valor2_c2);
        (valor2_c1 < valor2_c2) ? printf("Vencedor: %s\n\n", cidade1) :
        (valor2_c2 < valor2_c1) ? printf("Vencedor: %s\n\n", cidade2) :
                                  printf("Empate!\n\n");
    } else {
        printf("Atributo 2: %.2f x %.2f\n", valor2_c1, valor2_c2);
        (valor2_c1 > valor2_c2) ? printf("Vencedor: %s\n\n", cidade1) :
        (valor2_c2 > valor2_c1) ? printf("Vencedor: %s\n\n", cidade2) :
                                  printf("Empate!\n\n");
    }

    // Soma final
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    if (soma1 > soma2)
        printf("=== Resultado Final: %s venceu! ===\n", cidade1);
    else if (soma2 > soma1)
        printf("=== Resultado Final: %s venceu! ===\n", cidade2);
    else
        printf("=== Resultado Final: Empate! ===\n");

    return 0;
}
