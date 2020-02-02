// Importamos librerias
#include <stdio.h>

int main(){
    float altura = 1.80;    // Creamos una varible que almacene el valor 1.80
    printf("Mi altura es de %.2f\n", altura);

    double pi = 3.141619;
    printf("%lf\n", pi);
    printf("Esta es la linea 10\n");

    // Despues de 10 años
    altura = 1.84;  // Tipo float
    pi = 3.182021;  // Tipo double

    printf("La variable altura contiene %.2f y el valor de pi es %.6lf",altura, pi);


}