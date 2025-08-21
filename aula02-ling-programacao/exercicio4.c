/*Crie uma calculadora de Índice de Massa Corporal (IMC) que forneça classificação personalizada e 
recomendações baseadas em idade, sexo e resultado do IMC.*/

#include <stdio.h>

int main() {
    float peso, altura, imc;
    int idade;
    char sexo; //Pega texto

    //Solicita o peso do usuário
    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);
    if (peso <= 0) {
        printf("Peso inválido! Deve ser maior que 0.\n");
        return 1;  // Encerra o programa se o peso for inválido
    }

    //Solicita a altura do usuário
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);
    if (altura <= 0) {
        printf("Altura inválida! Deve ser maior que 0.\n");
        return 1;  // Encerra o programa se a altura for inválida
    }

    //Solicita a idade do usuário
    printf("Digite sua idade (em anos): ");
    scanf("%d", &idade);
    if (idade <= 0) {
        printf("Idade inválida! Deve ser maior que 0.\n");
        return 1;  // Encerra o programa se a idade for inválida
    }

    //Solicita o sexo do usuário
    //IMPORTANTE: Deve aceitar em maiúsculo e minúsculo!
    printf("Digite seu sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);  //O espaço antes de %c é para consumir o caractere de nova linha

    // Validação de sexo
    if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
        printf("Sexo inválido! Deve ser M ou F.\n");
        return 1;  // Encerra o programa se o sexo for inválido
    }

    // Calcular IMC
    imc = peso / (altura * altura);  // Fórmula do IMC: peso / (altura^2)
    printf("Seu IMC é: %.2f\n", imc);  // Exibe o IMC com 2 casas decimais

    // Classificar IMC
    if (imc < 18.5) {
        printf("Classificação: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 25.0) {
        printf("Classificação: Peso normal\n");
    } else if (imc >= 25.0 && imc < 30.0) {
        printf("Classificação: Sobrepeso\n");
    } else if (imc >= 30.0 && imc < 35.0) {
        printf("Classificação: Obesidade grau I\n");
    } else if (imc >= 35.0 && imc < 40.0) {
        printf("Classificação: Obesidade grau II\n");
    } else {
        printf("Classificação: Obesidade grau III\n");
    }

    // Recomendações personalizadas
    if (sexo == 'M' || sexo == 'm') {  // Para homens
        if (imc >= 25.0) {
            printf("Recomendação: Exercícios de força são recomendados para homens com sobrepeso ou obesidade.\n");
        }
    } else if (sexo == 'F' || sexo == 'f') {  // Para mulheres
        if (imc >= 25.0) {
            printf("Recomendação: Exercícios aeróbicos são recomendados para mulheres com sobrepeso ou obesidade.\n");
        }
    }

    // Recomendações por idade
    if (idade >= 60 && imc < 18.5) {
        printf("Recomendação: Consulte um geriatra, pois você está abaixo do peso.\n");
    } else if (idade <= 25 && imc >= 30.0) {
        printf("Recomendação: Procure um nutricionista, pois você está com obesidade.\n");
    }

    //Encerra
    return 0;
}
