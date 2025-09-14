#include <stdio.h>

int main(){
    // Variáveis da Carta 1
    char estado[50], codigo[50], nome[50];
    int populacao, NPT;
    float area, PIB, densidade_populacional, PIB_per_capita, super_poder1;

    // Variáveis da Carta 2
    char estado2[50], codigo2[50], nome2[50];
    int populacao2, NPT2;
    float area2, PIB2, densidade_populacional2, PIB_per_capita2, super_poder2;

    // ---------------- CARTA 1 ----------------
    printf("Nome do estado (Carta 1): ");
    scanf("%s", estado);

    printf("Código do estado (Carta 1): ");
    scanf("%s", codigo);

    printf("Nome da Cidade (Carta 1): ");
    scanf("%s", nome);

    printf("População da Cidade (Carta 1): ");
    scanf("%d", &populacao);

    printf("Área da Cidade (Carta 1): ");
    scanf("%f", &area);

    printf("PIB da Cidade (Carta 1): ");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos (Carta 1): ");
    scanf("%d", &NPT);

    // Cálculos
    densidade_populacional = populacao / area;
    PIB_per_capita = PIB / populacao;
    super_poder1 = populacao + area + PIB + NPT + PIB_per_capita + densidade_populacional;

    // ---------------- CARTA 2 ----------------
    printf("\nNome do estado (Carta 2): ");
    scanf("%s", estado2);

    printf("Código do estado (Carta 2): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade (Carta 2): ");
    scanf("%s", nome2);

    printf("População da Cidade (Carta 2): ");
    scanf("%d", &populacao2);

    printf("Área da Cidade (Carta 2): ");
    scanf("%f", &area2);

    printf("PIB da Cidade (Carta 2): ");
    scanf("%f", &PIB2);

    printf("Número de Pontos Turísticos (Carta 2): ");
    scanf("%d", &NPT2);

    // Cálculos
    densidade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = PIB2 / populacao2;
    super_poder2 = populacao2 + area2 + PIB2 + NPT2 + PIB_per_capita2 + densidade_populacional2;

    // ---------------- RESULTADOS ----------------
    printf("\n================ RESULTADOS DAS CARTAS ================\n");

    printf("\nPopulação: %s", (populacao > populacao2) ? "Carta 1 venceu" :
                               (populacao2 > populacao) ? "Carta 2 venceu" : "Empate");

    printf("\nÁrea: %s", (area > area2) ? "Carta 1 venceu" :
                         (area2 > area) ? "Carta 2 venceu" : "Empate");

    printf("\nPIB: %s", (PIB > PIB2) ? "Carta 1 venceu" :
                         (PIB2 > PIB) ? "Carta 2 venceu" : "Empate");

    printf("\nNº Pontos Turísticos: %s", (NPT > NPT2) ? "Carta 1 venceu" :
                                        (NPT2 > NPT) ? "Carta 2 venceu" : "Empate");

    printf("\nPIB per Capita: %s", (PIB_per_capita > PIB_per_capita2) ? "Carta 1 venceu" :
                                  (PIB_per_capita2 > PIB_per_capita) ? "Carta 2 venceu" : "Empate");

    printf("\nDensidade Populacional: %s", (densidade_populacional < densidade_populacional2) ? "Carta 1 venceu" :
                                          (densidade_populacional2 < densidade_populacional) ? "Carta 2 venceu" : "Empate");

    printf("\nSuper Poder: %s", (super_poder1 > super_poder2) ? "Carta 1 venceu" :
                                (super_poder2 > super_poder1) ? "Carta 2 venceu" : "Empate");

    printf("\n========================================================\n");

    return 0;
}
