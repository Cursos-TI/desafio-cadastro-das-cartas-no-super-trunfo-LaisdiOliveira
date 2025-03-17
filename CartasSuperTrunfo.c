#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    
    // Atributos das Cidades:
       int nCarta;
       char estado;
       char codigo [4];
       char nome [20];
       int populacao;
       float area;
       double pib;
       int pontosTuristicos;

    
    // Cadastro das Cartas:
   
    // Apresentação:
        printf("======Bem vindo ao Super Trunfo - O Jogo dos Países======\n");

     // Número da Carta:
        printf("Para começar digite o número da Carta:\n");
        scanf("%d", &nCarta);

    // Letra correspondente ao estado:
        printf("Muito bem! Qual é a letra correspondente ao Estado da sua carta?\n");
        scanf(" %c", &estado);

    // Código da carta:
        printf("Ótimo! Agora insira o código da carta, ex.:A01,B02,... :\n");
        scanf("%s",codigo);

    // Nome da cidade:
        printf("Estamos no caminho! Digite o nome da cidade:\n");
        scanf("%s", nome);

    // População:
        printf("Agora precisamos saber quantos habitantes tem na sua cidade?\n");
        scanf("%d", &populacao);
    
    // Área:
        printf("Qual é o tamanho, ou seja, a área da cidade em metros quadrados?\n");
        scanf("%f", &area);

    // PIB:
        printf("Fantástico! Agora precisamos falar sobre algo importante... dinheiro, qual é o PIB da sua cidade?\n");
        scanf("%lf", &pib);
    
    // Pontos turísticos:
        printf("Estamos quase lá, mas antes precisamos saber quantos pontos turisticos há na sua cidade?\n");
        scanf("%d", &pontosTuristicos);

    //Mensagem de confirmação:
        printf("A sua carta foi registrada com sucesso!\n" "Agora já sabemos o que a sua cidade tem de melhor!\n");
        printf("Carta: %d\n", nCarta);
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da Cidade: %s\n", nome);
        printf("População: %d\n", populacao);
        printf("Área: %.2f m²\n", area);
        printf("PIB: %.2lf\n", pib);
        printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}
