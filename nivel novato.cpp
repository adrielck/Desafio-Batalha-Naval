#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios

    // Declara uma matriz 5x5 representando o tabuleiro
    int tabuleiro[5][5] = {0};

    // Posicionamento do navio horizontal (por exemplo, tamanho 3)
    int linha_h = 1; // linha onde o navio horizontal será colocado
    int col_inicio_h = 0; // coluna inicial
    int tamanho_h = 3;

    for (int i = 0; i < tamanho_h; i++) {
        tabuleiro[linha_h][col_inicio_h + i] = 1; // marca navio com 1
    }

    // Posicionamento do navio vertical (por exemplo, tamanho 2)
    int coluna_v = 3; // coluna onde o navio vertical será colocado
    int linha_inicio_v = 2; // linha inicial
    int tamanho_v = 2;

    for (int i = 0; i < tamanho_v; i++) {
        tabuleiro[linha_inicio_v + i][coluna_v] = 2; // marca navio com 2
    }

    // Exibe as coordenadas do navio horizontal
    printf("Coordenadas do navio horizontal:\n");
    for (int i = 0; i < tamanho_h; i++) {
        printf("(%d, %d)\n", linha_h, col_inicio_h + i);
    }

    // Exibe as coordenadas do navio vertical
    printf("\nCoordenadas do navio vertical:\n");
    for (int i = 0; i < tamanho_v; i++) {
        printf("(%d, %d)\n", linha_inicio_v + i, coluna_v);
    }

    return 0;
}
