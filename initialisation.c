//#include"carte.h"
#include"t_jeu.h"
#include"t_main.h"
#include"t_partie.h"
#include"pioche.h"
#include"remplissage.h"
#include"melange.h"
#include<string.h>
//ce fichier est équivalent au fichier partie.c demandé sur l'énoncer
void initialisation(t_partie* jeu,char nom1[20],char nom2[20])
{
    remplissage(jeu->pioche.carte52);
    melange(jeu->pioche.carte52,1000);  
    jeu->pioche.posPioche=0;//indiquer que les carte de la pioche commence à l'indice 0
    strcpy(jeu->ordinateur.nomJoueur,nom1);// copie les noms des deux joueurs
    strcpy(jeu->joueur.nomJoueur,nom2);
    jeu->ordinateur.nbCartes=0;// indiquer que les mains des joueurs sont vides 
    jeu->joueur.nbCartes=0;
}
