#include <stdio.h>

int menor (int x , int y){

if (x>y){

printf("Numero menor digitado: %d\n", y);

} else {

printf("Numero menor digitado: %d\n", y);

}


}


int main() {
    
    int x;
    int y;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    
    printf("Digite o valor de Y: ");
    scanf("%d", &y);



menor (x , y);


    return 0;
}