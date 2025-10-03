#include <stdio.h>

void mostrarMenu() {
    printf("=== CALCULADORA ===\n");
    printf("1. Somar\n");
    printf("2. Subtrair\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. Sair\n");
}

void somar(float num1, float num2) {
    printf("Resultado: %.2f\n", num1 + num2);
}

void subtrair(float num1, float num2) {
    printf("Resultado: %.2f\n", num1 - num2);
}

void multiplicar(float num1, float num2) {
    printf("Resultado: %.2f\n", num1 * num2);
}

void dividir(float num1, float num2) {
    if (num2 != 0) {
        printf("Resultado: %.2f\n", num1 / num2);
    } else {
        printf("Erro: Divisão por zero!\n");
    }
}

int main() {
    int opcao;
    float num1, num2;

    do {
        mostrarMenu();
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
        }

        switch (opcao) {
            case 1:
                somar(num1, num2);
                break;
            case 2:
                subtrair(num1, num2);
                break;
            case 3:
                multiplicar(num1, num2);
                break;
            case 4:
                dividir(num1, num2);
                break;
            case 5:
                printf("Saindo da calculadora...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 5);

    return 0;
}
