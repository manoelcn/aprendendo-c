#include <stdio.h>

int main() {
    int base;
    int altura;
    int area;

    printf("Digite o valor da base: ");
    // Comando de input
    // Primeiro o tipo do dado, depois a variável que vai receber o dado.
    scanf("%i", &base);

    printf("Digite o valor da altura: ");
    scanf("%i", &altura);

    area = base * altura;
    printf("O valor da área do retangulo é %i.\n", area);

    return 0;
}