#include<iostream>
using namespace std;

//Ver despues de variables.
#define VELOCIDAD 299792458;


int main(int argc, char const *argv[])
{
    // Variables. Cambia su valor.
    int n;
    //Este numero tendra el valor de 0
    n  = 0;
    cout<<n<<endl;
    // Este numero valdra ahora 1
    n = n + 1;
    cout<<n<<endl;

    //Tipos y variables.
    /*
        Que pasaria si me piden el dividir un entero entre un entero  que de un flotante??
        Que resultado dara? 
    */
    int numero1 = 1;
    int numero2 = 2; 
    float numero3;
    numero3  = numero1/numero2;
    cout<<"Resultado: "<<numero3<<endl;
    //Dio 0. Si tenemos este problema o una de dos cambiamos el dato o podemos hacerle un casteo.
    //Casteo es como cambiar de dato de una manera un poco brusca.

    numero3 = (float)numero1/(float) numero2;
    cout<<"Resultado: "<<numero3<<endl; //Aqui si da 0.5

    //Constantes. Existen dos formas de declarar.
    //Palabra reservada const

    const float PI = 3.1416;// Esto si queremos cambiarlo dara error.
    cout<<"El valor de PI es: "<<PI<<endl;
    //Descomentar para ver si es cierto.
    /*
    PI = 3.14169;
    cout<<PI<<endl;
    */
    // La segunda es con la palabra definida #define 

    cout<<"La velocidad de la luz es: "<<VELOCIDAD;



    

    return 0;
}
