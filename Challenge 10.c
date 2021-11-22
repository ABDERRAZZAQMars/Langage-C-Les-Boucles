#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i , nb , somme=0 ;

	printf("Entrer Des Nombres :\n");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&nb);
		
        if(nb>0)
		{
		 	somme=somme+nb;
		}
    }

    printf("la somme Est %d",somme);

    return 0;
}