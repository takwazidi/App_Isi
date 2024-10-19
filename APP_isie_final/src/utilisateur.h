#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <stdio.h>
typedef struct{
int jour;
int mois;
int annee;
}date;
typedef struct{
char nom[50];
char prenom[50];
char nationalite[50];
char cin[50];
date ddn ;
char login[50];
char mdp[50];
char numbv[50];
char role[50];
int sexe;
char adresse[50];
char vote[50];
}utilisateur;
void ajouter(utilisateur u);
void supprimer(char *id);
void modifier(char *id, utilisateur nouv);
void afficher_utilisateur(GtkWidget* treeview1,char*l);
void afficher_admin(GtkWidget* treeview1,char*l);
void afficher_agent(GtkWidget* treeview1,char*l);
void afficher_electeurr(GtkWidget* treeview1,char*l);
void afficher_observateur(GtkWidget* treeview1,char*l);
void chercher_utilisateur(GtkWidget* treeview1,char*l,char *cin);
int log(char login[], char mdp[]);
#endif
