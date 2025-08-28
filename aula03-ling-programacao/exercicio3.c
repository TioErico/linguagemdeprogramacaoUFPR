/*Criar uma matriz 2×2, preenchê-la e encontrar o maior elemento.*/

#include <stdio.h>

int main(void) {
    int m[2][2];
    int i, j, maior;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    maior = m[0][0];
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (m[i][j] > maior) {
                maior = m[i][j];
            }
        }
    }

    printf("Maior elemento: %d\n", maior);
    return 0;
}