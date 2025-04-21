#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

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

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    struct Carta carta1;
    struct Carta carta2;
    int opcao;

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o Estado (A a H): ");
    scanf(" %c", &carta1.estado);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Informe a População: ");
    scanf("%d", &carta1.populacao);

    printf("Informe a Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos da Carta 1
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000.0) / carta1.populacao;

    // Leitura dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Informe o Estado (A a H): ");
    scanf(" %c", &carta2.estado);

    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Informe a População: ");
    scanf("%d", &carta2.populacao);
        
    printf("Informe a Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos da Carta 2
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000.0) / carta2.populacao;

     // Menu de opções
     printf("\n===== Menu de Comparação =====\n");
     printf("Escolha o atributo para comparar:\n");
     printf("1 - População\n");
     printf("2 - Área\n");
     printf("3 - PIB\n");
     printf("4 - Número de Pontos Turísticos\n");
     printf("5 - Densidade Demográfica\n");
     printf("Opção: ");
     scanf("%d", &opcao);
 
     printf("\nComparação entre:\n");
     printf("Carta 1: %s\n", carta1.nomeCidade);
     printf("Carta 2: %s\n\n", carta2.nomeCidade);
 

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

      // Lógica de comparação com switch e if-else aninhado
    switch(opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", carta1.nomeCidade, carta1.populacao);
            printf("%s: %lu habitantes\n", carta2.nomeCidade, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Resultado: %s venceu!\n", carta1.nomeCidade);
            } else if (carta2.populacao > carta1.populacao) {
                printf("Resultado: %s venceu!\n", carta2.nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", carta1.nomeCidade, carta1.area);
            printf("%s: %.2f km²\n", carta2.nomeCidade, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Resultado: %s venceu!\n", carta1.nomeCidade);
            } else if (carta2.area > carta1.area) {
                printf("Resultado: %s venceu!\n", carta2.nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões de reais\n", carta1.nomeCidade, carta1.pib);
            printf("%s: %.2f bilhões de reais\n", carta2.nomeCidade, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Resultado: %s venceu!\n", carta1.nomeCidade);
            } else if (carta2.pib > carta1.pib) {
                printf("Resultado: %s venceu!\n", carta2.nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", carta1.nomeCidade, carta1.pontosTuristicos);
            printf("%s: %d pontos\n", carta2.nomeCidade, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("Resultado: %s venceu!\n", carta1.nomeCidade);
            } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
                printf("Resultado: %s venceu!\n", carta2.nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (menor vence)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", carta1.nomeCidade, carta1.densidadePopulacional);
            printf("%s: %.2f hab/km²\n", carta2.nomeCidade, carta2.densidadePopulacional);
            if (carta1.densidadePopulacional < carta2.densidadePopulacional) {
                printf("Resultado: %s venceu!\n", carta1.nomeCidade);
            } else if (carta2.densidadePopulacional < carta1.densidadePopulacional) {
                printf("Resultado: %s venceu!\n", carta2.nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
    }
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
