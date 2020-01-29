// Importamos librerias
#include <stdio.h>

void main(){
    int edad;
    edad = 20;
    edad = 40;

    printf("La variable edad tiene el valor %d \n", edad);
    edad = 50;
    printf("La variable edad tiene el valor %d \n", edad);

    char nombre[50] = "Wicho";
    printf("La variable nombre tiene el valor de %s \n", nombre);

    printf("La variable nombre tiene el valor de %s y la varible edad tiene %d", nombre, edad);
    
}