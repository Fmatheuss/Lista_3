#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAMANHO 3

int main() {
    int vetor[TAMANHO];
    int i;
    float soma = 0, produto = 1;

    srand(time(NULL));

    for (i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 20;
        printf("Número %d: %d\n", i+1, vetor[i]);
    }

    for (i = 0; i < TAMANHO; i++) {
        soma += vetor[i];
    }

    for (i = 0; i < TAMANHO; i++) {
        produto *= vetor[i];
    }

    float media_aritmetica = soma / TAMANHO;

    float media_geometrica = pow(produto, 1.0 / TAMANHO);

    printf("Média aritmética: %.2f\n", media_aritmetica);
    printf("Média geométrica: %.2f\n", media_geometrica);

    return 0;
}