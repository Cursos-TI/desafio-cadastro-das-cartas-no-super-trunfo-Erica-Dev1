#include <stdio.h>

int main()
{
    /*informações iniciais do jogo, para a carta 1.*/
    char estado1[3];
    int codigoCarta1;
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area_Km2_1;
    float pib1;
    int numPontosTuristico1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float resultado1;
    float superPoder1;

    /*Exemplos de dados, para a carta 1
    -Sigla:SP -Código:01 -Nome da cidade:Osasco -População:1240000
     Área km²:15212.02 -PIB:828.9 -Pontos Turísticos:50*/

    /*Coletando dados, Carta 1*/
    printf("***Bem vindos ao Super Trunfo Brasil!***\n");

    printf("--Carta 1--\n");
    printf("Digite a sigla do estado:\n");
    scanf(" %s", estado1);

    printf("Digite o código da carta(Ex:01,02...):\n");
    scanf("%d", &codigoCarta1);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", nomeCidade1);

    printf("Digite a população:\n");
    scanf("%lu", &populacao1);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_Km2_1);

    printf("Digite o pib:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos:\n");
    scanf("%d", &numPontosTuristico1);
    // No nivel Aventureiro foram adicionados,os calculos DensidadePopulacional e Pibpercapita.
    densidadePopulacional1 = (float)populacao1 / area_Km2_1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Calculos Densidade populacional e pib per capita.
    resultado1 = densidadePopulacional1 / pibPerCapita1;
    superPoder1 = (float)populacao1 + area_Km2_1 + pibPerCapita1 +
                  numPontosTuristico1 + pibPerCapita1 + (1 / densidadePopulacional1);
    /*informações iniciais do jogo para a carta 2.*/

    char estado2[3];
    int codigoCarta2;
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area_Km2_2;
    float pib2;
    int numPontosTuristico2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float resultado2;
    float superPoder2;

    /*Exemplos de dados, para a carta 2
    -Sigla:CE -Código:02 -Nome da cidade:Fortaleza -População:13410000
     Área km²:13212.02 -PIB:628.9 -Pontos Turísticos:40*/

    /*Coletando dados, Carta 2*/
    printf("--Carta 2--\n");
    printf("Digite a sigla do estado:\n");
    scanf("%s", estado2);

    printf("Digite o código da carta (Ex:01,02...):\n");
    scanf("%d", &codigoCarta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomeCidade2);

    printf("Digite a população:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_Km2_2);

    printf("Digite o pib:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos:\n");
    scanf("%d", &numPontosTuristico2);

    densidadePopulacional2 = (float)populacao2 / area_Km2_2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    resultado2 = densidadePopulacional2 / pibPerCapita2;
    superPoder2 = (float)populacao2 + area_Km2_2 + pibPerCapita2 +
                  numPontosTuristico2 + pibPerCapita2 + (1 / densidadePopulacional2);

    /*Exibindo os dados finais das duas cartas*/
    
    printf("\n----Carta 1---\n");
    printf("Estado:%s\n", estado1);
    printf("Codigo da carta:A%d\n", codigoCarta1);
    printf("Nome da Cidade:%s\n", nomeCidade1);
    printf("População:%lu\n", populacao1);
    printf("Área em Km²:%.2f\n", area_Km2_1);
    printf("PIB:%.2f Bilhões\n", pib1);
    printf("Pontos turisticos:%d\n", numPontosTuristico1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n---Carta 2---\n\n");
    printf("Estado:%s\n", estado2);
    printf("Codigo da carta:B%d\n", codigoCarta2);
    printf("Nome da Cidade:%s\n", nomeCidade2);
    printf("População:%lu\n", populacao2);
    printf("Área em Km²:%.2f\n", area_Km2_2);
    printf("PIB:%.2f Bilhões\n", pib2);
    printf("Pontos turisticos:%d\n", numPontosTuristico2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // comparar cartas 1= carta1 ganha  0 = carta2 ganha
    printf("\n---Quem venceu?---\n");
    printf("Se o resultado for 1 a (carta 1) vence.\n");
    printf("Se o resultado for 0 a (carta 2) vence.\n");
    printf("\n===RESULTADOS===\n");
    printf("Resultado População:%d\n", populacao1 > populacao2);
    printf("Resultado Área:%d\n", area_Km2_1 > area_Km2_2);
    printf("Resultado PIB:%d\n", pib1 > pib2);
    printf("Resultado pontos turisticos:%d\n", numPontosTuristico1 > numPontosTuristico2);
    printf("Resultado densidade populacional:%d\n", densidadePopulacional1 < densidadePopulacional2);
    printf("resultado pib per capita:%d\n", pibPerCapita1 > pibPerCapita2);
    printf("resultado super poder:%d\n", superPoder1 > superPoder2);
    /*Nas considerações finais, no nível mestre, foram calculados a densidade populacional,
    o PIB per capita, o superpoder, além da comparação e exibição dos resultados.*/

    return 0;
}