/*
 *
 ******************************************************************************\n
 * NOM DU PROJET : Gestion du parc informatique SD+C
 *
 *FICHIER  : ordinateur.h
 *
 *\n
 * DESCRIPTION :       Declarations de la structure Ordinateur, constantes et prototype
 *                 de toutes les fonctions la Gestion d'un parc d'ordinateur (max 300 machines)
 *
 *
 * GROUPE : 11
 *
 *\n
 * AUTEURS :            AFANGNIBO Dieudonne Marcel IABD\n
 *                      AGNAVE Mawusse Jason IABD\n
 *                      ATCHIKITI Djidjome Pierrette IABD\n
 *                      BARBOZA Abdoul-Raouf GC\n
 *                      CHILIE Tienpabe Eddie GM\n
 *                      HONKU Komi Godwin IABD\n
 *                      PASSAH Kwami David GC\n
 *                      SEGBEDZI Komi Charles GC\n
 *                      TCHALIM Maare Immenne GM\n
 *\n
 * DATE           : 28/04/2026\n
 *\n
 * VERSION        : finale
 * \n *\n
 * PROFESSEUR  : M. AKAKPO
 *
 ****************************************************************************/

#ifndef ORDINATEUR_H
#define ORDINATEUR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ORDINATEURS 300
#define TAILLE_CHAINE 100

// STRUCTURE ORDINATEUR

typedef struct {
    int numeroCarte;
    char specialite[TAILLE_CHAINE];
    char numeroSerie[TAILLE_CHAINE];
    char marque[TAILLE_CHAINE];
    float vitesseCPU;
    int ram;
    int tailleDisque;
    int prix;
} Ordinateur;

// Prototypes des fonctions

// Menu interactif
void afficherMenu(void);

// Fonctions d'allocation memoire
Ordinateur* creerOrdinateur(void);
void libererOrdinateur(Ordinateur** ordi);
void libererParc(Ordinateur** parc, int* nbOrdi);

// Fonctions CRUD
int ajouterOrdinateur(Ordinateur** parc, int* nbOrdi);
void listerOrdinateurs(Ordinateur** parc, int nbOrdi);
void afficherDetails(Ordinateur** parc, int nbOrdi);
int supprimerOrdinateur(Ordinateur** parc, int* nbOrdi);

// Fonction de recherches
int rechercherParNumeroSerie(Ordinateur** parc, int nbOrdi, const char* serie);

// Fonction de repartition
void repartirParSpecialite(Ordinateur** parc, int nbOrdi);
void repartirParMarque(Ordinateur** parc, int nbOrdi);
void repartirParRAM(Ordinateur** parc, int nbOrdi);

// Fonction de tris et de calcul
void classerParVitesseCPU(Ordinateur** parc, int nbOrdi);
long calculerValeurTotale(Ordinateur** parc, int nbOrdi);

// Utilitaires
void viderBuffer(void);
void afficherLigne(Ordinateur* ordi);

#endif
