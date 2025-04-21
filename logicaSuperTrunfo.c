#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

// Estrutura que representa uma carta
struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

// Função para retornar o valor do atributo
float obterValorAtributo(struct Carta carta, int atributo) {
    switch (atributo) {
        case 1: return (float)carta.populacao;
        case 2: return carta.area;
        case 3: return carta.pib;
        case 4: return (float)carta.pontosTuristicos;
        case 5: return carta.densidadePopulacional;
        default: return 0;
    }
}

// Função para exibir o nome do atributo
const char* nomeAtributo(int atributo) {
    switch (atributo) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Demográfica";
        default: return "Desconhecido";
    }
}

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    struct Carta carta1 = {'A', "A01", "São Paulo", 12325000, 1521.11, 699.28, 50, 0, 0};
    struct Carta carta2 = {'B', "B02", "Rio de Janeiro", 6748000, 1200.25, 300.50, 30, 0, 0};
    
      // Cálculos dos indicadores
      carta1.densidadePopulacional = carta1.populacao / carta1.area;
      carta1.pibPerCapita = (carta1.pib * 1000000000.0) / carta1.populacao;
  
      carta2.densidadePopulacional = carta2.populacao / carta2.area;
      carta2.pibPerCapita = (carta2.pib * 1000000000.0) / carta2.populacao;
  
      int atributo1, atributo2;

     // Menu de opções
      // === Menu: Escolha do primeiro atributo ===
    printf("Escolha o PRIMEIRO atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    // Validação da primeira escolha
    if (atributo1 < 1 || atributo1 > 5) {
        printf("Opção inválida!\n");
        return 1;
    }

    // === Menu: Escolha do segundo atributo ===
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            printf("%d - %s\n", i, nomeAtributo(i));
        }
    }
    printf("Opção: ");
    scanf("%d", &atributo2);

    // Validação do segundo atributo
    if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
        printf("Opção inválida ou repetida!\n");
        return 1;
    }
 

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    float valor1_attr1 = obterValorAtributo(carta1, atributo1);
    float valor2_attr1 = obterValorAtributo(carta2, atributo1);
    float valor1_attr2 = obterValorAtributo(carta1, atributo2);
    float valor2_attr2 = obterValorAtributo(carta2, atributo2);

    printf("\nComparando cartas: %s VS %s\n", carta1.nomeCidade, carta2.nomeCidade);
    printf("Atributos: %s e %s\n\n", nomeAtributo(atributo1), nomeAtributo(atributo2));

    // Resultado individual do primeiro atributo
    printf("%s:\n", nomeAtributo(atributo1));
    printf("  %s: %.2f\n", carta1.nomeCidade, valor1_attr1);
    printf("  %s: %.2f\n", carta2.nomeCidade, valor2_attr1);

    // Resultado individual do segundo atributo
    printf("%s:\n", nomeAtributo(atributo2));
    printf("  %s: %.2f\n", carta1.nomeCidade, valor1_attr2);
    printf("  %s: %.2f\n", carta2.nomeCidade, valor2_attr2);

    // Regra especial: Densidade Demográfica (menor vence)
    float soma1 = (atributo1 == 5 ? -valor1_attr1 : valor1_attr1) +
                  (atributo2 == 5 ? -valor1_attr2 : valor1_attr2);

    float soma2 = (atributo1 == 5 ? -valor2_attr1 : valor2_attr1) +
                  (atributo2 == 5 ? -valor2_attr2 : valor2_attr2);

    printf("\nSoma dos atributos:\n");
    printf("  %s: %.2f\n", carta1.nomeCidade, soma1);
    printf("  %s: %.2f\n", carta2.nomeCidade, soma2);

    // Resultado final usando operador ternário
    printf("\nResultado Final: ");
    (soma1 > soma2) ? printf("%s venceu!\n", carta1.nomeCidade) :
    (soma2 > soma1) ? printf("%s venceu!\n", carta2.nomeCidade) :
                      printf("Empate!\n");
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
