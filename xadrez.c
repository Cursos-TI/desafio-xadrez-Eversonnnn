#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (5 casas para a direita)
    // Utilizando estrutura de repetição: for
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Simulação do movimento do Bispo (5 casas na diagonal Cima Direita)
    // Utilizando estrutura de repetição: while
    int casasBispo = 5;
    int i = 1;
    printf("\nMovimento do Bispo:\n");
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Simulação do movimento da Rainha (8 casas para a esquerda)
    // Utilizando estrutura de repetição: do-while
    int casasRainha = 8;
    int j = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}
