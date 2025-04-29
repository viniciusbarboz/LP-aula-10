#include <stdio.h>

int maior (int x , int y){

if (x>y){

printf("Numero maior digitado: %d\n", y);

} else {

printf("Numero maior digitado: %d\n", y);

}


}


int main() {
    
    int x;
    int y;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    
    printf("Digite o valor de Y: ");
    scanf("%d", &y);



maior (x , y);


    return 0;
}