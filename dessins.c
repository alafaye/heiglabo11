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
    for(iterateur = 0; iterateur < largeur; iterateur++){
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
    for(iterateur_hauteur = 0; iterateur_hauteur < hauteur-2; iterateur_hauteur++){

	/* Partie destinée a créer la ligne du milieu*/
	printf("|");
	for(iterateur_largeur = 0; iterateur_largeur < largeur-2; iterateur_largeur++){
	    printf(" ");
	}
	printf("|\n");
    }
    dessin_ligne_horizontale(largeur);

}


/*
 * Dessin d'un triangle dont on spécifie la hauteur
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

    dessin_ligne_horizontale(largeur-1);
}


/*
 * Dessin d'un sinus horizontal
 * On peut choisir sa hauteur et son amplitude
 */
    void dessin_sinus_horizontal(int amplitude, int periode){
	int iter_horizontal, iter_vertical;
	double *valeurs_sinus;

	/* Allocation d'un tableau de taille suffisante pour stocker
	 * les valeurs du sinus sur la période
	 */
	valeurs_sinus = malloc(periode*sizeof(double*));
	if(valeurs_sinus==NULL){
	    fprintf(stderr,"Allocation impossible");
	}
	else{
	    /* Pour remplir le tableau des valeurs en chaque point
	     * Il est décalé de son amplitude pour éviter les valeurs négatives.
	     */
	    for(iter_vertical = 0; iter_vertical <= periode; iter_vertical++){
		valeurs_sinus[iter_vertical] = sin(iter_vertical/(2*M_PI)) * amplitude + amplitude;
	    }

	    /*
	     * Dessin du sinus
	     */
	    for(iter_vertical = 0; iter_vertical <= periode; iter_vertical++){
		for(iter_horizontal = 0;
			iter_horizontal <= floor(valeurs_sinus[iter_vertical])+0.5;
			iter_horizontal++){

		    printf(" ");

		}
		printf("*\n");
	    }
	}

	/*
	 * Libération de la mémoire
	 */
	free(valeurs_sinus);
	valeurs_sinus = NULL;
    }

/*
 * Dessin d'un sinus vertical avec système d'axes
 */
void dessin_sinus_vertical(int amplitude, int periode){
    int iter_horizontal, iter_vertical;
    double *valeurs_sinus;

    /* Allocation d'un tableau de taille suffisante pour stocker
     * les valeurs du sinus sur la période
     */
    valeurs_sinus=malloc(periode*sizeof(double*));
    if(valeurs_sinus == NULL){
	fprintf(stderr,"Allocation impossible");
    }

    else{
	/* Evaluation du sinus sur la periode
	 * Il est décalé de son amplitude pour éviter les amplitudes négatives.
	 */
	for(iter_horizontal = 0; iter_horizontal <= periode; iter_horizontal++){
	    valeurs_sinus[iter_horizontal] = sin(iter_horizontal/(2*M_PI)) * amplitude + amplitude;

	}

	/* Dessin du sinus */
	for(iter_vertical = 0; iter_vertical < amplitude*2; iter_vertical++){
	    /* L'axe des ordonnées */
	    printf("|");
	    for(iter_horizontal = 0; iter_horizontal < periode; iter_horizontal++){
		/* Les étoiles represent les évaluation du sinus en chaque ordonée */
		if((int)valeurs_sinus[iter_horizontal] == iter_vertical){
		    printf("*");
		}
		else{
		    /* Pour dessiner l'axe des abcisses */
		    if(iter_vertical != amplitude){
			printf(" ");
		    }
		    else{
			printf("-");}
		}
	    }
	    /*Ne pas oublier de fermer la ligne*/
	    printf("\n");
	}
    }

    /*
     * Libération de la mémoire
     */
    free(valeurs_sinus);
    valeurs_sinus = NULL;
}
