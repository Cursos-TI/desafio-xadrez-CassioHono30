#include <stdio.h>

// ==============================================
// 🔹 Função recursiva para mover a TORRE
// Movimento: 5 casas para a direita
// ==============================================
void moverTorre(int casasRestantes, int passo) {
    // Caso base: fim do movimento
    if (casasRestantes == 0) {
        return;
    }

    // Exibe a direção e o número do passo
    printf("Torre -> Direita (%d)\n", passo);

    // Chamada recursiva para mover a próxima casa
    moverTorre(casasRestantes - 1, passo + 1);
}

// ==============================================
// 🔹 Função recursiva para mover o BISPO
// Movimento: 5 casas na diagonal (Cima + Direita)
// Loop externo = movimento vertical (Cima)
// Loop interno = movimento horizontal (Direita)
// ==============================================
void moverBispo(int casasRestantes, int passo) {
    if (casasRestantes == 0) {
        return;
    }

    // Loop externo representa o movimento vertical
    for (int v = 1; v <= 1; v++) {
        // Loop interno representa o movimento horizontal
        for (int h = 1; h <= 1; h++) {
            printf("Bispo -> Cima, Direita (%d)\n", passo);
        }
    }

    // Chamada recursiva para o próximo movimento diagonal
    moverBispo(casasRestantes - 1, passo + 1);
}

// ==============================================
// 🔹 Função recursiva para mover a RAINHA
// Movimento: 8 casas para a esquerda
// ==============================================
void moverRainha(int casasRestantes, int passo) {
    if (casasRestantes == 0) {
        return;
    }

    printf("Rainha -> Esquerda (%d)\n", passo);

    moverRainha(casasRestantes - 1, passo + 1);
}

// ==============================================
// 🔹 Função com loops complexos para o CAVALO
// Movimento: em "L" (duas casas para cima e uma à direita)
// Usa loops aninhados com múltiplas condições, continue e break
// ==============================================
void moverCavalo() {
    printf("=== Movimento do CAVALO ===\n");

    // i = movimento vertical (duas casas para cima)
    // j = movimento horizontal (uma casa para a direita)
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 2; j++) {
            // O cavalo só se move uma vez à direita
            if (j > 1) {
                continue; // ignora movimentos horizontais extras
            }

            // Exibe cada parte do movimento
            if (i < 2) {
                printf("Cavalo -> Cima (%d)\n", i);
            } else if (i == 2) {
                printf("Cavalo -> Cima (%d), Direita (%d) (movimento em L completo)\n", i, j);
                break; // interrompe o loop após o movimento completo
            }
        }
    }

    printf("Fim do movimento do Cavalo.\n\n");
}

// ==============================================
// 🔹 Função principal
// ==============================================
int main() {
    // Quantidade de casas definidas diretamente no código
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ===============================
    // Movimento da TORRE (Recursivo)
    // ===============================
    printf("=== Movimento da TORRE ===\n");
    moverTorre(casasTorre, 1);
    printf("\n");

    // ===============================
    // Movimento do BISPO (Recursivo + Loops Aninhados)
    // ===============================
    printf("=== Movimento do BISPO ===\n");
    moverBispo(casasBispo, 1);
    printf("\n");

    // ===============================
    // Movimento da RAINHA (Recursivo)
    // ===============================
    printf("=== Movimento da RAINHA ===\n");
    moverRainha(casasRainha, 1);
    printf("\n");

    // ===============================
    // Movimento do CAVALO (Loops Complexos)
    // ===============================
    moverCavalo();

    printf("Simulação finalizada com sucesso!\n");
    return 0;
    
}
