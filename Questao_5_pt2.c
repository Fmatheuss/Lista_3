#include <stdio.h>

#define TAMANHO_MAX 100

int main() {
    char string1[TAMANHO_MAX], string2[TAMANHO_MAX], resultado[TAMANHO_MAX * 2];
    int i, j;

    printf("Digite a primeira string: ");
    fgets(string1, TAMANHO_MAX, stdin);

    printf("Digite a segunda string: ");
    fgets(string2, TAMANHO_MAX, stdin);

   
    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';

    
    for (i = 0; string1[i] != '\0'; i++) {
        resultado[i] = string1[i];
    }

    
    for (j = 0; string2[j] != '\0'; j++) {
        resultado[i++] = string2[j];
    }

    resultado[i] = '\0'; 

    printf("A string concatenada é: %s\n", resultado);

    return 0;
}