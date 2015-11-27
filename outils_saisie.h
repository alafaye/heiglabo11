/* Fichier : saisie.h
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

#ifndef __OUTIL_SAISIE_H_
#define __OUTIL_SAISIE_H_

/*---------------------------------------------------------------------
 * Vide la ligne courante du tampon d'entree
 */
int vide_ligne (void);

/*---------------------------------------------------------------------
 * Affiche un message et confirme (oui/non) le choix de l'utilisateur
 */
int confirmation (char const *invite);

/*---------------------------------------------------------------------
 * Lecture sans erreur d'un entier signe avec demande préalable
 * Le reste de la ligne est vide
 */
int lire_entier (char const *invite);

/*---------------------------------------------------------------------
 * Lecture sans erreur d'un entier signe entre 2 bornes;
 * avec demande préalable
 * Le reste de la ligne est vide
 */
int lire_entier_borne (char const *invite,
                       int        borne_inf,
                       int        borne_sup);

/*---------------------------------------------------------------------
 * Lecture sans erreur d'un reel (simple ou double) avec demande préalable
 * Le reste de la ligne est vide
 */
double lire_reel ( char const *invite );

/*---------------------------------------------------------------------
 * Lecture sans erreur d'un reel (simple ou double) entre 2 bornes;
 * avec demande préalable
 * Le reste de la ligne est vide
 */
double lire_reel_borne (char const *invite,
                        double     borne_inf,
                        double     borne_sup);
#endif

