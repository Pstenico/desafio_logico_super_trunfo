#include <stdio.h>

int main() {

    // ---------------------------
    // Variáveis da Carta 1
    // ---------------------------
    char estado1[3];              // Sigla do estado (2 chars + '\0')
    char codigo1[5];              // Código da carta (até 4 chars + '\0')
    char cidade1[50];             // Nome da cidade (até 49 chars + '\0')
    unsigned long int populacao1; // População (unsigned long suporta números grandes)
    float area1;                   // Área em km²
    float pib1;                    // PIB em bilhões
    int pontosTuristicos1;         // Número de pontos turísticos
    float densidadePopulacional1;  // População / Área
    float pibPerCapita1;           // PIB em reais / População
    float superPoder1;             // Soma de todos atributos (com inverso da densidade)

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
    // Mensagem inicial
    // ---------------------------
    printf("\nCadastre as primeiras 2 cartas para o Jogo.\n"); 
    printf("Use a sigla do Estado (ex: SP, RJ, MG) e códigos Ex: A01 OU A001!\n");
    printf("---------------------------------------------------\n");

    // ---------------------------
    // Entrada de dados da primeira carta
    // ---------------------------
    printf("\n***Cadastro da primeira carta!***\n\n");

    printf("Estado (sigla, ex: SP):\n");
    scanf("%2s", estado1); // lê até 2 caracteres

    printf("Código da carta:\n");
    scanf("%4s", codigo1); // lê até 4 caracteres

    printf("Nome da cidade:\n");
    scanf(" %[^\n]", cidade1); // lê string com espaços

    printf("População:\n");
    scanf("%lu", &populacao1); // lê unsigned long int

    printf("Área (km²):\n");
    scanf("%f", &area1); // lê float

    printf("PIB (em bilhões):\n");
    scanf("%f", &pib1); // lê float

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos1); // lê int

    // ---- Cálculos ----
    densidadePopulacional1 = populacao1 / area1;                         // calcula densidade
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;                    // PIB convertido em reais dividido pela população
    float inversoDensidade1 = 1.0 / densidadePopulacional1;              // inverso da densidade
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 
                + pibPerCapita1 + inversoDensidade1;                     // soma atributos

    // ---------------------------
    // Entrada de dados da segunda carta
    // ---------------------------
    printf("\n***Cadastro da segunda carta!***\n\n");

    printf("Estado (sigla, ex: SP):\n");
    scanf("%2s", estado2);

    printf("Código da carta:\n");
    scanf("%4s", codigo2);

    printf("Nome da Cidade:\n");
    scanf(" %[^\n]", cidade2);

    printf("População:\n");
    scanf("%lu", &populacao2);

    printf("Área (km²):\n");
    scanf("%f", &area2);

    printf("PIB (em bilhões):\n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // ---- Cálculos ----
    densidadePopulacional2 = populacao2 / area2;                         // calcula densidade
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;                    // PIB convertido em reais dividido pela população
    float inversoDensidade2 = 1.0 / densidadePopulacional2;              // inverso da densidade
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 
                + pibPerCapita2 + inversoDensidade2;                     // soma atributos

    // ---------------------------
    // Escolha do atributo desejado
    // ---------------------------
    int opcao;
    printf("\nEscolha um atributo para comparar:\n\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Opcao: ");
    scanf("%d", &opcao); // jogador escolhe atributo

    // ---------------------------
    // Comparações das cartas
    // ---------------------------
    if (opcao == 1) { // População
        printf("\nComparação de cartas (Atributo: População):\n\n");
        printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);

        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (populacao2 > populacao1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");
    } 
    else if (opcao == 2) { // Área
        printf("\nComparação de cartas (Atributo: Área):\n\n");
        printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);

        if (area1 > area2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (area2 > area1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");
    } 
    else if (opcao == 3) { // PIB
        printf("\nComparação de cartas (Atributo: PIB):\n\n");
        printf("Carta 1 - %s (%s): %.2f bilhões\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f bilhões\n", cidade2, estado2, pib2);

        if (pib1 > pib2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (pib2 > pib1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");
    }
    else if (opcao == 4) { // Pontos turísticos
        printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n\n");
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pontosTuristicos1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pontosTuristicos2);

        if (pontosTuristicos1 > pontosTuristicos2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (pontosTuristicos2 > pontosTuristicos1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");
    }
    else if (opcao == 5) { // Densidade Populacional (menor vence)
        printf("\nComparação de cartas (Atributo: Densidade Populacional):\n\n");
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidadePopulacional1);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidadePopulacional2);

        if (densidadePopulacional1 < densidadePopulacional2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (densidadePopulacional2 < densidadePopulacional1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");
    }
    else if (opcao == 6) { // PIB per capita
        printf("\nComparação de cartas (Atributo: PIB per Capita):\n\n");
        printf("Carta 1 - %s (%s): %.2f reais\n", cidade1, estado1, pibPerCapita1);
        printf("Carta 2 - %s (%s): %.2f reais\n", cidade2, estado2, pibPerCapita2);

        if (pibPerCapita1 > pibPerCapita2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (pibPerCapita2 > pibPerCapita1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");
    }
    else if (opcao == 7) { // Super poder
        printf("\nComparação de cartas (Atributo: Super Poder):\n\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, superPoder1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, superPoder2);

        if (superPoder1 > superPoder2)
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        else if (superPoder2 > superPoder1)
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        else
            printf("Resultado: Empate!\n");
    }
    else { // opção inválida
        printf("Opcao invalida!\n");
    }

    return 0;
}
