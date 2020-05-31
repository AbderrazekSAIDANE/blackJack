#include<stdio.h>
#include<stdlib.h>
#include"carte.h"

void affichage(carte carte)
{
    if(carte.valeur == 1)
    {
        printf(" A");
    }
    if(carte.valeur>1 && carte.valeur<=10)
    {
        printf("%2d",carte.valeur);
    }
    if(carte.valeur == 11)
    {
        printf(" V");
    }
    if(carte.valeur == 12)
    {
        printf(" D");
    }
    if(carte.valeur == 13)
    {
        printf(" R");
    }
    
    /////Affichage de la couleur //////
    
    if(carte.couleur == coeur)
    {
        printf("\xE2\x99\xA0");
    }
    if(carte.couleur == pique)
    {
        printf("\xE2\x99\xA1");
    }
    if(carte.couleur == carreau)
    {
        printf("\xE2\x99\xA2");
    }
    if(carte.couleur == trefle)
    {
        printf("\xE2\x99\xA3");
    }

    printf(" \n");
}

