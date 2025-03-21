#include <stdio.h>

int main(){

int tabuleiro[10][10]; // Tabuleiro 10x10
for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
    {
        tabuleiro[i][j] = 0;
    }
    
}

// Posiciona o navio horizontal
int linha_horizontal = 2; // Linha fixa para o navio horizontal
int coluna_inicial_horizontal = 3; // Coluna inicial
for (int j = coluna_inicial_horizontal; j < coluna_inicial_horizontal + 3; j++) {
    tabuleiro[linha_horizontal][j] = 3; // Marca as posições do navio com 3
}

// Posiciona o navio vertical
int coluna_vertical = 5; // Coluna fixa para o navio vertical
int linha_inicial_vertical = 6; // Linha inicial
for (int i = linha_inicial_vertical; i < linha_inicial_vertical + 3; i++) {
    tabuleiro[i][coluna_vertical] = 3; // Marca as posições do navio com 3
}

// Posiciona o primeiro navio diagonal (linha e coluna aumentam simultaneamente)
int linha_inicial_diagonal1 = 0; // Linha inicial
int coluna_inicial_diagonal1 = 0; // Coluna inicial
for (int i = 0; i < 3; i++) {
    int linha = linha_inicial_diagonal1 + i;
    int coluna = coluna_inicial_diagonal1 + i;
    if (linha < 10 && coluna < 10 && tabuleiro[linha][coluna] == 0) {
        tabuleiro[linha][coluna] = 3; // Marca as posições do navio com 3
    }
}

// Posiciona o segundo navio diagonal (linha aumenta, coluna diminui)
int linha_inicial_diagonal2 = 7; // Linha inicial
int coluna_inicial_diagonal2 = 9; // Coluna inicial
for (int i = 0; i < 3; i++) {
    int linha = linha_inicial_diagonal2 + i;
    int coluna = coluna_inicial_diagonal2 - i;
    if (linha < 10 && coluna >= 0 && tabuleiro[linha][coluna] == 0) {
        tabuleiro[linha][coluna] = 3; // Marca as posições do navio com 3
    }
}

// Exibe o tabuleiro
printf("Tabuleiro:\n");
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
}

}