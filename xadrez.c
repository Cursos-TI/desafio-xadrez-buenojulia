#include <stdio.h>

int main() {

    // Número de casas que cada peça vai se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // TORRE -> Movimento: 5 casas para a DIREITA
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d casa)\n", i);
    }
    printf("\n");

    
    // BISPO -> Movimento: 5 casas na diagonal para CIMA e DIREITA
    printf("Movimento do BISPO:\n");
    int j = 1;
    while (j <= casasBispo) {
        printf("Cima e Direita (%d casa)\n", j);
        j++;
    }
    printf("\n");

    
    // RAINHA ->  Movimento: 8 casas para a ESQUERDA
    printf("Movimento da RAINHA:\n");
    int k = 1;
    do {
        printf("Esquerda (%d casa)\n", k);
        k++;
    } while (k <= casasRainha);
    printf("\n");

    return 0;
}
