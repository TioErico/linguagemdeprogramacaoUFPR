/*Matriz 2×3 - contar quantos elementos são maiores que 5*/

#include <stdio.h>

int main(void) {
    int m[2][3];
    int i, j, cont = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            if (m[i][j] > 5) {
                cont++;
            }
        }
    }

    printf("Quantidade de elementos maiores que 5: %d\n", cont);
    return 0;
}