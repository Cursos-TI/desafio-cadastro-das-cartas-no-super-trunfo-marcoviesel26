#include <stdio.h>

int main() {
    // Dados da Carta 1
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Dados da Carta 2
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Entrada de dados - Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Entrada de dados - Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Código da Carta (ex: B03): ");
    scanf("%s", codigo2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Exibição dos dados - Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    // Exibição dos dados - Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    return 0;
}
