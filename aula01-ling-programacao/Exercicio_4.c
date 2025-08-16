/* * Programa que: 
* 1. Leia 4 notas de um aluno 
* 2. Calcule a média 
* 3. Determine se foi aprovado (média >= 7.0) */

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4;
    float media;

    printf("\nCalcule se foi aprovado ou nao no semestre!\n");

    printf("Insira sua primeira nota: ");
    scanf("%f", &nota1);
    printf("\nInsira sua segunda nota: ");
    scanf("%f", &nota2);
    printf("\nInsira sua terceira nota: ");
    scanf("%f", &nota3);
    printf("\nInsira sua quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("\nMedia: %.2f", media);
    
    if (media >= 7.0) {
        printf("\nParabens! Voce foi aprovado.\n");
    } else {
        printf("\nReprovado. Nota abaixo da media\n");
    }

    return 0;
}
