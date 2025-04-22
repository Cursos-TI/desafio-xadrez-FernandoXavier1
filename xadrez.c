#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    const int casasTorre = 5; // Nível Novato - Movimentação das Peças
    const int casasBispo = 5; 
    const int casasRainha = 8;

    int i;

      i = 0;
    printf("Movimento do Bispo:\n");
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");  // Implementação de Movimentação do Bispo
   

   printf("Movimento da Torre:\n");
    for (i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");  // Implementação de Movimentação da Torre
  

  i = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casasRainha);
    printf("\n");  // Implementação de Movimentação da Rainha
    

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
