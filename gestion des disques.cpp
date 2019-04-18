#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct disque{ 
    char auteur[20];           
    int annee;                  
    char titre[10];           
    int nbchansons;
    char liste[20][20];              
}disque;

int main ()
{
	disque music[10];
	int n;
	int k,j,i;
	char chaine[20];

	
	do
	{
		printf("donner n : ");
		scanf("%d",&n);
	}while ((n<0)||(n>10));
	
	int	taille[10][20];
	
	for (i=0;i<n;i++)
	{
		printf("donner le nom de lauteur : ");
		scanf("%s",music[i].auteur);
		printf("donner lanne : ");
		scanf("%d",&music[i].annee);
		printf("donner le titre : ");
		scanf("%s",music[i].titre);
		printf("donner le nombre de chanson : ");
		scanf("%d",&music[i].nbchansons);
		

	
	for (k=0;k<music[i].nbchansons;k++)
	{
		printf("donner la chanson num %d : ",k);
		scanf("%s",chaine);
		taille[i][k]=strlen(chaine);
		
		for (j=0;j<20;j++)
		{
		
			music[i].liste[k][j]=chaine[j];
			
		}
	
	}
	}
    
	
	for (i=0;i<n;i++)
	{
		printf("\n\n\n");
		printf("nom de lauteur : %s \n",music[i].auteur);
		printf("lanne : %d \n",music[i].annee);
		printf("le titre : %s \n",music[i].titre);
		printf("le nombre de chanson : %d \n",music[i].nbchansons);
		
			for (k=0;k<music[i].nbchansons;k++)
			{ 	
				printf("la chanson num %d : ",k);
		        for (j=0;j<taille[i][k];j++)
		        {
		
				printf("%c",music[i].liste[k][j]);
			
	        	}
				printf("\n");
			}
	}
	
	char chanson[20];
	printf("\n donner la chanson que vous voulier : ");
	scanf("%s",chanson);
	char ntr[20];
	char c;
	
	

	for (i=0;i<=n;i++)
	{
	
			for (k=0;k<music[i].nbchansons;k++)
			{ 	
				char ntr[]=" ";
		        for (j=0;j<taille[i][k];j++)
		        {
		         c=music[i].liste[k][j];
		         ntr[j]=c;
				
	        	}
	        	
	            if (!strcmp(ntr,chanson))
	            {
	            	printf("\n\n");
					printf("nom de lauteur : %s \n",music[i].auteur);
					printf("lanne : %d \n",music[i].annee);
					printf("le titre : %s \n",music[i].titre);
				}
			}
	}
	
	
}
