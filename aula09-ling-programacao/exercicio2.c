#include <stdio.h>

// Função para calcular o IMC
float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

// Função para exibir a classificação do IMC
void exibirClassificacao(float imc) {
    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 25.0) {
        printf("Classificacao: Peso normal\n");
    } else if (imc >= 25.0 && imc < 30.0) {
        printf("Classificacao: Sobrepeso\n");
    } else if (imc >= 30.0 && imc < 35.0) {
        printf("Classificacao: Obesidade Grau I\n");
    } else if (imc >= 35.0 && imc < 40.0) {
        printf("Classificacao: Obesidade Grau II\n");
    } else {
        printf("Classificacao: Obesidade Grau III\n");
    }
}

// Função para validar os dados de peso e altura
int validarDados(float peso, float altura) {
    if (peso > 0 && altura > 0) {
        return 1; // Dados válidos
    }
    return 0; // Dados inválidos
}

// Função para calcular o peso ideal
float calcularPesoIdeal(float altura) {
    // IMC ideal da OMS (faixa normal do IMC = 18.5 a 24.9)
    // Vamos usar o centro da faixa (22)
    return 22 * (altura * altura);
}

int main() {
    float peso, altura, imc;

    // Entrada de dados
    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    // Validação dos dados
    if (validarDados(peso, altura)) {
        // Calcular IMC
        imc = calcularIMC(peso, altura);

        // Exibir IMC e classificação
        printf("IMC: %.2f\n", imc);
        exibirClassificacao(imc);

        // Calcular e exibir o peso ideal
        float pesoIdeal = calcularPesoIdeal(altura);
        printf("Peso ideal: %.2f kg\n", pesoIdeal);
    } else {
        printf("Dados invalidos! Peso e altura devem ser positivos.\n");
    }

    return 0;
}
