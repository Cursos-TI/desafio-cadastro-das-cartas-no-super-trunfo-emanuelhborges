#include <stdio.h>
#include <string.h>

    // Usei fgets(limpan, 3, stdin) pra limpar o \n que é gerado no scanf, caso contrario não seria possivel usar fgets após scanf
    // V2

int main() {
    char carta1[3], carta2[3], estado1[4], estado2[4], codigo1[5], codigo2[5], cid1[20], cid2[20], limpan[3];
    int pop1, pop2, ptur1, ptur2;
    float area1, area2, pib1, pib2;

    printf("Digite a primeira carta\n");
    printf("Digite o valor para Carta: ");
    scanf("%s", &carta1);
    printf("Digite o valor para Estado: ");
    scanf("%s", &estado1);
    printf("Digite o valor para Código: ");
    scanf("%s", &codigo1);
    fgets(limpan, 3, stdin);
    printf("Digite o valor para Nome da Cidade: ");
    fgets(cid1, 20, stdin);
    cid1[strcspn(cid1, "\n")] = 0;
    printf("Digite a População: ");
    scanf("%d", &pop1);
    printf("Digite o valor para Área: ");
    scanf("%f", &area1);
    printf("Digite o valor para PIB: ");
    scanf("%f", &pib1);
    printf("Digite o valor para Número de pontos turísticos: ");
    scanf("%d", &ptur1);

    printf("\nDigite a segunda carta\n");
    printf("Digite o valor para Carta: ");
    scanf("%s", &carta2);
    printf("Digite o valor para Estado: ");
    scanf("%s", &estado2);
    printf("Digite o valor para Código: ");
    scanf("%s", &codigo2);
    fgets(limpan, 3, stdin);
    printf("Digite o valor para Nome da Cidade: ");
    fgets(cid2, 20, stdin);
    cid2[strcspn(cid2, "\n")] = 0;
    printf("Digite a População: ");
    scanf("%d", &pop2);
    printf("Digite o valor para Área: ");
    scanf("%f", &area2);
    printf("Digite o valor para PIB: ");
    scanf("%f", &pib2);
    printf("Digite o valor para Número de pontos turísticos: ");
    scanf("%d", &ptur2);
    // Converte pib por extenso
    long int pibx1 = pib1 * 1000000000; 
    long int pibx2 = pib2 * 1000000000;
    // Calcula densidade populacional
    float dens1 = pop1 / area1;
    float dens2 = pop2 / area2;
    // Calcula PIB per Capita
    float ppc1 = pibx1 / pop1;
    float ppc2 = pibx2 / pop2;
    // Calcula Super Poder
    float spoder1 = pop1 + area1 + pib1 + ptur1 + ppc1 - dens1;
    float spoder2 = pop2 + area2 + pib2 + ptur2 + ppc2 - dens2;

    printf("\nCarta: %s\n", carta1);
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Nome da Cidade: %s\n", cid1);
    printf("População: %d habitantes \n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$%.2f bilhões\n", pib1);
    printf("Número de pontos turisticos: %d\n", ptur1);
    printf("Densidade populacional: %0.2f habitantes por km²\n", dens1);
    printf("PIB per Capita: R$%0.2f\n", ppc1);

    printf("\nCarta: %s\n", carta2);
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", cid2);
    printf("População: %d habitantes \n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f bilhões\n", pib2);
    printf("Número de pontos turisticos: %d\n", ptur2);
    printf("Densidade populacional: %0.2f habitantes por km²\n", dens2);
    printf("PIB per Capita: R$%0.2f\n", ppc2);

    printf("\nComparação de Cartas:\n");
    printf("População: %d\n", pop1 > pop2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", ptur1 > ptur2);
    printf("Densidade Populacional: %d\n", dens1 < dens2);
    printf("PIB per Capita: %d\n", ppc1 > ppc2);
    printf("Super Poder: %d\n", spoder1 > spoder2);

    return 0;
}

