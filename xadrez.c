#include <stdio.h>

int main() {
    // ---------------- TORRE ----------------
    // A Torre se move em linha reta – vamos simular 5 casas para a direita
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // ---------------- BISPO ----------------
    // O Bispo se move na diagonal – vamos simular 5 casas na diagonal cima-direita
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // ---------------- RAINHA ----------------
    // A Rainha se move em todas as direções – vamos simular 8 casas para a esquerda
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}
