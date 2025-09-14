#include <stdio.h>

int main(){
    // Variáveis da Carta 1
    char estado[50];
    char codigo[50];
    char nome[50];
    int populacao;
    float area;
    float PIB;
    int NPT;
    float densidade_populacional;
    float PIB_per_capita;

    // Variáveis da Carta 2
    char estado2[50];
    char codigo2[50];
    char nome2[50];
    int populacao2;
    float area2;
    float PIB2;
    int NPT2;
    float densidade_populacional2;
    float PIB_per_capita2;



    // Primeira Carta >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    printf("Nome do estado (Carta 1): \n");
    scanf("%s", estado);

    printf("Código do estado (Carta 1): \n");
    scanf("%s", codigo);

    printf("Nome da Cidade (Carta 1): \n");
    scanf("%s", nome);

    printf("População da Cidade (Carta 1): \n");
    scanf("%d", &populacao);

    printf("Área da Cidade (Carta 1): \n");
    scanf("%f", &area);

    printf("PIB da Cidade (Carta 1): \n");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos (Carta 1): \n");
    scanf("%d", &NPT);

    // Cálculos Carta 1
    densidade_populacional = populacao / area;
    PIB_per_capita = PIB / populacao;



    // Segunda Carta >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    printf("Nome do estado (Carta 2): \n");
    scanf("%s", estado2);

    printf("Código do estado (Carta 2): \n");
    scanf("%s", codigo2);

    printf("Nome da Cidade (Carta 2): \n");
    scanf("%s", nome2);

    printf("População da Cidade (Carta 2): \n");
    scanf("%d", &populacao2);

    printf("Área da Cidade (Carta 2): \n");
    scanf("%f", &area2);

    printf("PIB da Cidade (Carta 2): \n");
    scanf("%f", &PIB2);

    printf("Número de Pontos Turísticos (Carta 2): \n");
    scanf("%d", &NPT2);

    // Cálculos Carta 2
    densidade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = PIB2 / populacao2;



    // Exibição >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", NPT);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita);


    printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NPT2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita2);

    return 0;
}
