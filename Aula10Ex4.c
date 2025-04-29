
#include <stdio.h>




int re( int x, int y) {
int soma;
soma = x + y;

printf("A soma é: %d", soma);

}




int main() {
   
    int x;
    int y;
    int soma;
  

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    
   re (x, y);
    

    return 0;
}