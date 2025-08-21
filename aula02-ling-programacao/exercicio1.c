/*Desenvolva um programa que simule o sistema de pontuação de um videogame.
O programa deve permitir que o usuário insira a pontuação inicial de um jogador e
simule diferentes eventos que modificam essa pontuação usando operadores aritméticos e de atribuição.*/

#include <stdio.h>

int main() {
    int pontuacao_inicial;
    int pontuacao_final;

    //Inserir a pontuação inicial do jogador
    printf("Digite a pontuação inicial do jogador: ");
    scanf("%d", &pontuacao_inicial);

    //Verifica se a pontuação inicial é positiva
    if (pontuacao_inicial <= 0) {
        printf("A pontuação inicial deve ser positiva.\n");
        return 1;  //Encerra o programa se a pontuação inicial não for válida
    }

    //Atribui a pontuação inicial a variável pontuacao_final
    pontuacao_final = pontuacao_inicial;

    //Evento 1: Ganhou uma fase (+50 pontos)
    pontuacao_final += 50;
    printf("Pontuação após ganhar uma fase: %d\n", pontuacao_final);

    //Evento 2: Coletou item especial (*2)
    pontuacao_final *= 2;
    printf("Pontuação após coletar item especial: %d\n", pontuacao_final);

    //Evento 3: Perdeu uma vida (-30 pontos)
    pontuacao_final -= 30;
    printf("Pontuação após perder uma vida: %d\n", pontuacao_final);

    //Evento 4: Bônus de tempo (+15 pontos)
    pontuacao_final += 15;
    printf("Pontuação após bônus de tempo: %d\n", pontuacao_final);

    //Evento 5: Penalidade por dificuldade (/3)
    pontuacao_final /= 3;
    printf("Pontuação após penalidade por dificuldade: %d\n", pontuacao_final);

    //Evento 6: Bônus final (+100 pontos)
    pontuacao_final += 100;
    printf("Pontuação após bônus final: %d\n", pontuacao_final);

    //Exibir a pontuação final
    printf("Pontuação final: %d\n", pontuacao_final);

    //Calcular e exibir a diferença entre a pontuação inicial e final
    int diferenca = pontuacao_final - pontuacao_inicial;
    printf("Diferença entre a pontuação inicial e final: %d\n", diferenca);

    //Encerra o programa
    return 0;
}
