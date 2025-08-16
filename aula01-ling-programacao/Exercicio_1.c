/* * Criar um programa que: 
* 1. Solicite nome, idade e curso do usuário 
* 2. Exiba uma mensagem de boas-vindas personalizada 
* 3. Calcule em que ano a pessoa nasceu */

#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    char curso[50];
    int anoAtual;
    int anoNascimento;

    printf("Digite seu nome: ");
    scanf(" %[^\n]", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu curso: ");
    scanf(" %[^\n]", curso);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    anoNascimento = anoAtual - idade;

    printf("\nBem-vindo(a), %s!\n", nome);
    printf("Você está cursando %s.\n", curso);
    printf("Você nasceu em %d.\n", anoNascimento);

    return 0;
}