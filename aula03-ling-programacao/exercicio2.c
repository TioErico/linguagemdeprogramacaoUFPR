/*Ler 5 números e mostrar apenas os números maiores que 10.*/

#include <stdio.h>

int main(void) {
    int numeros[5];
    int i, encontrou = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        if (scanf("%d", &numeros[i]) != 1) {
            fprintf(stderr, "Entrada inválida.\n");
            return 1;
        }
    }

    printf("\nNúmeros maiores que 10:\n");
    for (i = 0; i < 5; i++) {
        if (numeros[i] > 10) {
            printf("%d\n", numeros[i]);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum número é maior que 10.\n");
    }

    return 0;
}
