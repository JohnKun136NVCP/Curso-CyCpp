#include<iostream>
#include <iostream>
#include<fstream>
#include <string.h>
using namespace std;
struct gdata{//Data strict with general information
    char street[100]; 
    char contry[100];
    char state[100];
    int number;
};
typedef struct client{//Data struct with personal information
    char name[100];
    char surname[100];
    int edge;
    struct gdata gdata;
    long double count;
}client;

void tam_(int &value);
client *reserve(int tam);
void status_client (client *c);
void program();
void tam_(int &value){
    int c;
    cout<<"Number of clients: ";
    cin>>c;
    value = c;
}

client *reserve(int tam){
    cout<<"Uploading..."<<endl;
    client *c = (client*)malloc(tam*sizeof(client));
    if(!c){
        cout<<"Error";
    }
    cout<<"Process successfully"<<endl;
    return c;
}

client *Uploading_data(client *c,int value){
    char payload[100];
    if(!c){
        cout<<"Problems :/"<<endl;
        delete [] c;
        exit(1);
    }
    for (int i = 0;i<value;i++){
        fflush(stdin);
        cout<<"Name: ";
        cin>>payload;
        strncpy(c[i].name,payload,100);
        cout<<"Surname: ";
        cin>>payload;
        strncpy(c[i].surname,payload,100);
        cout<<"Edge: ";
        cin>>c[i].edge;
        cout<<"Saved: ";
        cin>>c[i].count;
        cout<<"Contry: ";
        cin>>payload;
        strncpy(c[i].gdata.contry,payload,100);
        fflush(stdin);
        cout<<"State(Without spaces, with -): ";
        cin>>payload;
        strncpy(c[i].gdata.state,payload,100);
        cout<<"Street(Without spaces, with -): ";
        cin>>payload;
        strncpy(c[i].gdata.street,payload,100);
        cout<<"Number: ";
        cin>>c[i].gdata.number;
    }
    return c;
}
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
template <class TDA,class ffl>
void Download_data(client *c,int value,TDA kind,ffl archive){
    if(strcmp("MD",kind)==0){
        ofstream file;
        file.open(archive,ios::out);
        if(file.fail()){
            cout<<"Error file not found"<<endl;
            exit(1);
        }
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
        file.close();
        
        
    }else if(strcmp("ST",kind)==0){
        ofstream file;
        file.open(archive,ios::out);
        if(file.fail()){
            cout<<"Error file not found"<<endl;
            exit(1);
        }
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
        
    }else{
        cout<<"Option not found"<<endl;
    }
}
void verification_files(client *c, int value){
    
    char file[50];
    int op;
    cout<<"What do you want to file generate MD[0] or ST[1]? ";
    cin>>op;
    if (op==0){
        cout<<"File's name: ";
        cin>>file;
        Download_data(c,value,"MD",file);
        cout<<"File(s) exported...";
    }else if (op==1){
        cout<<"File's name: ";
        cin>>file;
        Download_data(c,value,"ST",file);
        cout<<"File(s) exported...";  
    }
    
}
void print_data (client *c,int value){
    for (int i = 0;i<value;i++){
        cout<<"Client: "<<i+1<<endl;
        cout<<"Name: "<<c[i].name<<endl;
        cout<<"Surname: "<<c[i].surname<<endl;
        cout<<"Edge: "<<c[i].edge<<endl;
        cout<<"Saved: "<<c[i].count<<endl;
        cout<<"Contry: "<<c[i].gdata.contry<<endl;
        cout<<"State: "<<c[i].gdata.state<<endl;
        cout<<"Street: "<<c[i].gdata.state<<endl;
        cout<<"Number: "<<c[i].gdata.number<<endl;
        cout<<endl;
        
    }
}

client *new_clients(int &value){
    int op,val=0,tam=0;
    tam_(val);
    client *c = reserve(val);
    if (!c){
        cout<<"Error on dynamic memory..."<<endl;
        exit(1);
        delete[] c;
    }
    value = val;
    return c;
}
void delete_purge(client *c){
    delete[] c;
}
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
    }while(op!=5);
}
