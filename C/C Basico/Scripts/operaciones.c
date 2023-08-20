// Este programa declara variables, obtiene sus valores y realiza operaciones con esos valores.

#include <stdio.h>  //Incluyo la biblioteca para manejo de flujos estándar.

int main() {
    float operando1;           //Declaro una variable tipo float llamada operando1.
    float operando2 = 23.5;    //Declaro una variable tipo float llamada operando2.
    float resultado_suma;      //Declaro una variable tipo float llamada resultado_suma.

    printf("Ingresa un numero: ");  //Imprimo instrucciones para el usuario.
    scanf("%f", &operando1);        //Leo un valor tipo float y lo guardo en la variable operando1.
    
    resultado_suma = operando1 + operando2; //Almaceno la suma de operando1 y operando2 en resultado_suma.

    //Imprimo el valor de cada operando y su suma, usando siempre 2 decimales.
    printf("%.2f * %.2f es %.2f.\n", operando1, operando2, resultado_suma);

    /*  Imprimo el valor de cada operando y su multiplicación, usando siempre 4 decimales.
        Nótese que la multiplicación se hace en la misma línea de la impresión. */
    printf("%.4f * %.4f es %.4f.\n", operando1, operando2, operando1*operando2);

    return 0;   //Indico que aquí termina mi código.
}