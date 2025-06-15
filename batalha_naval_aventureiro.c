
#include <stdio.h>

// Função para exibir uma matriz
void exibirMatriz(int matriz[10][10], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Gera tabuleiro com navios, incluindo diagonais
void gerarTabuleiroAventureiro(int tabuleiro[10][10]) {
    // Inicializa com 0
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            tabuleiro[i][j] = 0;

    // Posiciona navios na horizontal
    for (int j = 2; j < 6; j++)
        tabuleiro[0][j] = 3;

    // Posiciona navios na vertical
    for (int i = 2; i < 6; i++)
        tabuleiro[i][0] = 3;

    // Posiciona navio na diagonal principal
    for (int i = 0; i < 4; i++)
        tabuleiro[i][i] = 3;

    // Posiciona navio na diagonal secundária
    for (int i = 0; i < 4; i++)
        tabuleiro[i][9 - i] = 3;
}

int main() {
    int tabuleiro[10][10];
    gerarTabuleiroAventureiro(tabuleiro);
    printf("Tabuleiro - Nível Aventureiro:\n");
    exibirMatriz(tabuleiro, 10);
    return 0;
}
