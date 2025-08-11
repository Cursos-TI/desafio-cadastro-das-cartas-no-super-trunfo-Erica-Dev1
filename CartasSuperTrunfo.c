#include <stdio.h>

int main()
{
    /*informações iniciais do jogo, para a carta 1.*/
    char estado1[3];
    int codigoCarta1;
    char nomeCidade1[50];
    int populacao1;
    float area_Km2_1;
    float pib1;
    int numPontosTuristico1;

    /*Exemplos de dados, para a carta 1
    -Sigla:SP -Código:01 -Nome da cidade:Osasco -População:12400000
     Área km²:1521202 -PIB:8289 -Pontos Turísticos:50*/

    /*Coletando dados, Carta 1*/
    printf("Bem vindos ao Super Trunfo Brasil.\n");
    printf("Carta 1\n");
    printf("Digite a sigla do estado:\n");
    scanf(" %s", estado1);

    printf("Digite o código da carta(Ex:01,02...):\n");
    scanf("%d", &codigoCarta1);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", nomeCidade1);



    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_Km2_1);

    printf("Digite o pib:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos:\n");
    scanf("%d", &numPontosTuristico1);

    /*informações iniciais do jogo para a carta 2.*/

    char estado2[3];
    int codigoCarta2;
    char nomeCidade2[50];
    int populacao2;
    float area_Km2_2;
    float pib2;
    int numPontosTuristico2;

    /*Exemplos de dados, para a carta 2
    -Sigla:CE -Código:02 -Nome da cidade:Fortaleza -População:13410000
     Área km²:1321202 -PIB:6289 -Pontos Turísticos:40*/

    /*Coletando dados, Carta 2*/
    printf("Carta 2\n");
    printf("Digite um estado:\n");
    scanf("%s", estado2);

    printf("Digite o código da carta (Ex:01,02...):\n");
    scanf("%d", &codigoCarta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomeCidade2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²:\n");
    scanf("%f", &area_Km2_2);

    printf("Digite o pib:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos:\n");
    scanf("%d", &numPontosTuristico2);

    /*Exibindo os dados finais das duas cartas*/
    printf("-Dados Carta 1\n");
    printf("Estado:%s\n", estado1);
    printf("Codigo da carta:%d\n", codigoCarta1);
    printf("Nome da Cidade:%s\n", nomeCidade1);
    printf("População:%d\n", populacao1);
    printf("Área em Km²:%.2f\n", area_Km2_1);
    printf("PIB:%.2f Bilhões\n", pib1);
    printf("Pontos turisticos:%d\n", numPontosTuristico1);

    printf("-Dados Carta 2\n");
    printf("Estado:%s\n", estado2);
    printf("Codigo da carta:%d\n", codigoCarta2);
    printf("Nome da Cidade:%s\n", nomeCidade2);
    printf("População:%d\n", populacao2);
    printf("Área em Km²:%.2f\n", area_Km2_2);
    printf("PIB:%.2f Bilhões\n", pib2);
    printf("Pontos turisticos:%d\n", numPontosTuristico2);

    return 0;
}

