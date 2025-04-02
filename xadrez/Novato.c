#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita (usando for)
        printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita %d\n", i);
    }
        printf("\n");

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (usando while)
        printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima, Direita %d\n", j);
        j++;
    }
        printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
        printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda %d\n", k);
        k++;
    } while (k <= 8);
    
    // Movimento do Cavalo: 2 casas para baixo, 1 para a esquerda (usando loops aninhados)
    printf("Movimento do Cavalo:\n");
    for (int l = 1; l <= 2; l++) {
        printf("Baixo %d\n", l);
    }
    int m = 1;
    while (m <= 1) {
        printf("Esquerda %d\n", m);
        m++;
    }

    return 0;
}