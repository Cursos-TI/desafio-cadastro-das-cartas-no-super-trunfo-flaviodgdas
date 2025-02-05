#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[50];
    int codigo[4];
    char nome_cidade[50];
    float populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o estado: ");
    scanf("%s", &estado);
    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade);
    printf("Digite a populacao da cidade: ");
    scanf("%f", &populacao);
    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area);
    printf("Digite o pib da cidade: ");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = (float)(populacao / area);
    pib_per_capita = (float)(pib / populacao);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Estado: %s\n", estado);
    printf("Codigo: %d\n", codigo);
    printf("Cidade: %s\n", nome_cidade);
    printf("Populacao: %f\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turisticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %f\n", densidade_populacional);
    printf("Pib per capita: %f\n", pib_per_capita);


    return 0;
}