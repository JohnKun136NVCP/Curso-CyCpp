#include <stdio.h>
int main(){
    int tam;
    printf("Ingrese el tamano: ");
    scanf("%d",&tam);
    int A[tam][tam],B[tam][tam],C[tam][tam]; //Se define una matriz de nxn y la inicializamos a cero
   
    //Matriz A
    printf("Llene los elementos de la matriz A:\n");
    
    for(int i=0;i<tam; i++){
        for(int j=0;j<tam;j++){
            printf("A[%d,%d]: ",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
    //Matriz B
    printf("Llene los elementos de la matriz B:\n");
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            printf("B[%d,%d]: ",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            for(int k=0;k<tam;k++){
                C[i] [j]=C[i] [j]+A[i][k]*B[k][j];
            }
        }
    }
    /*Y mostramos el resultado*/
    printf("Matriz resultante C: \n");
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            printf("C[%d,%d]: %d\n",i+1,j+1,C[i][j]);
        }
    }
    return 0;
}
/*
 * Ejecicio tomado de: https://www.investigacion.frc.utn.edu.ar/tecnicasdigitales/pub/file/arreglos.pdf
*/
