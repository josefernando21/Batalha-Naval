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

// Exibe o tabuleiro
printf("Tabuleiro:\n");
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
}



}