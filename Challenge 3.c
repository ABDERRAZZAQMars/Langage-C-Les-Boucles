#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , nb , etat=0;

    printf("Entrer Un Nombre : \n");
    scanf("%d",&nb);

     if (nb==1 || nb==0)
    {
        etat=1;
    }   

    for (i=2;i<nb;i++)
    {
        if (nb%i==0)
        {
            etat=1;
            break;
        }  
    }
    
    if (etat==0)
    {
        printf("%d est premier\n",nb);
    }
    
    else
    {
        printf("%d n'est pas premier\n",nb);

    }
    

    return 0;
}