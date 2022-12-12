#include "functions.h"

//Desarrollo de funciones.

// Pregunta por el tamano para reservar la memoria.
void tam_(int &value){
    int c; //Tamano de la variable en entero
    cout<<"Number of clients: "; //Pregunta por el no clientes
    cin>>c;
    value = c; //Paso por referencia sin retorno de valor entero pero devolvera el valor de 'value'
}
// Reserva la memoria dinamicamente.
client *reserve(int tam){
    cout<<"Uploading..."<<endl; //Mensaje para preparacion para reserva de memoria.
    client *c = (client*)malloc(tam*sizeof(client)); //Reserva la memoria dinamica para c clientes.
    if(!c){ //En el caso que no tenga la memoria para almacenar los clientes o se haya ocupado de mas soltará error.
        cout<<"Error"; //Para evitar este error puede redimencionar con realloc.
    }
    cout<<"Process successfully"<<endl;//La memoria fue reservado satisfactoriamente.
    return c; //Retorna la estructura con la subestructura.
}
// LLena los datos de la estructura y la subestructura.
client *Uploading_data(client *c,int value){
    char payload[100]; //Arreglo provicional para la entrada de datos.
    if(!c){
        cout<<"Problems :/"<<endl;//Mismo caso si ya no hay espacio.
        delete [] c; //Libera al nodo con los datos de memoria.
        exit(1); //Sale del programa.
    }
    for (int i = 0;i<value;i++){
        fflush(stdin); //Para limpiar el buffer por si se lleno
        /*
        NOTA:
        En las estructuras no podemos llenar datos directamente para los arreglos de caracteres.
        Se usará stringcopy para que se pueda almacenar los datos.
        */
        cout<<"Client #"<<i+1<<endl;
        cout<<"Name: "; 
        cin>>payload;
        strncpy(c[i].name,payload,100); //Uso de String Copy.
        cout<<"Surname: ";
        cin>>payload;
        strncpy(c[i].surname,payload,100);
        cout<<"Edge: ";
        cin>>c[i].edge;
        cout<<"Saved: ";
        cin>>c[i].count;
        cout<<"Contry: ";
        fflush(stdin);
        cin>>payload;
        strncpy(c[i].gdata.contry,payload,100); //Estructura cliente-> gdata (subestructura).
        
        cout<<"State(Without spaces, with -): ";
        fflush(stdin);
        cin>>payload;
        strncpy(c[i].gdata.state,payload,100);
        cout<<"Street(Without spaces, with -): ";
        fflush(stdin);
        cin>>payload;
        strncpy(c[i].gdata.street,payload,100);
        cout<<"Number: ";
        cin>>c[i].gdata.number;
        
        cout<<endl;
        
    }
    return c; //Retorna la estructura con los datos ya llenos.
}

//Muestra su dinero convertido en varias monedas de diferentes paises
void status_client (client *c,int value){
    for(int i=0;i<value;i++){
        cout<<"\t\t\t\t\t\tStatus client...Change and Change.\t\t\t\t\t\t"<<endl;
        cout<<"Client #"<<i+1<<endl;
        cout<<"Name: "<<c[i].name<<endl;
        cout<<"Surname: "<<c[i].surname<<endl;
        cout<<"MXN: "<<c[i].count<<endl;
        cout<<"USD: "<<c[i].count*0.050<<endl;
        cout<<"EUR: "<<c[i].count*0.051<<endl;
        cout<<"Yen: "<<c[i].count*7.41<<endl;
    }
}
template <class TDA,class ffl> //Uso de Template para no estar defiendo más funciones.
void Download_data(client *c,int value,TDA kind,ffl archive){//Genera un archivo según las necesidades del usuario.
    if(strcmp("MD",kind)==0){ //Compara cadenads entre MD y lo que quiere el usuario.
        ofstream file; //Creacion de archivos.
        file.open(archive,ios::out); //Si esta un archivo disponible o existente.
        if(file.fail()){
            cout<<"Error file not found"<<endl; //Si no lo encuentra entonces tendrá que buscarlo
            exit(1); //Sale del programa.
        }
        //Hace el llenado de los datos de la funcion  status_client.
        for(int i=0;i<value;i++){
            file<<"\t\t\t\t\t\tStatus client...Change and Change.\t\t\t\t\t\t"<<endl;
            file<<"Client #"<<i+1<<endl; 
            file<<"Name: "<<c[i].name<<endl;
            file<<"Surname: "<<c[i].surname<<endl;
            file<<"MXN: "<<c[i].count<<endl;
            file<<"USD: "<<c[i].count*0.050<<endl;
            file<<"EUR: "<<c[i].count*0.051<<endl;
            file<<"Yen: "<<c[i].count*7.41<<endl;
    }
        file.close(); //Cierra el flujo ddel archivo.
        
        
    }else if(strcmp("ST",kind)==0){ //Datos personales de la persona.
        ofstream file;
        file.open(archive,ios::out);
        if(file.fail()){
            cout<<"Error file not found"<<endl;
            exit(1);
        }
        for(int i=0;i<value;i++){
            file<<"\t\t\t\t\t\tStatus client...Data and Data.\t\t\t\t\t\t"<<endl;
            file<<"Client: "<<i+1<<endl;
            file<<"Name: "<<c[i].name<<endl;
            file<<"Surname: "<<c[i].surname<<endl;
            file<<"Edge: "<<c[i].edge<<endl;
            file<<"Saved: "<<c[i].count<<endl;
            file<<"Contry: "<<c[i].gdata.contry<<endl;
            file<<"State: "<<c[i].gdata.state<<endl;
            file<<"Street: "<<c[i].gdata.street<<endl;
            file<<"Number: "<<c[i].gdata.number<<endl;
            file<<endl;
    }
        
    }else{
        cout<<"Option not found"<<endl;
    }
}
//Funcion para los datos generales de los archivos.
void verification_files(client *c, int value){
    
    char file[50]; //Para nombre del archivo.
    int op;
    cout<<"What do you want to file generate MD[0] or ST[1]? "; //Comparacion logica si quiere monetario o de datos personales
    cin>>op;
    if (op==0){
        cout<<"File's name: ";
        cin>>file;
        Download_data(c,value,"MD",file); //Llama a funcion para descargar los datos. TDA y ffl son tipo string.
        cout<<"File(s) exported...";
    }else if (op==1){
        cout<<"File's name: ";
        cin>>file;
        Download_data(c,value,"ST",file);
        cout<<"File(s) exported...";  
    }
    
}
//Imprime los datos personales del cliente.
void print_data (client *c,int value){
    for (int i = 0;i<value;i++){
        cout<<"Client: "<<i+1<<endl;
        cout<<"Name: "<<c[i].name<<endl;
        cout<<"Surname: "<<c[i].surname<<endl;
        cout<<"Edge: "<<c[i].edge<<endl;
        cout<<"Saved: "<<c[i].count<<endl;
        cout<<"Contry: "<<c[i].gdata.contry<<endl;
        cout<<"State: "<<c[i].gdata.state<<endl;
        cout<<"Street: "<<c[i].gdata.street<<endl;
        cout<<"Number: "<<c[i].gdata.number<<endl;
        cout<<endl;
        
    }
}
//Genara la estructura dinamica que recibe la funcion tam (paso por referecia).
client *new_clients(int &value){
    int op,val=0,tam=0; //Variables que se modificaran para cambiar el valor de 'value'
    tam_(val);
    client *c = reserve(val); //Se reserva el tamano de la estructura 
    if (!c){
        cout<<"Error on dynamic memory..."<<endl; //En el caso si sucedira un error.
        exit(1);
        delete[] c;
    }
    value = val; //val es lo que se tomo de la funcion tam_ ya no vale 0 y ahora rescata ese valor value.
    return c; //Regresa la estructura.
}

//Borra el nodo.
void delete_purge(client *c){
    delete[] c;
}
//Menu del programa principal.
void menu(){
    int value = 0,op=0;
    client *c = new_clients(value);
    do{
        cout<<"\t\tPROTECO Bank... (ADMINISTRATOR)\t\t\t"<<endl;
        cout<<"Options"<<endl;
        cout<<"Create new clients. (Default)"<<endl;
        cout<<"1. Upload data."<<endl;
        cout<<"2. Status Client."<<endl;
        cout<<"3. Print data."<<endl;
        cout<<"4. Print on a file data."<<endl;
        cout<<"5. Delete clients (All) and exit"<<endl;

        
        cout<<"===> ";
        cin>>op;
        if(op==1){
            Uploading_data(c,value);
        }else if(op==2){
            status_client(c,value);
        }else if(op==3){
            print_data(c,value);
        }else if(op==4){
            verification_files(c,value);
        }else if(op==5){
            delete_purge(c);
            break;
        }
    }while(op!=5);
}