#include <stdio.h>


int main(){
    //variáveis da carta1
    char state[30],username[20], cardcode[5], city[30];
    int pop, poi;
    float area, gdp;

    //variáveis da carta2
    char state2[30], cardcode2[5], city2[30];
    int pop2, poi2;
    float area2, gdp2;

    //início do programa
    printf("***************************************** \n");
    printf("Seja bem-vindo ao Super Trunfo de Cidades!\n");
    printf("***************************************** \n");

    printf("Como devo te chamar? \n");
    scanf(" %s", username);
    printf(" \n");


    printf("Olá, %s! Vamos cadastrar duas cartas com informações sobre diferentes cidades. \n", username);
    printf(" \n");
    

    
    // perguntas carta 1

    printf("Em qual estado fica a cidade? \n");
    scanf(" %s", state);
    printf(" \n");
   

    printf("Perfeito, %s! Agora me fala um código para a carta: \n", username);
    scanf(" %s", cardcode);
    printf(" \n");
   

    printf("Legal! E qual a cidade de %s que você quer cadastrar? \n", state);
    scanf(" %s", city);
    printf(" \n");


    printf("Só mais algumas informações agora, %s. Qual a população da cidade? \n", username);
    scanf(" %d", &pop);
    printf(" \n");
   

    printf("E a área em km²? \n");
    scanf(" %f", &area);
    printf(" \n");

    printf("%s, agora preciso do PIB da cidade(em reais): \n", username);
    scanf(" %f", &gdp);
    printf(" \n");

    printf("E quantos pontos turísticos tem %s? \n", city);
    scanf(" %d", &poi);
    printf(" \n");


    // incializando carta 2
    printf("**** Agora vamos para a Carta 2, %s \n ****", username);
    printf(" \n");

    // perguntas carta 2

    printf("Em qual estado fica a cidade? \n");
    scanf(" %s", state2);
    printf(" \n");

    printf("Perfeito, %s! Agora me fala um código para a carta: \n", username);
    scanf(" %s", cardcode2);
    printf(" \n");

    printf("Legal! E qual a cidade de %s que você quer cadastrar? \n", state2);
    scanf(" %s", city2);
    printf(" \n");

    printf("Só mais algumas informações agora, %s. Qual a população da cidade? \n", username);
    scanf(" %d", &pop2);
    printf(" \n");

    printf("E a área em km²? \n");
    scanf(" %f", &area2);
    printf(" \n");


    printf("%s, agora preciso do PIB da cidade(em reais): \n", username);
    scanf(" %f", &gdp2);
    printf(" \n");


    printf("E quantos pontos turísticos tem %s? \n", city2);
    scanf(" %d", &poi2);
    printf(" \n");

    

    printf("Obrigado pelas informações, %s! Aqui temos as cartas cadastradas: \n\n", username);
    printf("********************** \n");
    printf("*******CARTA 1******** \n");
    printf("********************** \n");
    printf("\n");
    printf("Estado: %s \n", state);
    printf("Código: %s \n", cardcode);
    printf("Nome da Cidade: %s \n", city);
    printf("População: %d \n", pop);
    printf("Área: %.2fkm² \n", area);
    printf("PIB: %.2f bilhões de reais \n", gdp);
    printf("Número de Pontos Turísticos: %d \n\n", poi);


    printf("********************** \n");
    printf("*******CARTA 2******** \n");
    printf("********************** \n");
    printf("\n");
    printf("Estado: %s \n", state2);
    printf("Código: %s \n", cardcode2);
    printf("Nome da Cidade: %s \n", city2);
    printf("População: %d \n", pop2);
    printf("Área: %.2fkm² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", gdp2);
    printf("Número de Pontos Turísticos: %d \n", poi2);

    return 0;
}