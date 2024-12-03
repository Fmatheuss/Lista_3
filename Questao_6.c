#include <stdio.h>
#include <string.h>

#define TAMANHO_MAX 100

int main() {
    char string[TAMANHO_MAX];
    int i, j;

    printf("Digite uma string: ");
    fgets(string, TAMANHO_MAX, stdin);

    string[strcspn(string, "\n")] = '\0';

    int tamanho = strlen(string);


    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        char temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }

    printf("A string invertida é: %s\n", string);

    return 0;
}