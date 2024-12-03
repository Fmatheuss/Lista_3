//Ordenação por Seleção
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 100

void selectionSort(int vetor[]) {
    int i, j, min_idx, temp;
    for (i = 0; i < TAMANHO - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < TAMANHO; j++)
            if (vetor[j] < vetor[min_idx])
                min_idx = j;
        temp = vetor[min_idx];
        vetor[min_idx] = vetor[i];
        vetor[i] = temp;
    }
}

int main() {
    int vetor[TAMANHO];
    int i, min, max;

    srand(time(NULL));

    printf("Digite o valor mínimo e máximo do intervalo: ");
    scanf("%d %d", &min, &max);

    for (i = 0; i < TAMANHO; i++) {
        vetor[i] = min + rand() % (max - min + 1);
    }

    selectionSort(vetor);

    printf("Vetor ordenado (seleção):\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}