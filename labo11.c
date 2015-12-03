/* Fichier : labo11.c
 * Auteur  : Alexandre Lafaye
 * Date    : 26.11.2015
 *
 * But     :  Labo11: Dessiner différentes formes dans un terminal.
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


#include <stdlib.h>
#include <stdio.h>
#include "outils_saisie.h"
#include "dessins.h"

int main(void){
    int largeur, hauteur, amplitude;
    printf("Labo pour dessiner un carré, un triangle ou un sinus.\n");

    largeur = lire_entier_borne("Entrez la largeur du rectangle [0:40] : ", 0, 40);
    hauteur = lire_entier_borne("Entrez la hauteur du rectangle [0:40] : ", 0, 40);
    dessin_rectangle(largeur, hauteur);
    hauteur = lire_entier_borne("Entrez la hauteur du triangle [0:40] : ", 0, 40);
    dessin_triangle(hauteur);
    amplitude = lire_entier_borne("Entrez l'amplitude du sinus horizontal [0:40] : ", 0, 40);
    dessin_sinus_horizontal(amplitude, 40);
    amplitude = lire_entier_borne("Entrez l'amplitude du sinus vertical [0:40] : ", 0, 40);
    dessin_sinus_vertical(amplitude, 40);


    return EXIT_SUCCESS;
}
