#include<iostream>
#include<string>

using namespace std;

#define TAM 10

int main(int argc, char const *argv[])
{
    // Arreglo Unimencional. (Vector).
    // Manera 1. Como vimos = constantes.
    int arrayEnteros[TAM]; //Tamano fijo de 10 elementos
    // Manera 2. Definiendo el tamano dentro de los corchetes.
    float arrayFlotante[10];// Tamano fijo de 10 elementos.
    char arrayChar[500]; //Forma 2 con Chars.
    bool arrayBooleanos[600];
    //Arreglo de caracteres
    cout<<"Dame su nombre completo: "; 
    cin>>arrayChar;//Sin acentos
    // Ojo. gets por si lo ven publicado para cadenas de caracteres ya no es utilizado porque es
    //Deprecatado, ya no se usa.
    //gets(vectorChar); 
    //Si nos damos cuenta nada mas aparece el nombre sin el apellido
    cout<<"Tu nombre completo es: "<<arrayChar;
    //Solucion
    fflush(stdin); // Limpiar el buffer.
    /*
        Nota: fflush(stdin) digamos que se llena el buffer. Generalmente es así
        en strings.
    
    */

    cout<<endl;
    cout<<"Dame su nombre completo: "; 
    cin.get(arrayChar,500); //Sin acentos
    cout<<"Tu nombre completo es: "<<arrayChar;

    // Inicializar Array.
    //Forma 1.
    int edades[] = {10,12,22,23};
    //Forma 2.
    bool resultados[2] = {true,false};

    //Valores nuevos.
    int calificacion[4];

    /*
        Simpre los arreglos se inicializan en 0.
        Es decir, si queremos un arreglo como el de 4.
        El primer elemento no empezaria del 1 sino del 0.
        Indice real:  1 2 3 4
        Indice array: 0 1 2 3
    
    */
    calificacion[0] = 10;
    calificacion[1] = 9;
    calificacion[2] = 8;
    calificacion[3] = 10;


    //Inicializar array de un cierto valor.

    float medicion[4] = {2.5};
    /*
        Tanto medicion[0],...,medicion[4] = 2.5 parecieria que valiera eso.
        Sin embargo, para medicion[0] sera 2.5 y de medicion[1]...medicion[4] = 0.

    */
    //Vamos a comprobarlo.
    /*
        Ciclos for para arrays.
        Usando Ciclos for es posible iterar un arreglo y ver los resultados.
        for(int i = 0; i<tam_arreglo; i++ o i--){
            cout<<arreglo[i];
        }
    */
    cout<<endl;
    //Incremento.
    for (size_t i = 0; i < 4; i++)
    {
        cout<<medicion[i]<<" ";
    }
    cout<<endl;

    //Estilo para imprimir arreglos, en forma de lista.
    for (size_t i = 0; i < 4; i++)
    {
        cout<<medicion[i]<<" "<<endl;
    }
    cout<<endl;
    //Entrada de informacion. Registro de peliculas 3.
    //Sintaxis permitida en C++
    string titulo_pelicula[3];string director[50];int year[3];
    cout<<"\t Peliculas (registro)."<<endl;
    for (size_t i = 0; i <3 ; i++)
    {
        fflush(stdin); //Para limpiar el buffer de la cadena de texto.

        cout<<"Titulo: ";
        getline(cin,titulo_pelicula[i]);
        fflush(stdin);
        cout<<"Director: ";
        getline(cin,director[i]);
        fflush(stdin);
        cout<<"Year: ";
        cin>>year[i];
        cout<<endl;
    }
    //Si se quiere usar String pude ser dos maneras de entrada.
    /*
        string peliculas[3];
        string director[3];
        cin>> peliculas[i]; //Sin espacios.
        getlline(cin,peliculas[i]);//Con Espacios.
    */
    cout<<"\t Peliculas (registro)."<<endl;
    for (size_t i = 0; i <3 ; i++)
    {
        cout<<"Titulo: "<<titulo_pelicula[i]<<endl;
        cout<<"Director: "<<director[i]<<endl;
        cout<<"Year: "<<year[i]<<endl;
        cout<<endl;
    }


    
    


    return 0;
}
