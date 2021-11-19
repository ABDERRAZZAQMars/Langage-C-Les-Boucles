#include <stdlib.h>
#include <stdio.h>

int main()
{   
    int nb , somme=0 , max=0;

    printf("Entrer Un Serie Nombres positifs : \n");
    
    while (nb!=0)
    {
        scanf("%d",&nb);
        
        if(nb<0 || nb>100)
        {
            printf("Svp Entrer Un Nombre Positif Et Inferieur a 100 \n");
            scanf("%d",&nb);
        }

        somme = somme + nb ;

        if (max<nb)
        {
            max=nb;
        }
        
    }

    printf("La somme d'un serie Nombres positifs Est %d \n",somme);
    printf("Le Nombre MAX Est %d \n",max);
    
    return 0;
}