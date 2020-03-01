#include <stdio.h> 

int main(){

    // Pedir al usuario que ingrese la cantidad de dinero que tiene
    // si tiene mas de 200 pesos puede ir al cine, si no que se quede en casa

    char nombreUser[30]; // Vamos a guardar el nombre del usuario
    float money = 0;    // Vamos a guardar el dinero del usuario

    printf("Ingresa tu nombre: ");
    scanf("%s", &nombreUser);

    printf("Ingresa cuanto dinero tienes: "); 
    scanf("%f", &money);

    // a > b
    if(money > 200){
        printf("Puedes ir al cine\n");
    } else{
        printf("No puedes ir al cine, quedate en tu casa\n");
    }

    printf("%s tiene %.2f pesos", nombreUser, money);

    return 0;
}
