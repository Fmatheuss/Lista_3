#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS], i, j, x, contador = 0;

    srand(time(NULL));

    printf("Matriz gerada:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            matriz[i][j] = rand() % 10; // Números aleatórios de 0 a 9
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Digite um valor a ser buscado: ");
    scanf("%d", &x);

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] == x) {
                contador++;
            }
        }
    }

    printf("O valor %d aparece %d vezes na matriz.\n", x, contador);

    return 0; 1 
}