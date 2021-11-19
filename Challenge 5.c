#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int nb , nbr ; 

    printf("Entrer Un Nombre : \n");
    scanf("%d",&nb);

    while (nb>0)
    {
        nbr=nb%10;
        printf("%d",nbr);
        nb=nb/10;
    }
    

    return 0;
}