#include <stdio.h>

// Função recursiva da TORRE

// Move a torre N casas para a direita.
void moverTorre(int casas) {
    if (casas == 0) {
        return; // Caso base: sem mais casas para mover
    }
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva do BISPO

// O bispo se move na diagonal (Cima + Direita).
// Aqui, usamos recursão + loops aninhados para ilustrar movimento diagonal.
void moverBispo(int movimentosRestantes) {
    if (movimentosRestantes == 0) {
        return; // Caso base
    }

    // Loop externo = movimento vertical (Cima)
    for (int i = 0; i < 1; i++) {
        // Loop interno = movimento horizontal (Direita)
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(movimentosRestantes - 1); // Chamada recursiva
}

// Função recursiva da RAINHA

// Move a rainha N casas para a esquerda.
void moverRainha(int casas) {
    if (casas == 0) {
        return; // Caso base
    }
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// MOVIMENTO DO CAVALO (loops complexos)

// O Cavalo move-se em "L": duas casas para cima e uma para a direita.
// Aqui usamos múltiplas variáveis de controle e comandos continue/break
// para demonstrar um loop complexo e dinâmico.
void moverCavalo() {
    printf("\n=== Movimento do Cavalo ===\n");

    int casasVerticais = 2;  // duas casas para cima
    int casasHorizontais = 1; // uma casa para a direita

    // Loop externo controla o movimento vertical
    for (int i = 1, j = casasVerticais; i <= casasVerticais && j > 0; i++, j--) {

        if (i == 2) {
            // Apenas para mostrar controle condicional
            printf("Cima\n");
            continue; // pula o restante e volta ao loop
        }

        printf("Cima\n");
    }

    // Loop interno com múltiplas condições e controle de fluxo
    int k = 0, limite = casasHorizontais;
    while (k < limite) {
        printf("Direita\n");
        if (k == limite - 1) {
            break; // encerra o loop antecipadamente
        }
        k++;
    }
}


// FUNÇÃO PRINCIPAL

int main() {

    // MOVIMENTO DA TORRE

    int casasTorre = 5;
    printf("=== Movimento da Torre ===\n");
    moverTorre(casasTorre);

  
    // MOVIMENTO DO BISPO

    int casasBispo = 5;
    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(casasBispo);


    // MOVIMENTO DA RAINHA

    int casasRainha = 8;
    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(casasRainha);


    // MOVIMENTO DO CAVALO

    moverCavalo();

    return 0;
}
