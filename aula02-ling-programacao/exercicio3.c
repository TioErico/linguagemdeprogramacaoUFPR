/* Desenvolva um simulador de caixa eletrônico que permita ao usuário realizar operações bancárias básicas. 
O sistema deve manter o controle do saldo e validar todas as operações.*/

#include <stdio.h>

float saldo = 1000.00; // Saldo inicial

//Função para ver seu saldo atual
void consultar_saldo() {
    printf("Seu saldo atual é: R$ %.2f\n", saldo);
}

//Função para fazer um depósito
void realizar_deposito() {
    float deposito;
    printf("Digite o valor para depósito: R$ ");
    scanf("%f", &deposito);
    
    if (deposito < 0.01) {
        printf("Valor mínimo para depósito é R$ 0,01.\n");
    } else {
        saldo += deposito;
        printf("Depósito realizado com sucesso! Seu novo saldo é: R$ %.2f\n", saldo);
    }
}

//Função para realizar um saque
void realizar_saque() {
    float saque;
    printf("Digite o valor para saque: R$ ");
    scanf("%f", &saque);
    
    if (saque > 500.00) {
        printf("O valor máximo de saque por operação é R$ 500,00.\n");
    } else if (saque > saldo) {
        printf("Saldo insuficiente para realizar o saque.\n");
    } else {
        saldo -= saque;
        printf("Saque de R$ %.2f realizado com sucesso! Seu novo saldo é: R$ %.2f\n", saque, saldo);
    }
}

//Função para realizar uma transferencia
void transferencia() {
    float valor, taxa;
    printf("Digite o valor para transferência: R$ ");
    scanf("%f", &valor);
    
    if (valor > saldo) {
        printf("Saldo insuficiente para realizar a transferência.\n");
    } else {
        taxa = (valor * 0.01); //Cobra uma taxa para transferir!
        if (taxa < 2.00) {
            taxa = 2.00;  //Taxa mínima de R$ 2,00
        }
        saldo -= valor + taxa; //Subtrai o valor da transferência e a taxa
        printf("Transferência de R$ %.2f realizada com sucesso!\n", valor);
        printf("Taxa de transferência: R$ %.2f\n", taxa);
        printf("Seu novo saldo é: R$ %.2f\n", saldo);
    }
}

//Só chamar todas as funções aqui
int main() {
    int opcao;
    
    do {
        printf("\nBem-vindo ao caixa eletrônico! Selecione uma opção abaixo:\n");
        printf("1. Consultar saldo\n");
        printf("2. Realizar depósito\n");
        printf("3. Realizar saque\n");
        printf("4. Transferir entre contas\n");
        printf("5. Sair\n");
        printf(">");
        scanf("%d", &opcao);
        
        //Vai até a função dependendo da resposta
        switch(opcao) {
            case 1: //Caso seja 1
                consultar_saldo(); //vai até a função
                break; //Interrompe a execução do bloco de código do switch e sair dele, evitando que o programa continue executando os outros casos abaixo do escolhido.
            case 2:
                realizar_deposito();
                break;
            case 3:
                realizar_saque();
                break;
            case 4:
                transferencia();
                break;
            case 5:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while(opcao != 5); //Diz que é invalido enquanto for diferente das opções possíveis
    
    //Encerra
    return 0;
}
