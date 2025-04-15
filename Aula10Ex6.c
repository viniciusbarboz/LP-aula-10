
#include <stdio.h>


double diam (double R) {

printf("Digite o raio do circulo:");
scanf("%lf", &R);

double D;
D = R * 2;

printf("O diametro é: %lf ", D);






}


int main() {
    
    double R;
    double D;

   diam (R);

    return 0;
}