#include<iostream>
#include<string>

using namespace std;


int main(int argc, char const *argv[])
{
    //Hablando de matrices
    //Arreglos de dimensiones = 2. tipo_dato nombre[fila][columna]
    float matrix22[2][2];//Matriz de 2x2
    //Otra forma.
    float matrix2x2[2][2] = {{2,4},{6,8}};
    //Si quiesiera acceder al elemento 6, como lo haria?
    //Imagina un juego de coordenadas 
    int numeroPar21 = matrix2x2[1][0]; //Recordar que empieza desde 0 el indice.
    cout<<"Coordenada 2,1: "<<numeroPar21<<endl;
    /*
        Si es como coordenadas empiza desde 0. A es una matriz 2x2
        A[0][0] = A[1][1]
        A[0][1] = A[1][2]
        A[1][0] = A[2][1]
        A[1][1] = A[2][2]
    */
    //Aplicando el ejemplo de las peliculas se puede recorar codigo.
    string peliculas[4][3]; //Seran 4 peliculas por los 3 paremetros, titulo,director y fecha
    string  titulo,director,fecha;
    cout<<"\t Catalogo de libros: "<<endl;

    for (size_t i = 0; i < 4; i++)
    {
        fflush(stdin);
        cout<<"Titulo: ";
        getline(cin,titulo);
        fflush(stdin);
        cout<<"Director: ";
        getline(cin,director);
        fflush(stdin);
        cout<<"Fecha: ";
        getline(cin,fecha);
        peliculas[i][0] = titulo;
        peliculas[i][1] = director;
        peliculas[i][2] = fecha;
        cout<<endl;

    }
    cout<<endl;
    cout<<"\t Catalogo de libros: "<<endl;
    for (size_t i = 0; i < 4; i++)
    {
        cout<<"Titulo: "<<peliculas[i][0]<<endl;
        cout<<"Director: "<<peliculas[i][1]<<endl;
        cout<<"Fecha: "<<peliculas[i][2]<<endl;
        cout<<endl;
    }
    //Hacerlo una matriz de 3x3 y con for
    float matrix33[3][3];

    for (size_t i = 0; i < 3; i++) //Filas
    {
        for (size_t j = 0; j < 3; j++) //Columnas.
        {
            cout<<"Ingrese su valor para ["<<i+1<<"]"<<"["<<j+1<<"]: ";
            cin>>matrix33[i][j];
        }
        
    }
    //Mostrar matriz.

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout<<matrix33[i][j]<<" ";
        }
        cout<<endl;
        
    }





    return 0;
}
