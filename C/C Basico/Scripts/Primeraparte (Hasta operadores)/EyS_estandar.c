/*  Este programa muestra el uso de los flujos estándar con scanf y printf para entrada y salida de datos.
    Además, muestra el uso de algunos especificadores de tipo y de formato. */

#include <stdio.h>      //Incluyo la biblioteca para manejo de flujos estándar.

int main() {            //Declaro la función main. Indica el inicio de mi código.
    char letra;                     //Declaro una variable tipo char llamada letra.
    short enterito = 13;            //Declaro una variable tipo short llamada enterito y le asigno el valor 13.
    double super_real = -0.0000001; //Declaro una variable tipo double llamada super_real y le asigno el valor -0.0000001.

    printf("Escribe una letra y presiona enter: ");     //Imprimo instrucciones para el usuario.
    scanf("%c", &letra);                                //Leo un char desde el teclado y guardo el valor en la variable "letra".
    printf("Escribe un real y presiona enter: ");       //Imprimo instrucciones para el usuario.
    scanf("%lf", &super_real);                          //Leo un double desde el teclado y guardo el valor en la variable "super_real".

    printf("La letra que ingresaste es: %c.\n", letra);     //Imprimo el char que ingresó el usuario.
    printf("El real que ingresaste es: %f.\n", super_real); //Imprimo el double que ingresó el usuario.

    //A continuación imprimo variable utilizando diferenes especificadores de formato.
    printf("El entero %5d\n", enterito);        //Imprimo la variable "enterito" utilizando 5 espacios.
    printf("El entero %+5d\n", enterito);       //Imprimo la variable "enterito" utilizando 5 espacios y forzando la impresión del signo.
    printf("El entero %+05d\n", enterito);      //Imprimo la variable "enterito" utilizando 5 espacios, forzando la impresión del signo y rellenando con ceros.
    
    printf("El real %7.2f.\n", super_real);     //Imprimo la variable "super_real" utilizando 7 espacios (dos de ellos para los decimales)
    printf("El real %+7.2f.\n", super_real);    //Imprimo la variable "super_real" utilizando 7 espacios (dos de ellos para los decimales) y forzando la impresión del signo.
    printf("El real %+-7.2f.\n", super_real);   //Imprimo la variable "super_real" empezando por la derecha, utilizando 7 espacios (2 de ellos para los decimales), forzando la impresión del signo, 


    return 0;   //Indico que aquí termina mi código.
}