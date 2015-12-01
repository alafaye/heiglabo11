#ifndef __DESSINS_H_
#define __DESSINS_H_

/*
 * Dessin d'une simple ligne horizontale dont on peut
 * spécifier la largeur.
 */
void dessin_ligne_horizontale(int largeur);

/*
 * Dessin d'une ligne d'un triangle pour laquelles on doit
 * spécifier l'espacement des faces
 */
void dessin_ligne_triangle(int espacement);

/*
 * dessin d'un rectangle dont on spécifie la hauteur et la
 * largeur
 */
void dessin_rectangle(int largeur, int hauteur);

/*
 * Dessin d'un triangle dont on spécifie la hauteur
 */
void dessin_triangle(int hauteur);

/*
 * Dessin d'un sinus horizontal
 * On peut choisir sa hauteur et son amplitude
 */
void dessin_sinus_horizontal(int amplitude, int periode);

/*
 * Dessin d'un sinus vertical avec système d'axes
 */
void dessin_sinus_vertical(int amplitude, int periode);

#endif

