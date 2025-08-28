/*Criar um programa que leia 4 números, armazene em um vetor e calcule a média.*/

#include <stdio.h>

int main(void) {
    double numeros[4];
    double soma, media;

    printf("Digite o 1º número: ");
    scanf("%lf", &numeros[0]);

    printf("Digite o 2º número: ");
    scanf("%lf", &numeros[1]);

    printf("Digite o 3º número: ");
    scanf("%lf", &numeros[2]);

    printf("Digite o 4º número: ");
    scanf("%lf", &numeros[3]);

    soma  = numeros[0] + numeros[1] + numeros[2] + numeros[3];
    media = soma / 4.0;

    printf("\nVocê digitou: %.2f, %.2f, %.2f, %.2f\n",
           numeros[0], numeros[1], numeros[2], numeros[3]);
    printf("Média = %.2f\n", media);

    return 0;
}
