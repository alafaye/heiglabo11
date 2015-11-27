#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
 * Dessin d'une simple ligne horizontale dont on peut
 * spécifier la largeur.
 */
void dessin_ligne_horizontale(int largeur){
    int iterateur;

    /* Partie destinée a créer la ligne du haut/bas */
    for(iterateur = 0; iterateur < largeur-1; iterateur++){
	printf("-");
    }
    printf("\n");
}


/*
 * Dessin d'une ligne d'un triangle pour laquelles on doit
 * spécifier l'espacement des faces
 */
void dessin_ligne_triangle(int espacement){
    int iterateur;
    printf("/");
    for(iterateur = 0; iterateur <= espacement; iterateur++){
	printf(" ");
    }
    printf("\\\n");
}


/*
 * dessin d'un rectangle dont on spécifie la hauteur et la
 * largeur
 */
void dessin_rectangle(int largeur, int hauteur){
    int iterateur_hauteur, iterateur_largeur;

    dessin_ligne_horizontale(largeur);

    /* Boucle pour l'itération verticale */
    for(iterateur_hauteur = 0; iterateur_hauteur < hauteur; iterateur_hauteur++){

	/* Partie destinée a créer la ligne du milieu*/
	printf("|");
	for(iterateur_largeur = 0; iterateur_largeur < largeur-3; iterateur_largeur++){
	    printf(" ");
	}
	printf("|\n");
    }
    dessin_ligne_horizontale(largeur);

}


/*
 * Desson d'un triangle dont on spécifie la hauteur
 */
void dessin_triangle(int hauteur){
    int iter_hauteur, iter_largeur;
    int largeur = 2*hauteur;

    printf("%*c\n", hauteur, '^');

    for(iter_hauteur = 0; iter_hauteur < hauteur-2; iter_hauteur++){
	for(iter_largeur = 0; iter_largeur<hauteur-iter_hauteur-2; iter_largeur++){
	    printf(" ");
	}

	dessin_ligne_triangle(2*iter_hauteur);
    }

    dessin_ligne_horizontale(largeur);
}


/*
 * Dessin d'un sinus horizontal
 * On peut choisir sa hauteur et son amplitude
 */
void dessin_sinus_horizontal(int amplitude, int periode){
    int iter_horizontal, iter_vertical;
    double *valeurs_sinus;
    valeurs_sinus = malloc(periode*sizeof(double*));
    if(valeurs_sinus==NULL){
	fprintf(stderr,"Allocation impossible");
    }
    else{
	/* Pour remplir le tableau des valeurs en chaque point*/
	for(iter_vertical = 0; iter_vertical <= periode; iter_vertical++){
	    valeurs_sinus[iter_vertical] = sin(iter_vertical/(2*M_PI)) * amplitude + amplitude;
	}

	for(iter_vertical = 0; iter_vertical <= periode; iter_vertical++){
	    for(iter_horizontal = 0;
		    iter_horizontal < valeurs_sinus[iter_vertical];
		    iter_horizontal++){

		printf(" ");

	    }
	    printf("*\n");
	}
    }
    free(valeurs_sinus);
    valeurs_sinus = NULL;
}
