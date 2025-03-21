#include <stdio.h>

int main() {
    // Tabuleiro principal 10x10
    int tabuleiro[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; // Inicializa com 0
        }
    }

    // Matriz de habilidade: Cone (5x5)
    int cone[5][5] = {
        {0, 0, 3, 0, 0},
        {0, 3, 3, 3, 0},
        {3, 3, 3, 3, 3},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    // Matriz de habilidade: Cruz (5x5)
    int cruz[5][5] = {
        {0, 0, 3, 0, 0},
        {0, 0, 3, 0, 0},
        {3, 3, 3, 3, 3},
        {0, 0, 3, 0, 0},
        {0, 0, 3, 0, 0}
    };

    // Matriz de habilidade: Octaedro (5x5)
    int octaedro[5][5] = {
        {0, 0, 3, 0, 0},
        {0, 3, 3, 3, 0},
        {3, 3, 3, 3, 3},
        {0, 3, 3, 3, 0},
        {0, 0, 3, 0, 0}
    };

    // Exibe a matriz Cone
    printf("Matriz Cone:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    // Exibe a matriz Cruz
    printf("\nMatriz Cruz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    // Exibe a matriz Octaedro
    printf("\nMatriz Octaedro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    return 0;
}