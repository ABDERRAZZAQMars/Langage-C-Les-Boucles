#include <stdlib.h>
#include <stdio.h>

int main()
{
    int Nb , i=1 , multiplication ;
    char Tb[10];

    printf("Entrer Un Nombre : \n");
    scanf("%d",&Nb);

    while (i<=10)
    {
        multiplication = Nb * i ;
        Tb[i]=multiplication;
        printf("La multiplication de %d * %d Est %d \n",Nb,i,Tb[i]);
        i++;
    }
    

    return 0;
}