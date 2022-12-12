#pragma once//Especifica que el compilador incluirá el archivo de encabezado una sola vez al compilar un archivo de código fuente.
#include <iostream>//Biblioteca estandar.
#include<fstream> //Apertura de archivos.
#include <string.h> // Uso de la biblioteca String de C para que sea  mas rapida la modificaciones necesaria.
using namespace std;// Para ahorrar std::cout y sus derivados.


//Subestructura donde se obtiene datos generales de vivienda.
//*Se puede hacer modificar con apuntadores.
//Por ejemplo
/*
char *street;
street = new char [value]; //Donde Value puede ser una variable global o interna.
*/
struct gdata{
    char street[100];  //Calle.
    char contry[100]; //Pais.
    char state[100]; //Estado.
    int number;//Numero de calle.
};
//NOTA:
//En la substructura no necesitaremos un typedelf ya que se
//trabajara con una estructura mas grande asi decirlo,
//pero es gusto de programador ponerlo o no.

//Estructura de datos personales del cliente.
typedef struct client{ //Se definio el typedelf para que no se ponga struct client todo el tiempo.
    char name[100];//Nombre.
    char surname[100];//Apellido.
    int edge; //Edad.
    struct gdata gdata; //Se define substructra gdata como gtdata aunque el segudno parametro puede cambiar a nada mas 'data'.
    long double count; //Dinero en su cuenta.
}client; //Estructura cliente.


//Prototipos de funciones.
client *new_clients(int &value);//Genara la estructura dinamica que recibe la funcion tam (paso por referecia).
client *reserve(int tam);// Reserva la memoria dinamicamente.
client *Uploading_data(client *c,int value);// LLena los datos de la estructura y la subestructura.
void tam_(int &value);// Pregunta por el tamano para reservar la memoria.
void status_client (client *c);//Muestra su dinero convertido en varias monedas de diferentes paises
template <class TDA,class ffl>//Uso de Template para no estar defiendo más funciones.
void Download_data(client *c,int value,TDA kind,ffl archive);//Genera un archivo según las necesidades del usuario.
void verification_files(client *c, int value);//Funcion para los datos generales de los archivos.
void print_data (client *c,int value);//Imprime los datos personales del cliente.
void delete_purge(client *c);//Libera al nodo con los datos de memoria.
void menu(); ////Menu del programa principal.