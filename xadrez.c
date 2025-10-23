#include <stdio.h>

// TORRE: movimenta horizontalmente (para a direita)
void moverTorre(int passo, int limite) {
    if (passo > limite) return; 
    printf("Direita (%d casa)\n", passo);
    moverTorre(passo + 1, limite); 
}

// BISPO: movimenta diagonalmente (para cima e direita)
void moverBispo(int linha, int limiteVertical, int limiteHorizontal) {
    if (linha > limiteVertical) return; 

    for (int coluna = 1; coluna <= limiteHorizontal; coluna++) {
        printf("Cima e Direita (Passo V:%d, H:%d)\n", linha, coluna);
    }

    moverBispo(linha + 1, limiteVertical, limiteHorizontal);
}

// RAINHA: movimenta em linha reta (para a esquerda)
void moverRainha(int passo, int limite) {
    if (passo > limite) return; 
    printf("Esquerda (%d casa)\n", passo);
    moverRainha(passo + 1, limite); 
}


// CAVALO: Movimento em "L" → duas casas para cima, uma para a direita
void moverCavalo() {
    printf("Movimento do CAVALO:\n");

    int casasCima = 2;
    int casasDireita = 1;

    // Loop externo: sobe duas casas
    for (int i = 1, j = 0; i <= casasCima; i++, j++) {
        printf("Cima (%d casa)\n", i);

        // Quando chegar no topo do L, move pra direita
        if (i == casasCima) {
            int k = 1;
            while (k <= casasDireita) {
                // Demonstra o uso de "continue" e "break"
                if (k == 0) {
                    k++;
                    continue; 
                }

                printf("Direita (%d casa)\n", k);
                if (k == casasDireita) break; // para quando completou o movimento
                k++;
            }
        }
    }
    printf("\n");
}

// FUNÇÃO PRINCIPAL

int main() {
    // Quantidade de casas que cada peça vai se mover
    int casasTorre = 5;
    int casasBispoVertical = 5;
    int casasBispoHorizontal = 1;
    int casasRainha = 8;

    // MOVIMENTO DA TORRE
    printf("Movimento da TORRE:\n");
    moverTorre(1, casasTorre);
    printf("\n");

    // MOVIMENTO DO BISPO
    printf("Movimento do BISPO:\n");
    moverBispo(1, casasBispoVertical, casasBispoHorizontal);
    printf("\n");

    // MOVIMENTO DA RAINHA
    printf("Movimento da RAINHA:\n");
    moverRainha(1, casasRainha);
    printf("\n");

    // MOVIMENTO DO CAVALO
    moverCavalo();
    printf("Fim da simulação.\n");
    
    return 0;
}
