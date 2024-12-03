#include <stdio.h>

#define TAMANHO 15

int main() {
    float vetor[TAMANHO], menor, maior, soma;
    int i;

   
    printf("Digite %d numeros de ponto flutuante:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        scanf("%f", &vetor[i]);
    }

   
    menor = maior = vetor[0];

    
    for (i = 1; i < TAMANHO; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

   
    soma = menor + maior;

   
    printf("A soma do menor e maior elemento eh: %.2f\n", soma);

    return 0;
}