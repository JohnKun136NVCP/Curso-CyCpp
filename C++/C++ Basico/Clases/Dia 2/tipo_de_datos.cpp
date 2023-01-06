#include <iostream> //Biblioteca estandard
#include <string> //Biblioteca de Strings.

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
    char letra = 'a';//Esto es un caracter.
    cout<<"Esto es un char: "<<letra<<endl;
    /*
        Caso especial: Unsigned.
        En pocas palabras almacena más que un int con valores positvos
    */
    unsigned int sin_signo = -2;
    //En la linea anterior dara un valor raro ya que solo admite numeros positivos.
    cout<<"Este es el caso especial con unsigned(valor raro) : "<<sin_signo<<endl;
    sin_signo = 2;
    //Ahora si dara el valor de 2.
    cout<<"Este es el caso especial con unsigned(valor correcto): "<<sin_signo<<endl;
    bool verdadero = true; //Valores booleanos true o false pero dara resultado 1 o 0
    cout<<"C++ es bien pro? "<<verdadero<<". Entonces es verdadero."<<endl;


    //Valores de string.
    /*
        Por lo mientras veremos strings de la biblioteca que tiene C++.
        Pero tambien veremos otras formas de meter cadenas de texto sin
        la biblioteca.
    */
   string nombre = "john";
   cout<<"Este es mi nombre: "<<nombre<<endl;



    return 0;
}
