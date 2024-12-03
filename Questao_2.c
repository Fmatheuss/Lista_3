#include <stdio.h>
#include <string.h>

#define TAMANHO_MAX 100

int main() {
    char string[TAMANHO_MAX], caractere;
    int i, encontrado = 0;

    printf("Digite uma string: ");
    fgets(string, TAMANHO_MAX, stdin);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);  // Espaço antes de %c para consumir possíveis espaços em branco

   
    string[strcspn(string, "\n")] = '\0';


    for (i = 0; i < strlen(string); i++) {
        if (string[i] == caractere) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("O caractere '%c' foi encontrado na string.\n", caractere);
    } else {
        printf("O caractere '%c' nao foi encontrado na string.\n", caractere);
    }

    return   0;
}