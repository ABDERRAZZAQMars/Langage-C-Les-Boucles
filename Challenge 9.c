#include<stdio.h>
#include<stdlib.h>


int main ()
{
    int nb , pow ;

    printf("Entrer Un Nombre : \n"); 
    scanf("%d",&nb); 

    printf("Entrer La Puissance : \n");
    scanf("%d",&pow); 

    int puissance = nb;

    if (nb>0 && pow >= 0)
    {
        while ( pow > 1 )
        { 
            puissance *= nb; 
            pow--; 
        } 
        
        printf("%d\n", puissance);
    } 
    
    return 0;
}