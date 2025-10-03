#include <stdio.h>

void preencherArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void exibirArray(const int arr[], int tamanho) {
    printf("Array original: [");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", arr[i]);
        if (i < tamanho - 1) printf(", ");
    }
    printf("]\n");
}

int maiorValor(int arr[], int tamanho) {
    int maior = arr[0];
    for (int i = 1; i < tamanho; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}

int menorValor(int arr[], int tamanho) {
    int menor = arr[0];
    for (int i = 1; i < tamanho; i++) {
        if (arr[i] < menor) {
            menor = arr[i];
        }
    }
    return menor;
}

float calcularMedia(int arr[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += arr[i];
    }
    return (float)soma / tamanho;
}

void ordenarArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[10];
    int tamanho = 10;

    // Preencher o array
    printf("Digite 10 números:\n");
    preencherArray(arr, tamanho);

    // Exibir o array
    exibirArray(arr, tamanho);

    // Encontrar o maior e menor valor
    int maior = maiorValor(arr, tamanho);
    int menor = menorValor(arr, tamanho);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    // Calcular a média
    float media = calcularMedia(arr, tamanho);
    printf("Média: %.2f\n", media);

    // Ordenar o array
    ordenarArray(arr, tamanho);
    printf("Array ordenado: [");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", arr[i]);
        if (i < tamanho - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}