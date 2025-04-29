#include <stdio.h>

int igual (int x , int y){

if (x==y){

printf("1");

} else {

printf("0");

}


}


int main() {
    
    int x;
    int y;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    
    printf("Digite o valor de Y: ");
    scanf("%d", &y);



igual (x , y);


    return 0;
}