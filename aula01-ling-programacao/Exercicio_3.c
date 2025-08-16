/* * Criar um conversor que: 
* 1. Converta temperatura (Celsius para Fahrenheit) 
* 2. Converta distância (metros para quilômetros) 
* 3. Converta peso (quilos para libras) */

#include <stdio.h>

int main() {
    int operacao;
    int temperatura;
    int distancia;
    int peso;

    printf("\nBem vindo ao conversor de medidas!\n");
    printf("\n1. Temperatura (Celsius para Fahrenheit);\n");
    printf("2. Distância (metros para quilômetros);\n");
    printf("3. Peso (quilos para libras).\n");

    printf("\nSelecione uma operação acima: ");
    scanf("%d", &operacao);

    if (operacao == 1) {
        printf("\nInsira o valor em graus Celsius a ser convertido: ");
        scanf("%d", &temperatura);
        printf("Resultado = %d °F\n", (temperatura * 9/5) + 32);
    } else if (operacao == 2) {
        printf("\nInsira o valor em mestros a ser convertido: ");
        scanf("%d", &distancia);
        printf("Resultado = %d Km\n", distancia / 1000);
    } else if (operacao == 3) {
        printf("\nInsira o valor em quilos a ser convertidos: ");
        scanf("%d", &peso);
        printf("Resultado = %.2f Libras\n", peso * 2.2046);

    } else {
        printf("Operacao invalida.\n");
    }

    return 0;
}