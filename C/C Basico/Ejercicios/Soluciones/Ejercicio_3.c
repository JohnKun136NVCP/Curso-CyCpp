#include<stdio.h>

///Prototipo
void integral(float particion[],int number,int cotsup, int cotinf);
float sup(float partition[],int number);
float inf(float partition[],int number);


int main(int argc, char const *argv[])
{
    int cota_sup,cota_inf,n;
    float particion[n];
    printf("Ingrese su cota inferior: ");
    scanf("%d",&cota_inf);
    printf("Ingrese su cota superior: ");
    scanf("%d",&cota_sup);
    printf("Ingrese el numero de particiones: ");
    scanf("%d",&n);
    integral(particion,n,cota_sup,cota_inf);
    
    return 0;
}

void integral(float particion[],int number,int cotsup, int cotinf){
    float aux=cotinf;
    printf("%d\n",number);
    printf("%d",1/number);
    for(int i=0; i<=number;i++){
        particion[i] = aux;
        aux +=(1/(float)(number));
    }
    printf("La suma superior es: %0.2f\n",sup(particion,number));
    printf("La suma inferior es: %0.2f\n",inf( particion,number));
    printf("El valor de integral en 'x' es: %0.1f",(sup(particion,number)+inf(particion,number))/2 );

}

float sup(float partition[],int number){
    /*
    f(x) = x
    */
    float evalue_function,delta,sup_sum=0;
    int cont;
    for(int x=0; x<=number;x++){
        cont = x+1;
        if (cont<=number){
            evalue_function = partition[x+1];
            delta = (1/(float)(number))*evalue_function;
        }
        else{
            break;
        }
        sup_sum +=delta;
    }
    return sup_sum;    

}

float inf(float particion[],int number){
    /*
    f(x) = x
    */
    float evalue_function,delta,inf_sum=0;
    int cont;
    for(int x=0; x<=number;x++){
        if (x!=number){
            delta = (1/(float)(number))*particion[x];
        }
        else{
            break;
        }
        inf_sum +=delta;
    }
    return inf_sum;    

}