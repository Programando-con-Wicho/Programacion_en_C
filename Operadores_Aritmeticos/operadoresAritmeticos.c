#include <stdio.h>

int main(){

    float number1 = 0, number2 = 0, resultado = 0;

    printf("Ingresa primer numero: ");
    scanf("%f", &number1);

    printf("Ingresa segundo numero: ");
    scanf("%f", &number2);    

    resultado = number1 + number2;
    printf("El resultado de la suma es: %.2f \n", resultado);

    resultado = number1 - number2;
    printf("El resultado de la  resta es: %.2f \n ", resultado);

    resultado = number1 * number2;
    printf("El resultado de la multiplicacion es: %.2f\n", resultado);

    resultado = number1 / number2;
    printf("El resultado de la division es: %.2f \n", resultado);

    resultado = 0;
    printf("El valor de la variables resultado es %.2f", resultado);

    int numero1 = 0, numero2 = 0;
    printf("Ingresa primer numero: ");
    scanf("%d", &numero1);

    printf("Ingresa segundo numero: ");
    scanf("%d", &numero2); 

    int result = numero1 % numero2;
    printf("El resultado es %d", result);   

    return 0;
}
