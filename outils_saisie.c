/* Fichier : saisie.c
 * Auteur  : Alexandre Lafaye
 * Date    : 12.11.2015
 *
 * But     :  Labo10: Libraire de saisie
 *
 *
 * Remarque(s) : 
 *
 *
 * Compilateur : g++
 * Debuggueur : gdb
 */
/*
 * Pour Windows
 * #define _CRT_SECURE_NO_WARNINGS
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "outils_saisie.h"

#define ASCII_O 'O'
#define ASCII_o 'o'
#define ASCII_N 'N'
#define ASCII_n 'n'

/*---------------------------------------------------------------------
 * Vide la ligne courante du tampon d'entree
 */
int vide_ligne (void){

    while(getchar() != '\n'){
    }
    return EXIT_SUCCESS;
}


/*---------------------------------------------------------------------
 * Affiche un message et confirme (oui/non) le choix de l'utilisateur
 */
int confirmation (char const *invite){
    int verif_entree, retour;
    char reponse;

    /* Entree utilisateur */
    do{
	printf("%s ", invite);
	printf("(o/n) ");
	verif_entree = scanf("%c", &reponse);
	/* Pour verifier que l'entree est correcte */
	if(verif_entree != 1)
	    printf("L'entree est incorrecte!\n");
	else if(reponse != ASCII_O && reponse != ASCII_o && reponse != ASCII_N && reponse != ASCII_n){
	    printf("Il faut repondre par (o/n)!\n");
	    verif_entree = 0;
	}
    }
    while(verif_entree != 1);

    vide_ligne();

    /* Le retour de la fonction, 1 si la reponse est oui 0 sinon. */
    if(reponse == ASCII_O || reponse == ASCII_o){
	retour = 1;
    }
    else if(reponse == ASCII_N || reponse == ASCII_n){
	retour = 0;
    }

    return retour;
}

/*---------------------------------------------------------------------
 * Lecture sans erreur d'un entier signe avec demande préalable
 * Le reste de la ligne est vide
 */
    int lire_entier (char const *invite){
	int retour, verif_entree;

	/* Entree utilisateur */
	do{
	    printf("%s", invite);
	    verif_entree = scanf("%d", &retour);
	    if(verif_entree != 1)
		printf("L'entree est incorrecte!\n");
	}
	while(verif_entree != 1);

	vide_ligne();

	return retour;
    }

/*---------------------------------------------------------------------
 * Lecture sans erreur d'un entier signe entre 2 bornes;
 * avec demande préalable
 * Le reste de la ligne est vide
 */
    int lire_entier_borne (char const *invite,
	    int        borne_inf,
	    int        borne_sup){

	int retour, verif_entree;

	/* Entree utilisateur */
	do{
	    printf("%s", invite);
	    verif_entree = scanf("%d", &retour);
	    if(verif_entree != 1){
		printf("L'entree est incorrecte!\n");
	    }
	    /* Verification des bornes */
	    else if(retour>borne_sup || retour<borne_inf){
		printf("L'entree n'est pas dans les bornes demandées!\n");
		verif_entree = 0;
	    }
	}
	while(verif_entree != 1);

	vide_ligne();

	return retour;
    }

/*---------------------------------------------------------------------
 * Lecture sans erreur d'un reel (simple ou double) avec demande préalable
 * Le reste de la ligne est vide
 */
double lire_reel ( char const *invite ){
    double retour;
    int verif_entree;

    /* Entree utilisateur */
    do{
	printf("%s", invite);
	verif_entree = scanf("%lf", &retour);
	if(verif_entree != 1)
	    printf("L'entree est incorrecte!\n");
    }
    while(verif_entree != 1);

    vide_ligne();

    return retour;
}

/*---------------------------------------------------------------------
 * Lecture sans erreur d'un reel (simple ou double) entre 2 bornes;
 * avec demande préalable
 * Le reste de la ligne est vide
 */
	double lire_reel_borne (char const *invite,
		double     borne_inf,
		double     borne_sup){

	    double retour;
	    int verif_entree;

	    /* Entree utilisateur */
	    do{
		printf("%s", invite);
		verif_entree = scanf("%lf", &retour);
		if(verif_entree != 1){
		    printf("L'entree est incorrecte!\n");
		}
		/* Verification des bornes */
		else if(retour>borne_sup || retour<borne_inf){
		    printf("L'entree n'est pas dans les bornes demandées!\n");
		    verif_entree = 0;
		}
	    }
	    while(verif_entree != 1);

	    vide_ligne();

	    return retour;
	}

