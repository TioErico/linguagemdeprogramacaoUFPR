#include <stdio.h>

// Funções de conversão
float celsiusParaFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float fahrenheitParaCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

float celsiusParaKelvin(float celsius) {
    return celsius + 273.15;
}

float kelvinParaCelsius(float kelvin) {
    return kelvin - 273.15;
}

float fahrenheitParaKelvin(float fahrenheit) {
    float celsius = fahrenheitParaCelsius(fahrenheit);
    return celsiusParaKelvin(celsius);
}

float kelvinParaFahrenheit(float kelvin) {
    float celsius = kelvinParaCelsius(kelvin);
    return celsiusParaFahrenheit(celsius);
}

int main() {
    int opcao;
    float valor, resultado;

    do {
        // Exibe o menu
        printf("\nConversor de Temperaturas\n");
        printf("1. Celsius para Fahrenheit\n");
        printf("2. Fahrenheit para Celsius\n");
        printf("3. Celsius para Kelvin\n");
        printf("4. Kelvin para Celsius\n");
        printf("5. Fahrenheit para Kelvin\n");
        printf("6. Kelvin para Fahrenheit\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Caso o usuário opte por sair, o programa é finalizado
        if (opcao == 0) {
            break;
        }

        // Solicita o valor a ser convertido
        if (opcao == 1 || opcao == 2 || opcao == 3) {
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);
        }

        // Processa a conversão com base na escolha
        switch (opcao) {
            case 1:
                resultado = celsiusParaFahrenheit(valor);
                printf("Resultado: %.2f Fahrenheit\n", resultado);
                break;
            case 2:
                resultado = fahrenheitParaCelsius(valor);
                printf("Resultado: %.2f Celsius\n", resultado);
                break;
            case 3:
                resultado = celsiusParaKelvin(valor);
                printf("Resultado: %.2f Kelvin\n", resultado);
                break;
            case 4:
                resultado = kelvinParaCelsius(valor);
                printf("Resultado: %.2f Celsius\n", resultado);
                break;
            case 5:
                resultado = fahrenheitParaKelvin(valor);
                printf("Resultado: %.2f Kelvin\n", resultado);
                break;
            case 6:
                resultado = kelvinParaFahrenheit(valor);
                printf("Resultado: %.2f Fahrenheit\n", resultado);
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    printf("Programa encerrado.\n");
    return 0;
}
