
#include <stdio.h>


double circ (double R) {

R = R+3;

double D;
D = (3.1416 * 2) * R;

printf("A circuferencia é: %lf ", D);

}


int main() {
    
    double R;
    double C;

   circ (R);

    return 0;
}