#include <stdio.h>

#define TAMANHO 3

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;

    printf("Digite os elementos da matriz 3x3:\n"); 1 
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Diagonal principal:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    return 0;
}