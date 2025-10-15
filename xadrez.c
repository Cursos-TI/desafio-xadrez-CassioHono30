#include <stdio.h> // Biblioteca padrão para entrada e saída

int main() {
    // ==============================
    // Simulação de movimentos de peças de xadrez
    // Peças: Torre, Bispo e Rainha
    // Cada uma usa uma estrutura de repetição diferente
    // ==============================

    // ==============================
    // 1️⃣ Torre - Movimento 5 casas para a direita (usando FOR)
    // ==============================
    int i;
    int movimentoTorre = 5;

    printf("=== Movimento da TORRE ===\n");
    for (i = 1; i <= movimentoTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    // ==============================
    // 2️⃣ Bispo - Movimento 5 casas na diagonal (Cima + Direita)
    // Usando WHILE
    // ==============================
    int movimentoBispo = 5;
    int contadorBispo = 1;

    printf("\n=== Movimento do BISPO ===\n");
    while (contadorBispo <= movimentoBispo) {
        printf("Cima, Direita (%d)\n", contadorBispo);
        contadorBispo++;
    }

    // ==============================
    // 3️⃣ Rainha - Movimento 8 casas para a esquerda (usando DO-WHILE)
    // ==============================
    int movimentoRainha = 8;
    int contadorRainha = 1;

    printf("\n=== Movimento da RAINHA ===\n");
    do {
        printf("Esquerda (%d)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

    // ==============================
    // Fim do programa
    // ==============================
    printf("\nSimulação concluída!\n");
    return 0;
}
