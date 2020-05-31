#include<stdio.h>
#include<stdlib.h>
#include"carte.h"
//#include"affichage_cartes.h"
#include"remplissage.h"
#include"affichage_tableau_carte.h"
#include<time.h>
#include"melange.h"
#include"afficheMain.h"
#include"t_jeu.h"
#include"valeurTotaleMain.h"

int main()
{
    t_partie* jeu;
    /*carte carte[52];
    printf("création des cartes\n");
    remplissage(carte);
    affichage_tableau_carte(carte);
    printf("Resultat du melange");
    melange(carte,1000);
    affichage_tableau_carte(carte);*/
    afficheMain(jeu,"ordi","Abdel");
    //valeurTotaleMain(jeu);
    return 0;
}
