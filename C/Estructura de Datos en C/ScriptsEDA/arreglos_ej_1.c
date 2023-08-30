#include <stdio.h> //Inicializar la biblioteca estandar

int main() //Declaro la funcion main
{
    int numeros[20]; //Inicializo el arreglo de numeros enteros hasta 20 numeros.
    int i = 0; //Contador para el for inicializado en cero.
    int producto = 1; //producto en inicio en 1 para evitar que todo salga cero.
    float promedio = 0; //Variable de promedio para calcular el mismo.
    for(i = 0; i<20;i++){ //For para llenar el arreglo de 0 a 20
        printf("Ingrese valor para n = %d: ",i+1); //imprimo el siguiente elemento del iterador
        scanf("%d",&numeros[i]); //Guardo los elementos que el usuario coloque
    }
    for(i = 0;i<20;i++){
        producto = producto * numeros[i]; //Calcula el producto por cada uno de los valores del arreglo.
        promedio = promedio + numeros[i]; //Calcula el promedio de los valores del arreglo (Hace la suma)
    }
    promedio = promedio/20; //Divide la suma entre el número de elementos del arreglo
    printf("El producto de todo el arreglo es %d y el promedio del mismo es %0.2f",producto,promedio); //Imprime los valores requeridos de producto y promedio
    return 0; //Retorna 0 si todo va bien.
}
/*
 * Ejecicio tomado de: https://www.investigacion.frc.utn.edu.ar/tecnicasdigitales/pub/file/arreglos.pdf
*/
