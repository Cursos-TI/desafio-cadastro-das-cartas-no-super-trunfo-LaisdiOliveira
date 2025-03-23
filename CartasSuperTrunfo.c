#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Atributos das Cidades - Carta 01
    int nCarta_carta01;
    char estado_carta01;
    char codigo_carta01[4];
    char nome_carta01[20];
    int populacao_carta01;
    float area_carta01;
    float pib_carta01;
    int pontosTuristicos_carta01;
    float densidadePopulacional_carta01;
    float pibPerCapta_carta01;

    // Atributos das Cidades - Carta 02
    int nCarta_carta02;
    char estado_carta02;
    char codigo_carta02[4];
    char nome_carta02[20];
    int populacao_carta02;
    float area_carta02;
    float pib_carta02;
    int pontosTuristicos_carta02;
    float densidadePopulacional_carta02;
    float pibPerCapta_carta02;

    // Cadastro das Cartas:
    
    // Apresentação:
    printf("=== Bem-vindo ao Super Trunfo - O Jogo dos Países ===\n");

    // Cadastro da Carta 01
    printf("\nCadastro da primeira carta:\n");
    printf("Digite a letra correspondente ao Estado da sua carta:\n");
    scanf(" %c", &estado_carta01);

    printf("Ótimo! Agora insira o código da carta, ex.: A01, B02, ... :\n");
    scanf("%s", codigo_carta01);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_carta01);

    printf("Quantos habitantes tem na sua cidade?\n");
    scanf("%d", &populacao_carta01);

    printf("Qual é a área da cidade em quilômetros quadrados?\n");
    scanf("%f", &area_carta01);

    printf("Qual é o PIB da sua cidade em bilhões?\n");
    scanf("%f", &pib_carta01);

    printf("Quantos pontos turísticos há na sua cidade?\n");
    scanf("%d", &pontosTuristicos_carta01);

    densidadePopulacional_carta01 = populacao_carta01 / area_carta01;
    pibPerCapta_carta01 = pib_carta01 * 1000000000 / populacao_carta01;

    // Cadastro da Carta 02
    printf("\nCadastro da segunda carta:\n");
    printf("Digite a letra correspondente ao Estado da sua carta:\n");
    scanf(" %c", &estado_carta02);

    printf("Ótimo! Agora insira o código da carta, ex.: A01, B02, ... :\n");
    scanf("%s", codigo_carta02);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_carta02);

    printf("Quantos habitantes tem na sua cidade?\n");
    scanf("%d", &populacao_carta02);

    printf("Qual é a área da cidade em quilômetros quadrados?\n");
    scanf("%f", &area_carta02);

    printf("Qual é o PIB da sua cidade em bilhões?\n");
    scanf("%f", &pib_carta02);

    printf("Quantos pontos turísticos há na sua cidade?\n");
    scanf("%d", &pontosTuristicos_carta02);

    densidadePopulacional_carta02 = populacao_carta02 / area_carta02;
    pibPerCapta_carta02 = pib_carta02 * 1000000000 / populacao_carta02;

    // Mensagem de confirmação:
    printf("\nAs suas cartas foram registradas com sucesso!\n");
    printf("\nResumo das cartas cadastradas:\n");
    printf("\nCarta 01:\n");
    printf("Estado: %c\n", estado_carta01);
    printf("Código: %s\n", codigo_carta01);
    printf("Nome da Cidade: %s\n", nome_carta01);
    printf("População: %d habitantes\n", populacao_carta01);
    printf("Área: %.2f km²\n", area_carta01);
    printf("PIB: %.2f bilhões de reais\n", pib_carta01);
    printf("Pontos Turísticos: %d\n", pontosTuristicos_carta01);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional_carta01);
    printf("PIB per Capita: %.2f reais\n", pibPerCapta_carta01);
    
    printf("\nCarta 02:\n");
    printf("Estado: %c\n", estado_carta02);
    printf("Código: %s\n", codigo_carta02);
    printf("Nome da Cidade: %s\n", nome_carta02);
    printf("População: %d habitantes\n", populacao_carta02);
    printf("Área: %.2f km²\n", area_carta02);
    printf("PIB: %.2f bilhões de reais\n", pib_carta02);
    printf("Pontos Turísticos: %d\n", pontosTuristicos_carta02);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional_carta02);
    printf("PIB per Capita: %.2f reais\n", pibPerCapta_carta02);

    return 0;
}
