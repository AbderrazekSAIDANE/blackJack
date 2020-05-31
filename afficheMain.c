#include"t_main.h"
#include"t_partie.h"
#include"carte.h"
#include"t_jeu.h"
#include"t_main.h"
#include"initialisation.h"
#include"affichage_tableau_carte.h"
#include"distribution.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"valeurTotaleMain.h"
#include<math.h>

void afficheMain(t_partie* jeu,char nom1[20],char nom2[20])
{
    int ecartJoueur=0,ecartOrdi=0,valeurO=0,valeurJ=0;
    char rep[20]="yes";
    int valeurOrdi=0,r=1;
    int valeurJoueur=0;
    ///////initialisation et affichage de toute la pioche///////////
    initialisation(jeu,nom1,nom2);
    affichage_tableau_carte(jeu->pioche.carte52);
    ////////Distribution de deux cartes pour chacuns des joueurs////////
    distribution(jeu,0);
    /////On compte la valeur totale des cartes de chaque joueur pour savoir si besoin d'un redistribution
    valeurTotaleMain(jeu,&valeurOrdi,&valeurJoueur);
    
    while((valeurJoueur<=21 && strcmp(rep,"yes")==0)|| valeurOrdi<17)
    {
        if(valeurOrdi<17) //L'ordinateur ne reprendra de carte que si la valeur de ses cartes est strictement inférieur à 17
        {
                jeu->ordinateur.jeuMain[jeu->ordinateur.nbCartes]=jeu->pioche.carte52[jeu->pioche.posPioche];
                printf("la valeur de la nouvelle carte pour l'ordi est %d\n",jeu->ordinateur.jeuMain[jeu->ordinateur.nbCartes].valeur);
                valeurOrdi=valeurOrdi+(jeu->ordinateur.jeuMain[jeu->ordinateur.nbCartes].valeur);
                jeu->ordinateur.nbCartes++;
                jeu->pioche.posPioche++;
                printf("la valeur des cartes de l'ordi est %d\n",valeurOrdi);
        }
            if((valeurJoueur)<=21 && r==1)// r=1 est un drapeau pour indiquer que ce  chemin n'a pas encore était parcouru
            {
                printf("veux tu une autre carte\n");
                scanf("%s",rep);
                while(strcmp(rep,"yes")==0 && (valeurJoueur)<=21)
                {
                    jeu->joueur.jeuMain[jeu->joueur.nbCartes]=jeu->pioche.carte52[jeu->pioche.posPioche];
                    printf("la valeur de la nouvelle carte pour le joueur %d\n",jeu->joueur.jeuMain[jeu->joueur.nbCartes].valeur);
                    valeurJoueur=valeurJoueur+(jeu->joueur.jeuMain[jeu->joueur.nbCartes].valeur);
                    
                    jeu->joueur.nbCartes++;
                    jeu->pioche.posPioche++;
                    printf("la valeur des cartes du joueur est %d\n",valeurJoueur);
                        if(valeurJoueur<=21)
                        {
                            printf("une nouvelle distribution?");
                            scanf("%s",rep);
                        }
                }
                r++;
            }
    }
    printf("le nom du premier joueur est %s\n",nom1);
    affichage_tableau_carte(jeu->ordinateur.jeuMain);
        printf("le nombre de carte chez l'ordi est %d\n",jeu->ordinateur.nbCartes);
    printf("le nom du deuxième joueur est %s\n",nom2);
    affichage_tableau_carte(jeu->joueur.jeuMain);
     printf("le nombre de carte chez le joueur est %d\n",jeu->joueur.nbCartes);
        
    printf("la valeur des cartes de l'ordi est %d\n",valeurOrdi);
    printf("la valeur des cartes du joueur est %d\n",valeurJoueur);
////////on utilise pas directement valeurJoueur et valeurOrdi car se sont des pointeurs et de peure de modifier leurs valeurs
    valeurJ=valeurJoueur;
    valeurO=valeurOrdi;
    ecartJoueur=valeurJ-21;
    ecartOrdi=valeurO-21;
//////// Afficher qui est le gagnant //////////
    if(abs(ecartOrdi)<abs(ecartJoueur))
        printf("l'ordinateur gagne\n");
    if(abs(ecartOrdi)>abs(ecartJoueur))
        printf("le joueur gagne\n");
//////// Combien de carte a été distribuée///////////
    printf("la position de la pioche est %d\n",jeu->pioche.posPioche);
}
