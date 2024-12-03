#include <stdio.h>
#include <string.h>

#define TAMANHO_MAX 100

int main() {
    char string1[TAMANHO_MAX], string2[TAMANHO_MAX];

    printf("Digite a primeira string: ");
    fgets(string1, TAMANHO_MAX, stdin);

    printf("Digite a segunda string: ");
    fgets(string2, TAMANHO_MAX, stdin);

    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';

    if (strcmp(string1, string2) == 0) {
        printf("As strings sao iguais.\n");
    } else {
        printf("As strings sao diferentes.\n");
    }

    return 0;
}