#include <stdio.h>

int main() {

    // ---------------------------
    // Variáveis da Carta 1
    // ---------------------------
    char estado1[3];              // Sigla do estado (2 chars + '\0')
    char codigo1[5];              // Código da carta (até 4 chars + '\0')
    char cidade1[50];             // Nome da cidade (até 49 chars + '\0')
    unsigned long int populacao1; // População
    float area1;                  
    float pib1;                   
    int pontosTuristicos1;        
    float densidadePopulacional1; 
    float pibPerCapita1;          
    float superPoder1;            

    // ---------------------------
    // Variáveis da Carta 2
    // ---------------------------
    char estado2[3];
    char codigo2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // ---------------------------
    // Cadastro da primeira carta
    // ---------------------------
    printf("\n***Cadastro da primeira carta!***\n\n");

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

    // ---- Cálculos ----
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float inversoDensidade1 = 1.0 / densidadePopulacional1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + inversoDensidade1;

    // ---------------------------
    // Cadastro da segunda carta
    // ---------------------------
    printf("\n***Cadastro da segunda carta!***\n\n");

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

    // ---- Cálculos ----
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    float inversoDensidade2 = 1.0 / densidadePopulacional2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + inversoDensidade2;

    // ---------------------------
    // Menu de escolha
    // ---------------------------
    int opcao;
    printf("\nEscolha um atributo para comparar:\n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // ---------------------------
    // Comparação com switch
    // ---------------------------
    switch (opcao) {
        case 1: // População
            printf("\nComparação de cartas (Atributo: População):\n\n");
            printf("Carta 1 - %s (%s): %lu // ", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);

            if (populacao1 > populacao2)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2: // Área
            printf("\nComparação de cartas (Atributo: Área):\n\n");
            printf("Carta 1 - %s (%s): %.2f km² // ", cidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);

            if (area1 > area2)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (area2 > area1)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3: // PIB
            printf("\nComparação de cartas (Atributo: PIB):\n\n");
            printf("Carta 1 - %s (%s): %.2f bilhões // ", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f bilhões\n", cidade2, estado2, pib2);

            if (pib1 > pib2)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n\n");
            printf("Carta 1 - %s (%s): %d // ", cidade1, estado1, pontosTuristicos1);
            printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5: // Densidade Populacional (menor vence)
            printf("\nComparação de cartas (Atributo: Densidade Populacional):\n\n");
            printf("Carta 1 - %s (%s): %.2f hab/km² // ", cidade1, estado1, densidadePopulacional1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidadePopulacional2);

            if (densidadePopulacional1 < densidadePopulacional2)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (densidadePopulacional2 < densidadePopulacional1)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 6: // PIB per Capita
            printf("\nComparação de cartas (Atributo: PIB per Capita):\n\n");
            printf("Carta 1 - %s (%s): %.2f reais // ", cidade1, estado1, pibPerCapita1);
            printf("Carta 2 - %s (%s): %.2f reais\n", cidade2, estado2, pibPerCapita2);

            if (pibPerCapita1 > pibPerCapita2)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 7: // Super Poder
            printf("\nComparação de cartas (Atributo: Super Poder):\n\n");
            printf("Carta 1 - %s (%s): %.2f // ", cidade1, estado1, superPoder1);
            printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, superPoder2);

            if (superPoder1 > superPoder2)
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            else if (superPoder2 > superPoder1)
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        default: // opção inválida
            printf("\nOpção inválida! Escolha um número entre 1 e 7.\n");
    }

    return 0;
}
