#include <stdio.h>

// Variáveis globais para contar as vendas realizadas e o valor total vendido
int totalVendas = 0;
float valorTotalVendido = 0.0;

// Função para calcular o percentual de desconto com base no valor da compra
float calcularDesconto(float valorCompra) {
    if (valorCompra < 100.0) {
        return 0.0;
    } else if (valorCompra >= 100.0 && valorCompra < 500.0) {
        return 5.0;
    } else if (valorCompra >= 500.0 && valorCompra < 1000.0) {
        return 10.0;
    } else {
        return 15.0;
    }
}

// Função para aplicar o desconto ao valor da compra
float aplicarDesconto(float valor, float percentual) {
    return valor - (valor * percentual / 100);
}

// Função para calcular o valor final da compra com o desconto aplicado
float calcularValorFinal(float valor) {
    float percentualDesconto = calcularDesconto(valor);
    return aplicarDesconto(valor, percentualDesconto);
}

// Função para exibir o resumo da compra
void exibirResumo(float valorOriginal, float percentualDesconto, float valorDesconto, float valorFinal) {
    printf("\nResumo da compra:\n");
    printf("Valor original: R$ %.2f\n", valorOriginal);
    printf("Percentual de desconto: %.2f%%\n", percentualDesconto);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final com desconto: R$ %.2f\n", valorFinal);
}

// Função principal
int main() {
    float valorCompra, valorDesconto, valorFinal;
    
    // Solicitar o valor da compra
    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valorCompra);

    // Calcular o desconto, o valor do desconto e o valor final
    float percentualDesconto = calcularDesconto(valorCompra);
    valorDesconto = valorCompra * percentualDesconto / 100;
    valorFinal = calcularValorFinal(valorCompra);
    
    // Atualizar as variáveis globais
    totalVendas++;
    valorTotalVendido += valorCompra;

    // Exibir o resumo da compra
    exibirResumo(valorCompra, percentualDesconto, valorDesconto, valorFinal);

    // Exibir o total de vendas realizadas e o valor total vendido
    printf("\nTotal de vendas realizadas: %d\n", totalVendas);
    printf("Valor total vendido: R$ %.2f\n", valorTotalVendido);

    return 0;
}
