#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    //cout impresion por pantalla.
    cout<<"Impresion por pantalla"<<endl;
    //Aplicando lo que vimos de variables.
    int numero = 2;
    string nombre = "Rie";
    string apellido = "Takahashi";
    cout<<nombre<<" "<<apellido<<" "<<"es el top "<<numero<<" "<<"de musica de J-pop"<<endl;

    //Tambien se puede aplicar la sintaxis de C.
    printf("Tambien uso sintaxis de C.\n");
    //Con variables.
    printf("%s %s es el top %d de musica de J-pop\n",nombre.c_str(),apellido.c_str(),numero);

    //Lectura de datos con cin.

    string mes;
    cout<<"Ingrese su mes de nacimiento: ";
    cin>>mes;
    
    //Usando getline.
    printf("Ingrese su mes de nacimiento: ");
    getline(cin,mes); //Getline solamente es usado para strings.
    return 0;
}

