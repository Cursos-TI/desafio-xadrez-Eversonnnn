#include <stdio.h>

int main() {
    // ================================
    // Movimento da TORRE - FOR
    // ================================
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ================================
    // Movimento do BISPO - WHILE
    // ================================
    int casasBispo = 5;
    int i = 1;
    printf("\nMovimento do Bispo:\n");
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // ================================
    // Movimento da RAINHA - DO-WHILE
    // ================================
    int casasRainha = 8;
    int j = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    // ================================
    // Movimento do CAVALO - FOR + WHILE (em "L")
    // ================================
    int passosVerticais = 2;
    int passosHorizontais = 1;

    printf("\nMovimento do Cavalo:\n");

    // Loop FOR externo para os movimentos verticais (2x "Baixo")
    for (int v = 1; v <= passosVerticais; v++) {
        printf("Baixo\n");

        // Loop WHILE interno para o movimento horizontal (1x "Esquerda")
        if (v == passosVerticais) { // só realiza o horizontal após os dois para baixo
            int h = 0;
            while (h < passosHorizontais) {
                printf("Esquerda\n");
                h++;
            }
        }
    }

    return 0;
}
