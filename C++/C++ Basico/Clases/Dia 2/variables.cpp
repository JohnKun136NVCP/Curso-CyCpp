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
