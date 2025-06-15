
#include <stdio.h>

// Exibe matriz 5x5
void exibirMatriz(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Habilidade Cone
void habilidadeCone(int matriz[5][5]) {
    int cone[5][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            matriz[i][j] = cone[i][j];
}

// Habilidade Cruz
void habilidadeCruz(int matriz[5][5]) {
    int cruz[5][5] = {
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            matriz[i][j] = cruz[i][j];
}

// Habilidade Octaedro
void habilidadeOctaedro(int matriz[5][5]) {
    int octaedro[5][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {0,0,1,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            matriz[i][j] = octaedro[i][j];
}

int main() {
    int habilidade[5][5];

    printf("Habilidade: Cone\n");
    habilidadeCone(habilidade);
    exibirMatriz(habilidade);

    printf("\nHabilidade: Cruz\n");
    habilidadeCruz(habilidade);
    exibirMatriz(habilidade);

    printf("\nHabilidade: Octaedro\n");
    habilidadeOctaedro(habilidade);
    exibirMatriz(habilidade);

    return 0;
}
