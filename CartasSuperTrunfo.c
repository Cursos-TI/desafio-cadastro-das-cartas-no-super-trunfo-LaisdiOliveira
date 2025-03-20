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
    double pib_carta01;
    int pontosTuristicos_carta01;

    // Atributos das Cidades - Carta 02
    int nCarta_carta02;
    char estado_carta02;
    char codigo_carta02[4];
    char nome_carta02[20];
    int populacao_carta02;
    float area_carta02;
    double pib_carta02;
    int pontosTuristicos_carta02;

    // Cadastro das Cartas:
    
    // Apresentação:
    printf("===Bem vindo ao Super Trunfo - O Jogo dos Países===\n");

    // Cadastro da Carta 01
    printf("\nCadastro da primeira carta:\n");
    printf("Digite a letra correspondente ao Estado da sua carta:\n");
    scanf(" %c", &estado_carta01);

    printf("Ótimo! Agora insira o código da carta, ex.:A01,B02,... :\n");
    scanf("%s", codigo_carta01);

    printf("Estamos no caminho! Digite o nome da cidade:\n");
    scanf("%s", nome_carta01);

    printf("Agora precisamos saber quantos habitantes tem na sua cidade?\n");
    scanf("%d", &populacao_carta01);

    printf("Qual é o tamanho, ou seja, a área da cidade em metros quadrados?\n");
    scanf("%f", &area_carta01);

    printf("Fantástico! Agora precisamos falar sobre algo importante... dinheiro, qual é o PIB da sua cidade?\n");
    scanf("%lf", &pib_carta01);

    printf("Estamos quase lá, mas antes precisamos saber quantos pontos turísticos há na sua cidade?\n");
    scanf("%d", &pontosTuristicos_carta01);

    // Cadastro da Carta 02
    printf("\nCadastro da segunda carta:\n");
    printf("Digite a letra correspondente ao Estado da sua carta:\n");
    scanf(" %c", &estado_carta02);

    printf("Ótimo! Agora insira o código da carta, ex.:A01,B02,... :\n");
    scanf("%s", codigo_carta02);

    printf("Estamos no caminho! Digite o nome da cidade:\n");
    scanf("%s", nome_carta02);

    printf("Agora precisamos saber quantos habitantes tem na sua cidade?\n");
    scanf("%d", &populacao_carta02);

    printf("Qual é o tamanho, ou seja, a área da cidade em metros quadrados?\n");
    scanf("%f", &area_carta02);

    printf("Fantástico! Agora precisamos falar sobre algo importante... dinheiro, qual é o PIB da sua cidade?\n");
    scanf("%lf", &pib_carta02);

    printf("Estamos quase lá, mas antes precisamos saber quantos pontos turísticos há na sua cidade?\n");
    scanf("%d", &pontosTuristicos_carta02);

    //Mensagem de confirmação:
    printf("\nAs suas cartas foram registradas com sucesso!\n");

    printf("\nResumo das cartas cadastradas:\n");
    
    printf("\nCarta 01:\n");
    printf("Estado: %c\n", estado_carta01);
    printf("Código: %s\n", codigo_carta01);
    printf("Nome da Cidade: %s\n", nome_carta01);
    printf("População: %d habitantes\n", populacao_carta01);
    printf("Área: %.f m²\n", area_carta01);
    printf("PIB:R$ %.2lf\n", pib_carta01);
    printf("Pontos Turísticos: %d\n", pontosTuristicos_carta01);

    printf("\nCarta 02:\n");
    printf("Estado: %c\n", estado_carta02);
    printf("Código: %s\n", codigo_carta02);
    printf("Nome da Cidade: %s\n", nome_carta02);
    printf("População: %d habitantes\n", populacao_carta02);
    printf("Área: %.f m²\n", area_carta02);
    printf("PIB:R$ %.2lf\n", pib_carta02);
    printf("Pontos Turísticos: %d\n", pontosTuristicos_carta02);

    return 0;
}

