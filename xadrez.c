#include <stdio.h>  // Biblioteca padrão para entrada e saída

// =========================================
// Funções Recursivas
// =========================================

// 🔹 Função recursiva para mover a Torre (horizontalmente para a direita)
void moverTorre(int casasRestantes, int passo) {
    // Caso base: nenhuma casa restante
    if (casasRestantes == 0)
        return;

    printf("Torre -> Direita (%d)\n", passo);

    // Chamada recursiva: move a próxima casa
    moverTorre(casasRestantes - 1, passo + 1);
}

// 🔹 Função recursiva para mover o Bispo (diagonal cima + direita)
//    com loops aninhados internos simulando movimentos verticais e horizontais
void moverBispo(int casasRestantes, int passo) {
    if (casasRestantes == 0)
        return;

    // Loop externo: simula movimento vertical (Cima)
    for (int v = 1; v <= 1; v++) {
        // Loop interno: simula movimento horizontal (Direita)
        for (int h = 1; h <= 1; h++) {
            printf("Bispo -> Cima, Direita (%d)\n", passo);
        }
    }

    moverBispo(casasRestantes - 1, passo + 1);
}

// 🔹 Função recursiva para mover a Rainha (horizontalmente para a esquerda)
void moverRainha(int casasRestantes, int passo) {
    if (casasRestantes == 0)
        return;

    printf("Rainha -> Esquerda (%d)\n", passo);

    moverRainha(casasRestantes - 1, passo + 1);
}

// =========================================
// Função para simular o movimento do Cavalo
// =========================================
// O cavalo se move em "L": duas casas para cima e uma para a direita
void moverCavalo() {
    printf("=== Movimento do CAVALO ===\n");

    // Loops aninhados com múltiplas variáveis e controle de fluxo
    for (int i = 1; i <= 2; i++) {  // Movimento vertical (duas casas para cima)
        for (int j = 1; j <= 1; j++) {  // Movimento horizontal (uma casa à direita)
            if (i == 2 && j == 1) {
                printf("Cavalo -> Cima, Cima, Direita (movimento em L completo)\n");
                break; // Sai do loop interno após o movimento completo
            }
            printf("Cavalo -> Cima (%d)\n", i);
        }
    }

    printf("Fim do movimento do Cavalo.\n\n");
}

// =========================================
// Função principal
// =========================================
int main() {
    // Quantidade de casas a serem movidas (definidas diretamente no código)
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ===== MOVIMENTO DA TORRE =====
    printf("=== Movimento da TORRE ===\n");
    moverTorre(casasTorre, 1);
    printf("\n");

    // ===== MOVIMENTO DO BISPO =====
    printf("=== Movimento do BISPO ===\n");
    moverBispo(casasBispo, 1);
    printf("\n");

    // ===== MOVIMENTO DA RAINHA =====
    printf("=== Movimento da RAINHA ===\n");
    moverRainha(casasRainha, 1);
    printf("\n");

    // ===== MOVIMENTO DO CAVALO =====
    moverCavalo();

    printf("Simulação finalizada com sucesso!\n");
    return 0;
}
