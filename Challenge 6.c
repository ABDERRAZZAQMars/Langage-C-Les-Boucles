#include <stdlib.h>
#include <stdio.h>

int main()
{
    int nb , i , j , etat ;

    printf("Entrer Un Nombre : \n");
    scanf("%d",&nb);

    for (i=2 ; i<=nb ; i++)
    {
        etat=0;

        for (j=2 ; j<i ; j++)
        {
            if (i%j==0)
            {
                etat = 1;
                break;
            }


        }
        
        if (etat==0)
        {
            printf("Le Nombre %d Est Premier \n",i);
        }
        
    }
    

    return 0;
}