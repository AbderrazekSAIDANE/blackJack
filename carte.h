#ifndef __carte_h__
#define __carte_h__

typedef enum{

    coeur,pique,carreau,trefle

}t_couleurs;

typedef struct{

    int valeur;
    t_couleurs couleur;
    
}carte;

#endif
