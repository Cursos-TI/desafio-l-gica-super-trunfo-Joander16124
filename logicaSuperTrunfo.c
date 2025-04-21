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


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

     printf("\nComparação de cartas (Atributo: PIB per capita):\n\n");

    printf("Carta 1 - %s (%c): %.2f reais\n", carta1.nomeCidade, carta1.estado, carta1.pibPerCapita);
    printf("Carta 2 - %s (%c): %.2f reais\n", carta2.nomeCidade, carta2.estado, carta2.pibPerCapita);

    // Decisão baseada no PIB per capita (maior valor vence)
    if (carta1.pibPerCapita > carta2.pibPerCapita) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    } else if (carta2.pibPerCapita > carta1.pibPerCapita) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    } else {
        printf("\nResultado: Empate entre as cartas!\n");
    }
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
