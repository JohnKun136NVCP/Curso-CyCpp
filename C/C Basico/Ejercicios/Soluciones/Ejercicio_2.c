#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,gaussian;
    printf("Ingrese el numero totales maximos: ");
    scanf("%d",&n);
    gaussian = (n*(n+1)*(2*n+1))/6;
    printf("La suma de gauss es: %d\n",gaussian);
    return 0;
}
