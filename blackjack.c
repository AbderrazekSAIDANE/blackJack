#include<stdio.h>
#include<stdlib.h>
#include"carte.h"
#include"affichage_cartes.h"
#include"remplissage.h"


int main()
{
    t_carte carte;
    
    printf("création de la carte\ndonner la valeur de la carte ainsi que sa couleur\n");
    
    scanf("%d %d",&carte.valeur,&carte.couleur);
    affichage(carte);
    
    return 0;
}
