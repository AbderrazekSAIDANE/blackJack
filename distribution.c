#include"carte.h"
#include"t_jeu.h"
#include"t_main.h"
#include"t_partie.h"
#include"pioche.h"
#include"remplissage.h"
#include"melange.h"
#include"initialisation.h"
#include"valeurTotaleMain.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>


void distribution(t_partie* jeu,int tour)
{
    int nbcJoueur=0,nbcOrdi=0,equiCarte;
    int pospioche=jeu->pioche.posPioche;
    char rep[20];
    for(;pospioche<4;)//on distribue quatres cartes deux pour chacun comme demandé sur l'énoncer
    {
        if(tour==0)
        {
        jeu->ordinateur.jeuMain[nbcOrdi]=jeu->pioche.carte52[pospioche];
            nbcOrdi++;
            pospioche++;
            tour=1;
        }
        if(tour==1)
        {
        jeu->joueur.jeuMain[nbcJoueur]=jeu->pioche.carte52[pospioche];
            nbcJoueur++;
            pospioche++;
            tour=0;
        }
    }
    jeu->ordinateur.nbCartes=nbcOrdi;
    jeu->joueur.nbCartes=nbcJoueur;
    jeu->pioche.posPioche=pospioche;

}
