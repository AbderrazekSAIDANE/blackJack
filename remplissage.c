#include<stdio.h>
#include<stdlib.h>
#include"t_jeu.h"
#include"carte.h"
// cette fonction permet de génerer les différentes cartes 
void remplissage(t_jeu t_jeu)
{
    
    for(int j=0;j<13;j++)
        {
            t_jeu[j].valeur=j+1;
            t_jeu[j].couleur=0;
        }
    for(int j=13;j<26;j++)
    {
        t_jeu[j].valeur=j-12;
        t_jeu[j].couleur=1;
    }
    for(int j=26;j<39;j++)
    {
        t_jeu[j].valeur=j-25;
        t_jeu[j].couleur=2;
    }
    for(int j=39;j<52;j++)
    {
        t_jeu[j].valeur=j-38;
        t_jeu[j].couleur=3;
    }
}
  
