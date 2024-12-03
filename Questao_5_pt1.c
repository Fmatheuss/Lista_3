#include <stdio.h>
#include <string.h>

#define TAMANHO_MAX 100

int main() {
    char string1[TAMANHO_MAX], string2[TAMANHO_MAX], resultado[TAMANHO_MAX * 2];

    printf("Digite a primeira string: ");
    fgets(string1, TAMANHO_MAX, stdin);

    printf("Digite a segunda string: ");
    fgets(string2, TAMANHO_MAX, stdin);

    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';

    strcpy(resultado, string1); 
    strcat(resultado, string2); 

    printf("A string concatenada é: %s\n", resultado);

    return 0;
}