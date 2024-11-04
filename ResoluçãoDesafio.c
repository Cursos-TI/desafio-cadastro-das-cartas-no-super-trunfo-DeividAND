#include <stdio.h>



int main() {
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int n_pontos_turisticos;

    printf("Informe o código da cidade: ");
    scanf("%s", &cidade);
    printf("Informe a sua população: ");
    scanf("%d", &populacao);
    printf("Informe a sua área: ");
    scanf("%f", &area);
    printf("Informe o PIB: ");
    scanf("%f", &pib);
    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &n_pontos_turisticos);
    
    printf("Código da Cidade - %s \n", cidade);
    printf("População - %d\n", populacao);
    printf("Área - %f\n", area);
    printf("PIB - %f\n", pib);
    printf("Quantidade de Pontos Turísticos - %d\n", n_pontos_turisticos);

    return 0;
}