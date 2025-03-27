#include <stdio.h>

int main() {
    // Atributos das Cidades - Carta 01
    char estado_carta01;
    char codigo_carta01[4];
    char nome_carta01[20];
    unsigned long int populacao_carta01;
    float area_carta01, pib_carta01;
    int pontosTuristicos_carta01;
    float densidadePopulacional_carta01, pibPerCapta_carta01;
    double superPoder_carta01, inversoDensidade_carta01;    

    // Atributos das Cidades - Carta 02
    char estado_carta02;
    char codigo_carta02[4];
    char nome_carta02[20];
    unsigned long int populacao_carta02;
    float area_carta02, pib_carta02;
    int pontosTuristicos_carta02;
    float densidadePopulacional_carta02, pibPerCapta_carta02;
    double superPoder_carta02, inversoDensidade_carta02;

    // Apresentação:
    printf("=== Bem-vindo ao Super Trunfo - O Jogo das Cidades ===\n");

    // Cadastro da Carta 01
    printf("\nCadastro da primeira carta:\n");
    printf("Digite a letra correspondente ao Estado da sua cidade: ");
    scanf(" %c", &estado_carta01);

    printf("Insira o código da carta (ex.: A01, B02, ...): ");
    scanf("%3s", codigo_carta01);

    printf("Digite o nome da cidade: ");
    scanf("%19s", nome_carta01);

    printf("Quantos habitantes tem na sua cidade? ");
    scanf("%lu", &populacao_carta01);

    printf("Qual é a área da cidade em quilômetros quadrados? ");
    scanf("%f", &area_carta01);

    printf("Qual é o PIB da sua cidade em bilhões? ");
    scanf("%f", &pib_carta01);

    printf("Quantos pontos turísticos há na sua cidade? ");
    scanf("%d", &pontosTuristicos_carta01);

    // Cálculos Carta 01
    densidadePopulacional_carta01 = populacao_carta01 / area_carta01;
    pibPerCapta_carta01 = (pib_carta01 * 1000000000) / populacao_carta01;
    inversoDensidade_carta01 = 1.0 / densidadePopulacional_carta01;
    superPoder_carta01 = populacao_carta01 + area_carta01 + pib_carta01 + inversoDensidade_carta01 + pibPerCapta_carta01;

    // Cadastro da Carta 02
    printf("\nCadastro da segunda carta:\n");
    printf("Digite a letra correspondente ao Estado da sua cidade: ");
    scanf(" %c", &estado_carta02);

    printf("Insira o código da carta (ex.: A01, B02, ...): ");
    scanf("%3s", codigo_carta02);

    printf("Digite o nome da cidade: ");
    scanf("%19s", nome_carta02);

    printf("Quantos habitantes tem na sua cidade? ");
    scanf("%lu", &populacao_carta02);

    printf("Qual é a área da cidade em quilômetros quadrados? ");
    scanf("%f", &area_carta02);

    printf("Qual é o PIB da sua cidade em bilhões? ");
    scanf("%f", &pib_carta02);

    printf("Quantos pontos turísticos há na sua cidade? ");
    scanf("%d", &pontosTuristicos_carta02);

    // Cálculos Carta 02
    densidadePopulacional_carta02 = populacao_carta02 / area_carta02;
    pibPerCapta_carta02 = (pib_carta02 * 1000000000) / populacao_carta02;
    inversoDensidade_carta02 = 1.0 / densidadePopulacional_carta02;
    superPoder_carta02 = populacao_carta02 + area_carta02 + pib_carta02 + inversoDensidade_carta02 + pibPerCapta_carta02;

    // Mensagem de confirmação
    printf("\nAs suas cartas foram registradas com sucesso!\n");

    // Comparações
    printf("\n=== Comparação entre as cidades ===\n");
    printf("População: %lu vs %lu -> Carta 01 vence? %d\n", populacao_carta01, populacao_carta02, populacao_carta01 > populacao_carta02);
    printf("Área (km²): %.2f vs %.2f -> Carta 01 vence? %d\n", area_carta01, area_carta02, area_carta01 > area_carta02);
    printf("PIB (bilhões): %.2f vs %.2f -> Carta 01 vence? %d\n", pib_carta01, pib_carta02, pib_carta01 > pib_carta02);
    printf("Pontos turísticos: %d vs %d -> Carta 01 vence? %d\n", pontosTuristicos_carta01, pontosTuristicos_carta02, pontosTuristicos_carta01 > pontosTuristicos_carta02);
    printf("Densidade populacional (hab/km²): %.2f vs %.2f -> Carta 01 vence? %d\n", densidadePopulacional_carta01, densidadePopulacional_carta02, densidadePopulacional_carta01 < densidadePopulacional_carta02);
    printf("PIB per Capita: %.2f vs %.2f -> Carta 01 vence? %d\n", pibPerCapta_carta01, pibPerCapta_carta02, pibPerCapta_carta01 > pibPerCapta_carta02);
    printf("Super Poder: %.2f vs %.2f -> Carta 01 vence? %d\n", superPoder_carta01, superPoder_carta02, superPoder_carta01 > superPoder_carta02);

    return 0;
}
