#include<stdio.h>
#include<stdlib.h>
#include"carte.h"
#include"t_jeu.h"
#include<time.h>
// cette fonction nous permet de melanger la pioche
void melange(t_jeu t_jeu,int nombrePerm)
{
    int nombreMystere1=0,nombreMystere2=0,i=0;
    const int MAX = 51, MIN = 0;
    carte carteInter;
    srand(time(NULL));
    do
    {
        nombreMystere1 = (rand() % (MAX - MIN + 1)) + MIN;
        nombreMystere2 = (rand() % (MAX - MIN + 1)) + MIN;
        i++;
        carteInter=t_jeu[nombreMystere1];
        t_jeu[nombreMystere1]=t_jeu[nombreMystere2];
        t_jeu[nombreMystere2]=carteInter;
    }while(i<nombrePerm);
}
