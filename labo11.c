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
    printf("Labo pour dessiner un carré, un triangle ou un sinus.\n");
    dessin_rectangle(10, 10);
    dessin_triangle(10);
    dessin_sinus_horizontal(20,50);


    return EXIT_SUCCESS;
}
