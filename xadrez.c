#include <stdio.h>

// ---------------- FUNÇÕES RECURSIVAS ----------------

// Movimento recursivo da Torre para a direita
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Movimento recursivo da Rainha para a esquerda
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento recursivo do Bispo com loops aninhados para diagonal cima-direita
void moverBispo(int casas) {
    if (casas <= 0) return;

    for (int i = 0; i < 1; i++) { // Movimento vertical
        for (int j = 0; j < 1; j++) { // Movimento horizontal
            printf("Cima Direita\n");
        }
    }
    moverBispo(casas - 1);
}

int main() {
    // ---------------- TORRE ----------------
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // ---------------- BISPO ----------------
    int casasBispo = 5;
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    // ---------------- RAINHA ----------------
    int casasRainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // ---------------- CAVALO ----------------
    // Duas casas para cima, uma para a direita (em "L")
    // Usando loops aninhados com múltiplas condições
    printf("\nMovimento do Cavalo:\n");

    int direcaoVertical = 2;
    int direcaoHorizontal = 1;

    for (int i = 0; i < 3; i++) { // loop externo com múltiplos testes
        if (i >= direcaoVertical) continue;

        printf("Cima\n");

        for (int j = 0; j < 2; j++) { // loop interno com break
            if (j >= direcaoHorizontal) break;

            if (i == 1 && j == 0) {
                printf("Direita\n");
            }
        }
    }

    return 0;
}
