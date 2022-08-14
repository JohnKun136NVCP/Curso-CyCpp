#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,cont_a=0,cont_r=0;
    float calificaciones[10];
    for(i=0;i<10;i++){
        printf("\nIngrese las calificacines [%d]: ",i+1);
        scanf("%f",&calificaciones[i]);
        fflush(stdin);
        if(calificaciones[i]<6){
            cont_r++;
        }
        else if(calificaciones[i]>=6){
            cont_a++;
        }
    }
    printf("No. aprobados: %d\n",cont_a);
    printf("No. reprobados: %d\n",cont_r);
    return 0;
}



