#include"t_partie.h"
#include<stdio.h>
#include<stdlib.h>

void valeurTotaleMain(t_partie* jeu,int* valeurOrdi,int* valeurJoueur)
{
    int valeurPioche=0;
    int asO=0,asJ=0;
    for(int i=0;i<52;i++)
    {
        valeurPioche=valeurPioche+(jeu->pioche.carte52[i].valeur);
    }
    for(int i=0;i<2;i++)
    {
        printf("la valeur de carte N°%d de l'ordi est %d\n",(i+1),jeu->ordinateur.jeuMain[i].valeur);
        if(jeu->ordinateur.jeuMain[i].valeur==1 && asO==0)
        {
            jeu->ordinateur.jeuMain[i].valeur=11;
            asO=1;
        }
        *valeurOrdi=*valeurOrdi+(jeu->ordinateur.jeuMain[i].valeur);
    }
    for(int i=0;i<2;i++)
    {
        printf("la valeur de carte N°%d de la main du joueur est %d\n",(i+1),jeu->joueur.jeuMain[i].valeur);
        if(jeu->joueur.jeuMain[i].valeur==1 && asJ==0)
        {
            jeu->joueur.jeuMain[i].valeur=11;
            asJ=1;
        }
        *valeurJoueur=*valeurJoueur+(jeu->joueur.jeuMain[i].valeur);
    }
    printf("la valeur totale de la main de l'ordi est %d\n",*valeurOrdi);
    printf("la valeur totale de la main du joueur est %d\n",*valeurJoueur);
    //// on utilise des variables de type pointeur pour pouvoir les utilisés en dehors de cette fonction
}

