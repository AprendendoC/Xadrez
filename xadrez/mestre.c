#include <stdio.h>

// Função recursiva para mover a Torre para a direita
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita %d\n", 6 - passos);
    moverTorre(passos - 1);
}

// Função recursiva para mover o Bispo na diagonal
void moverBispo(int passos, int atual) {
    if (passos == 0) return;
    printf("Cima, Direita %d\n", atual);
    moverBispo(passos - 1, atual + 1);
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda %d\n", 9 - passos);
    moverRainha(passos - 1);
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(5, 1);
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Movimento do Cavalo: 2 casas para cima, 1 para a direita (usando loops aninhados)
    printf("Movimento do Cavalo:\n");
    for (int i = 1; i <= 2; i++) {
        printf("Cima %d\n", i);
    }
    for (int j = 1; j <= 1; j++) {
        printf("Direita %d\n", j);
    }

 return 0;
}