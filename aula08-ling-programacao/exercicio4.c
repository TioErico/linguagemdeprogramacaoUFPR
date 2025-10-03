#include <stdio.h>

#define ALUNOS 5
#define DISCIPLINAS 4

void inserirNotas(float notas[ALUNOS][DISCIPLINAS]) {
    for (int i = 0; i < ALUNOS; i++) {
        printf("Digite as notas do aluno %d:\n", i + 1);
        for (int j = 0; j < DISCIPLINAS; j++) {
            printf("Nota da disciplina %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }
}

void exibirNotas(float notas[ALUNOS][DISCIPLINAS]) {
    printf("\nNotas dos alunos:\n");
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d: ", i + 1);
        for (int j = 0; j < DISCIPLINAS; j++) {
            printf("%.2f ", notas[i][j]);
        }
        printf("\n");
    }
}

float calcularMediaAluno(float notas[ALUNOS][DISCIPLINAS], int aluno) {
    float soma = 0;
    for (int i = 0; i < DISCIPLINAS; i++) {
        soma += notas[aluno][i];
    }
    return soma / DISCIPLINAS;
}

float calcularMediaDisciplina(float notas[ALUNOS][DISCIPLINAS], int disciplina) {
    float soma = 0;
    for (int i = 0; i < ALUNOS; i++) {
        soma += notas[i][disciplina];
    }
    return soma / ALUNOS;
}

void calcularSituacaoAluno(float notas[ALUNOS][DISCIPLINAS], int aluno) {
    float media = calcularMediaAluno(notas, aluno);
    if (media >= 6.0) {
        printf("Aluno %d: Aprovado com media %.2f\n", aluno + 1, media);
    } else {
        printf("Aluno %d: Reprovado com media %.2f\n", aluno + 1, media);
    }
}

void exibirRelatorioFinal(float notas[ALUNOS][DISCIPLINAS]) {
    printf("\nRelatorio final:\n");
    for (int i = 0; i < ALUNOS; i++) {
        calcularSituacaoAluno(notas, i);
    }
}

int main() {
    float notas[ALUNOS][DISCIPLINAS];
    int opcao;
    do {
        printf("\n=== MENU ===\n");
        printf("1. Inserir notas\n");
        printf("2. Exibir notas\n");
        printf("3. Calcular média por aluno\n");
        printf("4. Calcular média por disciplina\n");
        printf("5. Exibir aprovados/reprovados\n");
        printf("6. Sair\n");
        printf("Escolha a opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                inserirNotas(notas);
                break;
            case 2:
                exibirNotas(notas);
                break;
            case 3: {
                int aluno;
                printf("Digite o número do aluno (1 a 5): ");
                scanf("%d", &aluno);
                if (aluno >= 1 && aluno <= 5) {
                    printf("Média do aluno %d: %.2f\n", aluno, calcularMediaAluno(notas, aluno - 1));
                } else {
                    printf("Aluno inválido!\n");
                }
                break;
            }
            case 4: {
                int disciplina;
                printf("Digite o número da disciplina (1 a 4): ");
                scanf("%d", &disciplina);
                if (disciplina >= 1 && disciplina <= 4) {
                    printf("Média da disciplina %d: %.2f\n", disciplina, calcularMediaDisciplina(notas, disciplina - 1));
                } else {
                    printf("Disciplina inválida!\n");
                }
                break;
            }
            case 5:
                exibirRelatorioFinal(notas);
                break;
            case 6:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 6);

    return 0;
}