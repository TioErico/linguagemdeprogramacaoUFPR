#include <stdio.h>
#include <string.h>
#include <ctype.h>

void contarCaracteres(char str[]) {
    int comprimento = strlen(str);
    printf("A string possui %d caracteres.\n", comprimento);
}

void inverterString(char str[]) {
    int i = 0, j = strlen(str) - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("String invertida: %s\n", str);
}

void converterMaiuscula(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
    printf("String em maiúscula: %s\n", str);
}

void converterMinuscula(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
    printf("String em minúscula: %s\n", str);
}

int contarPalavras(char str[]) {
    int palavras = 0;
    int i = 0;
    while (str[i] != '\0') {
        if ((i == 0 || str[i-1] == ' ') && str[i] != ' ') {
            palavras++;
        }
        i++;
    }
    return palavras;
}

int main() {
    char str[101];
    int opcao;
    
    // Menu de opções
    do {
        printf("Digite uma string (máximo 100 caracteres): ");
        fgets(str, 101, stdin);
        str[strcspn(str, "\n")] = 0;  // Remove o caractere de nova linha

        printf("\n=== MANIPULADOR DE STRINGS ===\n");
        printf("1. Contar caracteres\n");
        printf("2. Inverter string\n");
        printf("3. Converter maiúscula\n");
        printf("4. Converter minúscula\n");
        printf("5. Contar palavras\n");
        printf("6. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        getchar();  // Para limpar o buffer do enter

        switch(opcao) {
            case 1:
                contarCaracteres(str);
                break;
            case 2:
                inverterString(str);
                break;
            case 3:
                converterMaiuscula(str);
                break;
            case 4:
                converterMinuscula(str);
                break;
            case 5:
                printf("A string possui %d palavras.\n", contarPalavras(str));
                break;
            case 6:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 6);

    return 0;
}