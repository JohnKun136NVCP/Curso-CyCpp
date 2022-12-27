#include <iostream> //Biblioteca estandard

using namespace std;//Usando namespace para quitar std

int main(int argc, char const *argv[])
{
    int short pequentero = 4; //Un entero muy chico.
    cout<<"Este es un enterito: "<<pequentero<<endl;
    int entero = 10;
    cout<<"Este es un entero: "<<entero<<endl;//Tipo de dato entero.
    int long enterote = 23984;
    cout<<"Este es un enterote: "<<enterote<<endl;//Tipo de dato entero grandote.
    float flotante = 0.5; //Podria decir que es un numero real
    cout<<"Este es un flotante: "<<flotante<<endl; 
    double flotante_doble = 3.14159265358979323846; //Un numero real grande
    cout<<"Este es un flotante doble: "<<flotante_doble<<endl;
    double long muy_doble_flotante = 3.14159265358979323846485910293847; //Un numero real muy grandote.
    cout<<"Este es un double flotante con mas precision: "<<muy_doble_flotante<<endl;
    return 0;
}
