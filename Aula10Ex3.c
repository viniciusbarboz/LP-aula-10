
#include <stdio.h>

int digitado (int x){

printf("Numero Digitado: %d", x);
}
int main() {
 
   int x;


printf("Digite um numero: ");
scanf("%d", &x);

digitado(x);

    return 0;
}