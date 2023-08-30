#include <stdlib.h> //Biblioteca que permite tener numeros random
#include <stdio.h> //Biblioteca estandar

int main() //Funcion main para el funcionamiento central del programa
{
    int array[200]; //Inicializar el array con tamaño 200 elementos
    for (int i = 0;i<200;i++){
        array[i] = rand()%100; //Guarda todos los números random de 0 o 100
    }
    for (int i = 0;i<200;i++){
        if(array[i]%2==0){ // Si los elementos del arreglo son pares
            printf("%d\n",array[i]); //Entonces imprime nada más esos elementos.
        }
    }
    return 0; //Retorna un 0 si todo va bien
}

/*
 * Ayuda del código random: www.https://www.codespeedy.com/generate-a-random-array-in-c-or-cpp/
*/
