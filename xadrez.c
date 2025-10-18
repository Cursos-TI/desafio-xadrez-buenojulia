#include <stdio.h>

int main() {
    
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

    
    // CAVALO ->  Movimento: 2 casas para BAIXO e 1 para ESQUERDA
     printf("Movimento do CAVALO:\n");

    int casasBaixo = 2;
    int casasEsquerda = 1;

    for (int i = 1; i <= casasBaixo; i++) {   // Loop externo: movimenta 2 casas para baixo
        printf("Baixo (%d casa)\n", i);

        int j = 1;
        while (j <= casasEsquerda && i == casasBaixo) {  // Loop interno: só executa após as 2 descidas
            printf("Esquerda (%d casa)\n", j);
            j++;
        }
    }

    return 0;
}
