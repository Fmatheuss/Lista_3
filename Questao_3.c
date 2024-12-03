#include <stdio.h>

#define TAMANHO_MAX 100

int main() {
    char string[TAMANHO_MAX];
    int i, contador = 0;

    printf("Digite uma string: ");
    fgets(string, TAMANHO_MAX, stdin);
    
    string[strcspn(string, "\n")] = '\0';

    for (i = 0; string[i] != '\0'; i++) {
        contador++;
    }

    printf("A string tem %d caracteres.\n", contador);

    return 0;
}