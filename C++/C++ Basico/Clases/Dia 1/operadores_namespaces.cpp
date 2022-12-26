//Namespace.

#include<iostream> //Biblioteca estandard

/*
    Namespace: Digamos que es una forma de crear un bloque, y que todas la funciones que estén
    dentro del mismo. 
    En este caso usaremos namespace como forma darle un sobrenombre a la biblioteca std.
*/
using namespace std; //A palabras simples el using "Dame acceso a toda la biblioteca estandard que empieza con std".

int main(int argc, char const *argv[]) //Lo de int argc, char const *argv[] se puede omitirm nada mas poner int main()
{
    //(::) se denomina operador de resulución de ambito.
    /*
        Se usa para identificar los identificadores usados en distintos ámbitos y eliminar 
        la ambigüedad entre ellos.

        En este curso solamente se explicará que sirve para abreviar el código pero en cursos posteriores,
        tendrá un significado más profundo en POO.
    */
    //Forma larga
    std::cout<<"Hola mundo"<<std::endl; //Lo que actualmente hemos estado viendo
    //Forma corta
    cout<<"Hola Mundo"<<endl;//Forma más sencilla.
    

    return 0;
}


