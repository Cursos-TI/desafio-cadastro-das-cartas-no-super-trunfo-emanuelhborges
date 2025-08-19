#include <stdio.h>
#include <string.h>

    // Usei fgets(limpan, 3, stdin) pra limpar o \n que é gerado no scanf, caso contrario não seria possivel usar fgets após scanf

int main() {
    char carta1[3];
    char carta2[3];
    char estado1[4];
    char estado2[4];
    char codigo1[5];
    char codigo2[5];
    char cid1[20];
    char cid2[20];
    char limpan[3];
    int pop1;
    int pop2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pturisticos1;
    int pturisticos2;

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
    printf("Digite o valor para PIB(digite o valor completo): ");
    scanf("%f", &pib1);
    printf("Digite o valor para Número de pontos turísticos: ");
    scanf("%d", &pturisticos1);

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
    printf("Digite o valor para PIB(digite o valor completo): ");
    scanf("%f", &pib2);
    printf("Digite o valor para Número de pontos turísticos: ");
    scanf("%d", &pturisticos2);

    float dens1 = pop1 / area1;
    float dens2 = pop2 / area2;

    float ppc1 = pib1 / pop1;
    float ppc2 = pib2 / pop2;

    printf("\nA densidade populacional de %s é: %0.2f habitantes por km²\nA densidade populacional de %s é: %0.2f habitantes por km²\n", cid1, dens1, cid2, dens2);
    printf("\nO PIB per Capita de %s é: R$%0.2f\nO PIB per Capita de %s é: R$%0.2f\n", cid1, ppc1, cid2, ppc2);

    return 0;
}
