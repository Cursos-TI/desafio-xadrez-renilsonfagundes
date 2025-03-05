#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

int main() {
    // Implementação de Movimentação do Bispo
    printf("Movimento do Bispo:\n");
    for (int b = 1; b <= 5; b++) {
        printf("Cima, Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    printf("Movimento da Torre:\n");
    for (int t = 1; t <= 5; t++) {
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    printf("Movimento da Rainha:\n");
    int r = 1;
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= 8);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    printf("Movimento do Cavalo:\n");
    const char *movimentosCavalo[] = {"Cima, Direita", "Cima, Esquerda", "Baixo, Direita", "Baixo, Esquerda", 
                                       "Direita, Cima", "Direita, Baixo", "Esquerda, Cima", "Esquerda, Baixo"};
    for (int c = 0; c < 8; c++) {
        printf("%s\n", movimentosCavalo[c]);
    }
    printf("\n");


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
