#include <stdio.h>


void imprimesoma(float soma) {
    printf("O resultado da soma é: %.2f\n", soma);
}

int main() {
    float a = 5.5;
    float b = 4.5;
    float resultado = a + b;

    imprimesoma(resultado);

    return 0;
}
