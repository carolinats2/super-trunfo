
int main() {
    // Introdução
    printf("====================================\n");
    printf("   (: BEM-VINDO AO SUPER TRUNFO :)   \n");
    printf("====================================\n\n");

    // ======= CARTA 1 =======
    char estado1[3], codigo1[4], nome1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    printf("Digite os dados da CARTA 1:\n");
    printf("Codigo da carta (A-H): ");
    scanf("%s", codigo1);
    printf("Estado (ex: RJ): ");
    scanf("%s", estado1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1); // lê até o ENTER
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // ======= CARTA 2 =======
    char estado2[3], codigo2[4], nome2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    printf("\nDigite os dados da CARTA 2:\n");
    printf("Codigo da carta (A-H): ");
    scanf("%s", codigo2);
    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // ======= COMPARAÇÃO =======
    // (fixo para População neste exemplo como pedido no  trabalho, mas pode trocar para Área, PIB etc.)
    printf("\n====================================\n");
    printf("Comparacao de cartas (Atributo: Populacao)\n");
    printf("%s (%s) - %d habitantes\n", nome1, estado1, populacao1);
    printf("%s (%s) - %d habitantes\n", nome2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    printf("====================================\n");

    return 0;
}
