/*Crie um programa que calcule a média de um estudante com base em três notas e determine seu conceito final. 
O programa também deve verificar se o aluno está aprovado considerando média e frequência.*/

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media; //aceita decimal
    int frequencia; //somente numeros inteiros

    //Solicita o valor das notas e da frequencia e verifica se são válidas
    do {
        printf("Digite sua primeira nota (0 a 10): ");
        scanf("%f", &nota1);
        if (nota1 < 0 || nota1 > 10) {
            printf("Nota inválida! A nota deve estar entre 0 e 10.\n");
        }
    } while (nota1 < 0 || nota1 > 10); //Repete até ser válido

    do {
        printf("Digite sua segunda nota (0 a 10): ");
        scanf("%f", &nota2);
        if (nota2 < 0 || nota2 > 10) {
            printf("Nota inválida! A nota deve estar entre 0 e 10.\n");
        }
    } while (nota2 < 0 || nota2 > 10);

    do {
        printf("Digite sua terceira nota (0 a 10): ");
        scanf("%f", &nota3);
        if (nota3 < 0 || nota3 > 10) {
            printf("Nota inválida! A nota deve estar entre 0 e 10.\n");
        }
    } while (nota3 < 0 || nota3 > 10);

    do {
        printf("Digite sua frequencia (0 a 100): ");
        scanf("%d", &frequencia);
        if (frequencia < 0 || frequencia > 100) {
            printf("Frequência inválida! A frequencia deve estar entre 0 e 100.\n");
        }
    } while (frequencia < 0 || frequencia > 100);

    //Calcula a média
    media = (nota1 + nota2 + nota3) / 3;

    //Exibe a média calculada e a porcentagem de frequencia
    printf("Sua média: %.2f\n", media);
    printf("Sua frequência: %d %%\n", frequencia);

    //Verifica qual o conceito do aluno
    if (media >= 9) {
        printf("Seu conceito: A\n");
    } else if (media >= 7 && media < 9) {
        printf("Seu conceito: B\n");
    } else if (media >= 5 && media < 7) {
        printf("Seu conceito: C\n");
    } else if (media < 5) {
        printf("Seu conceito: D\n");
    }

    //Verifica se foi aprovado ou reprovado e exibe o motivo
    //IMPORTATE! Aqueles que possuem mais parâmetros para verificar como "média E frequencia" devem ser verificados PRIMEIRO,
    //pois o if para de verificar assim que encontra uma verdade. Isso interfere no resultado mostrado.
    if (media < 5 && frequencia < 75) {
        printf("Reprovado por nota e por frequência!\n");
    } else if (media >= 5 && frequencia >= 75) {
        printf("Aprovado!\n");
    } else if (media < 5) {
        printf("Reprovado por nota!\n");
    } else if (frequencia < 75) {
        printf("Reprovado por frequência\n");
    }

    //Encerra
    return 0;
}