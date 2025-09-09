#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Base para cadastrar cartas de cidades e comparar atributos.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1[3], codigo1[5], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1;

    char estado2[3], codigo2[5], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2;

    int opcao;

    // Cadastro das Cartas
    printf("=== CADASTRO DA CARTA 1 ===\n");
    printf("Estado (sigla): ");
    scanf("%2s", estado1);
    printf("Codigo da cidade: ");
    scanf("%4s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
    densidade1 = populacao1 / area1;

    printf("\n=== CADASTRO DA CARTA 2 ===\n");
    printf("Estado (sigla): ");
    scanf("%2s", estado2);
    printf("Codigo da cidade: ");
    scanf("%4s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
    densidade2 = populacao2 / area2;

    // Menu de comparação
    printf("\n=== ESCOLHA O ATRIBUTO PARA COMPARAR ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARACAO ===\n");

    // Comparação de Cartas
    if (opcao == 1) { // População
        if (populacao1 > populacao2)
            printf("A cidade vencedora e: %s (maior populacao)\n", cidade1);
        else if (populacao2 > populacao1)
            printf("A cidade vencedora e: %s (maior populacao)\n", cidade2);
        else
            printf("Empate na populacao!\n");
    } 
    else if (opcao == 2) { // Área
        if (area1 > area2)
            printf("A cidade vencedora e: %s (maior area)\n", cidade1);
        else if (area2 > area1)
            printf("A cidade vencedora e: %s (maior area)\n", cidade2);
        else
            printf("Empate na area!\n");
    } 
    else if (opcao == 3) { // PIB
        if (pib1 > pib2)
            printf("A cidade vencedora e: %s (maior PIB)\n", cidade1);
        else if (pib2 > pib1)
            printf("A cidade vencedora e: %s (maior PIB)\n", cidade2);
        else
            printf("Empate no PIB!\n");
    } 
    else if (opcao == 4) { // Pontos turísticos
        if (pontosTuristicos1 > pontosTuristicos2)
            printf("A cidade vencedora e: %s (mais pontos turisticos)\n", cidade1);
        else if (pontosTuristicos2 > pontosTuristicos1)
            printf("A cidade vencedora e: %s (mais pontos turisticos)\n", cidade2);
        else
            printf("Empate nos pontos turisticos!\n");
    } 
    else if (opcao == 5) { // Densidade populacional (menor vence)
        if (densidade1 < densidade2)
            printf("A cidade vencedora e: %s (menor densidade populacional)\n", cidade1);
        else if (densidade2 < densidade1)
            printf("A cidade vencedora e: %s (menor densidade populacional)\n", cidade2);
        else
            printf("Empate na densidade populacional!\n");
    } 
    else {
        printf("Opcao invalida!\n");
    }

    return 0;
}
