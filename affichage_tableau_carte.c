#include<stdio.h>
#include<stdlib.h>
#include"carte.h"
#include"t_jeu.h"


void affichage_tableau_carte(t_jeu t_jeu)// t_jeu est un tableau de 52 cases de type carte
{
    for(int i=0;i<52;i++)// boucle pour afficher tous les cartes
    {
        if(t_jeu[i].valeur == 1)
        {
            printf(" A");
        }
        if(t_jeu[i].valeur>1 && t_jeu[i].valeur<=10)
        {
            printf("%2d",t_jeu[i].valeur);
        }
        if(t_jeu[i].valeur == 11)
        {
            printf(" V");
        }
        if(t_jeu[i].valeur == 12)
        {
            printf(" D");
        }
        if(t_jeu[i].valeur == 13)
        {
            printf(" R");
        }
        
        /////Affichage de la couleur //////
        
        if(t_jeu[i].couleur == coeur)
        {
            printf("\xE2\x99\xA0");
        }
        if(t_jeu[i].couleur == pique)
        {
            printf("\xE2\x99\xA1");
        }
        if(t_jeu[i].couleur == carreau)
        {
            printf("\xE2\x99\xA2");
        }
        if(t_jeu[i].couleur == trefle)
        {
            printf("\xE2\x99\xA3");
        }
        
        printf(" \n");
    }
}


