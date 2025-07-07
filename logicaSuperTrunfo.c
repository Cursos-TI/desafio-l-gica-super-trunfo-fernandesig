#include <stdio.h>

int main() {
    // Variáveis da carta1
    char state[30], username[20], cardcode[5], city[30];
    unsigned long int pop;
    int poi, comp1, comp2;
    float area, gdp, popdensity, gdppercapita, result1, result2, sum1, sum2;

    // Variáveis da carta2
    char state2[30], cardcode2[5], city2[30];
    unsigned long int pop2;
    int poi2;
    float area2, gdp2, popdensity2, gdppercapita2;

    // Início do programa
    printf("*****************************************\n");
    printf("Seja bem-vindo ao Super Trunfo de Cidades!\n");
    printf("*****************************************\n");

    printf("Como devo te chamar?\n");
    scanf(" %s", username);
    printf("\n");

    printf("Olá, %s! Vamos cadastrar duas cartas com informações sobre diferentes cidades.\n", username);
    printf("\n");

    // Perguntas carta 1
    printf("Em qual estado fica a cidade?\n");
    scanf(" %s", state);
    printf("\n");

    printf("Perfeito, %s! Agora me fala um código para a carta:\n", username);
    scanf(" %s", cardcode);
    printf("\n");

    printf("Legal! E qual a cidade de %s que você quer cadastrar?\n", state);
    scanf(" %s", city);
    printf("\n");

    printf("Só mais algumas informações agora, %s. Qual a população da cidade?\n", username);
    scanf(" %d", &pop);
    printf("\n");

    printf("E a área em km²?(Ex: 101.9)\n");
    scanf(" %f", &area);
    printf("\n");

    printf("%s, agora preciso do PIB da cidade (Ex: 62.9):\n", username);
    scanf(" %f", &gdp);
    printf("\n");

    printf("E quantos pontos turísticos tem %s?\n", city);
    scanf(" %d", &poi);
    printf("\n");

    // Inicializando carta 2
    printf("**** Agora vamos para a Carta 2, %s ****\n", username);
    printf("\n");

    printf("Em qual estado fica a cidade?\n");
    scanf(" %s", state2);
    printf("\n");

    printf("Perfeito, %s! Agora me fala um código para a carta:\n", username);
    scanf(" %s", cardcode2);
    printf("\n");

    printf("Legal! E qual a cidade de %s que você quer cadastrar?\n", state2);
    scanf(" %s", city2);
    printf("\n");

    printf("Só mais algumas informações agora, %s. Qual a população da cidade?\n", username);
    scanf(" %d", &pop2);
    printf("\n");

    printf("E a área em km²?(Ex: 101.9)\n");
    scanf(" %f", &area2);
    printf("\n");

    printf("%s, agora preciso do PIB da cidade (Ex: 62.9):\n", username);
    scanf(" %f", &gdp2);
    printf("\n");

    printf("E quantos pontos turísticos tem %s?\n", city2);
    scanf(" %d", &poi2);
    printf("\n");

    // Cálculos
    popdensity = pop / area;
    gdppercapita = (gdp * 1000000000) / pop;

    popdensity2 = pop2 / area2;
    gdppercapita2 = (gdp2 * 1000000000) / pop2;

    float superpower1 = pop + area + gdp + poi + gdppercapita + (1 / popdensity);
    float superpower2 = pop2 + area2 + gdp2 + poi2 + gdppercapita2 + (1 / popdensity2);

    // Exibição de cartas
    printf("Obrigado pelas informações, %s! Aqui temos as cartas cadastradas:\n\n", username);

    printf("**********************\n");
    printf("*******CARTA 1********\n");
    printf("**********************\n");
    printf("Estado: %s\n", state);
    printf("Código: %s\n", cardcode);
    printf("Nome da Cidade: %s\n", city);
    printf("População: %d\n", pop);
    printf("Área: %.2fkm²\n", area);
    printf("PIB: %.2f bilhões de reais\n", gdp);
    printf("Número de Pontos Turísticos: %d\n", poi);
    printf("Densidade Populacional: %.2f hab/km²\n", popdensity);
    printf("PIB per Capita: %.2f reais\n\n", gdppercapita);

    printf("**********************\n");
    printf("*******CARTA 2********\n");
    printf("**********************\n");
    printf("Estado: %s\n", state2);
    printf("Código: %s\n", cardcode2);
    printf("Nome da Cidade: %s\n", city2);
    printf("População: %d\n", pop2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", gdp2);
    printf("Número de Pontos Turísticos: %d\n", poi2);
    printf("Densidade Populacional: %.2f hab/km²\n", popdensity2);
    printf("PIB per Capita: %.2f reais\n\n", gdppercapita2);

    // Comparações
    printf("******************************\n");
    printf("****COMPARAÇÃO DE ATRIBUTO****\n");
    printf("******************************\n");

    printf("Qual o primeiro atributo você gostaria de comparar?\n");
    printf("1. População\n2. Área\n3. PIB\n4. Número de Pontos Turísticos\n5. Densidade Populacional\n");
    scanf("%d", &comp1);

    printf("Cidade da carta 1: %s\n", city);
    printf("Cidade da carta 2: %s\n", city2);
    printf("O primeiro atributo usado para comparar foi ");

    switch (comp1) {
        case 1:
            printf("população.\n");
            printf("População da Carta 1: %lu\n", pop);
            printf("População da Carta 2: %lu\n", pop2);
            sum1 = pop;
            sum2 = pop2;
            break;
        case 2:
            printf("área.\n");
            printf("Área da Carta 1: %.2f\n", area);
            printf("Área da Carta 2: %.2f\n", area2);
            sum1 = area;
            sum2 = area2;
            break;
        case 3:
            printf("PIB.\n");
            printf("PIB da Carta 1: %.2f\n", gdp);
            printf("PIB da Carta 2: %.2f\n", gdp2);
            sum1 = gdp;
            sum2 = gdp2;
            break;
        case 4:
            printf("número de pontos turísticos.\n");
            printf("Pontos Turísticos da Carta 1: %d\n", poi);
            printf("Pontos Turísticos da Carta 2: %d\n", poi2);
            sum1 = poi;
            sum2 = poi2;
            break;
        case 5:
            printf("densidade populacional.\n");
            printf("Densidade Populacional da Carta 1: %.2f\n", popdensity);
            printf("Densidade Populacional da Carta 2: %.2f\n", popdensity2);
            sum1 = popdensity;
            sum2 = popdensity2;
            break;
        default:
            printf("opção inválida.\n");
            return 0;
    }

    printf("Escolha o segundo atributo para comparar?\n");
    printf("1. População\n2. Área\n3. PIB\n4. Número de Pontos Turísticos\n5. Densidade Populacional\n");
    scanf("%d", &comp2);

    printf("Cidade da carta 1: %s\n", city);
    printf("Cidade da carta 2: %s\n", city2);
    printf("O segundo atributo usado para comparar foi ");

    switch (comp2) {
        case 1:
            printf("população.\n");
            printf("População da Carta 1: %lu\n", pop);
            printf("População da Carta 2: %lu\n", pop2);
            sum1 += pop;
            sum2 += pop2;
            break;
        case 2:
            printf("área.\n");
            printf("Área da Carta 1: %.2f\n", area);
            printf("Área da Carta 2: %.2f\n", area2);
            sum1 += area;
            sum2 += area2;
            break;
        case 3:
            printf("PIB.\n");
            printf("PIB da Carta 1: %.2f\n", gdp);
            printf("PIB da Carta 2: %.2f\n", gdp2);
            sum1 += gdp;
            sum2 += gdp2;
            break;
        case 4:
            printf("número de pontos turísticos.\n");
            printf("Pontos Turísticos da Carta 1: %d\n", poi);
            printf("Pontos Turísticos da Carta 2: %d\n", poi2);
            sum1 += poi;
            sum2 += poi2;
            break;
        case 5:
            printf("densidade populacional.\n");
            printf("Densidade Populacional da Carta 1: %.2f\n", popdensity);
            printf("Densidade Populacional da Carta 2: %.2f\n", popdensity2);
            sum1 += popdensity;
            sum2 += popdensity2;
            break;
        default:
            printf("opção inválida.\n");
            return 0;
    }

    printf("\nTotal da Carta 1: %.2f\n", sum1);
    printf("Total da Carta 2: %.2f\n", sum2);

    if (sum1 > sum2) {
        printf("A Carta 1 (%s) venceu!\n", city);
    } else if (sum2 > sum1) {
        printf("A Carta 2 (%s) venceu!\n", city2);
    } else {
        printf("Empate entre %s e %s!\n", city, city2);
    }

    return 0;
}
