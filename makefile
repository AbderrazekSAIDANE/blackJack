executable : affichage_tableau_carte.o blackjack_1.o melange.o remplissage.o initialisation.o distribution.o afficheMain.o valeurTotaleMain.o
	gcc -o executable affichage_tableau_carte.o blackjack_1.o melange.o remplissage.o initialisation.o distribution.o afficheMain.o valeurTotaleMain.o

affichage_tableau_carte.o : affichage_tableau_carte.c affichage_tableau_carte.h carte.h t_jeu.h
	gcc -c affichage_tableau_carte.c 

blackjack_1.o : blackjack_1.c carte.h t_jeu.h
	gcc -c blackjack_1.c

remplissage.o : remplissage.c remplissage.h carte.h t_jeu.h
	gcc -c remplissage.c

melange.o : melange.c melange.h carte.h t_jeu.h
	gcc -c melange.c

initialisation.o : initialisation.c initialisation.h carte.h t_jeu.h pioche.h t_main.h t_partie.h
	gcc -c initialisation.c

distribution.o : distribution.c initialisation.h initialisation.c carte.h t_jeu.h pioche.h t_main.h t_partie.h
	gcc -c distribution.c

afficheMain.o : afficheMain.c afficheMain.h initialisation.c initialisation.h distribution.c distribution.h affichage_tableau_carte.c affichage_tableau_carte.h carte.h t_jeu.h pioche.h t_main.h t_partie.h
	gcc -c afficheMain.c

valeurTotaleMain.o : valeurTotaleMain.c t_partie.h
	gcc -c valeurTotaleMain.c