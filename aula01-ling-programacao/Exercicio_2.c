/* * Criar uma calculadora que: 
* 1. Leia dois números 
* 2. Realize as quatro operações básicas 
* 3. Exiba os resultados formatados */

#include <stdio.h>

int main() {
    int num1;
    int num2;

    printf("\nBem vindo a calculadora!\n");
    printf("\nDigite um numero: ");
    scanf("%d", &num1);

    printf("\nDigite outro numero: ");
    scanf("%d", &num2);

    printf("\nEstes são os resultados:\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);

    return 0;
}