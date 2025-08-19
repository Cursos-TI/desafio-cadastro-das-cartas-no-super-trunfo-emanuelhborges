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
    char nomecidade1[20];
    char nomecidade2[20];
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
    fgets(nomecidade1, 20, stdin);
    nomecidade1[strcspn(nomecidade1, "\n")] = 0;
    printf("Digite a População: ");
    scanf("%d", &pop1);
    printf("Digite o valor para Área: ");
    scanf("%f", &area1);
    printf("Digite o valor para PIB: ");
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
    fgets(nomecidade2, 20, stdin);
    nomecidade2[strcspn(nomecidade2, "\n")] = 0;
    printf("Digite a População: ");
    scanf("%d", &pop2);
    printf("Digite o valor para Área: ");
    scanf("%f", &area2);
    printf("Digite o valor para PIB: ");
    scanf("%f", &pib2);
    printf("Digite o valor para Número de pontos turísticos: ");
    scanf("%d", &pturisticos2);

    printf("\nCarta: %s\n", carta1);
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d habitantes \n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$%.2f bilhões\n", pib1);
    printf("Número de pontos turisticos: %d\n", pturisticos1);

    printf("\nCarta: %s\n", carta2);
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d habitantes \n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f bilhões\n", pib2);
    printf("Número de pontos turisticos: %d\n", pturisticos2);

    return 0;
}
