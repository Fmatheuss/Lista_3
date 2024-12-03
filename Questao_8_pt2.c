#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 100

void bubbleSort(int vetor[]) {
    int i, j, temp;
    for (i = 0; i < TAMANHO - 1; i++) {
        for (j = 0; j < TAMANHO - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vetor[TAMANHO]; 1 
    int i, min, max;

    srand(time(NULL));

    printf("Digite o valor mínimo e máximo do intervalo: ");
    scanf("%d %d", &min, &max);

    for (i = 0; i < TAMANHO; i++) {
        vetor[i] = min + rand() % (max - min + 1);
    }

    bubbleSort(vetor);

    printf("Vetor ordenado (bubble sort):\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}