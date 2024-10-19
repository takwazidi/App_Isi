#ifndef list_elec_H_INCLUDED
#define list_elec_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
int jour_ch;
int mois_ch;
int annee_ch;
}Date_ch ;

typedef struct
{
    char nomlist[50];
    char num_list[20];
    char id_list[20];
    char id_electeur[20];
    char orientation [10];
    char condidat1 [30];
    char condidat2 [30];
    char condidat3 [30];
    int nbv;
    int id_v;
    Date_ch date_ch;
    

} list_elec ;


int chadha_ajouter(char fich[],list_elec e);
int chadha_ajouter_un_vote(char fich[],char id[]);
int chadha_ajouter_vote_blanc(char fich[]);
void chadha_treeview_afficher(char fich[],GtkWidget *liste);
int chadha_supprimer_election(char fich[],char id[]);
void chadha_treeview_search(GtkWidget *liste,char ide[]);
list_elec chadha_remplir_modifier(char fich[],char id[]);
int chadha_make_modification(char fich[],list_elec e);
void chadha_trier_vote();
/*
int modifier( char *filename , int id_list , list_elec nouv );
int supprimer(char *filename , int id_list );
void treeview14_afficher_listes(GtkWidget *liste);

list_elec chercher(char *, int id_list);
int ajouter_utilisateur(char *filename, utilisateur u);

void vote (char *list_elec, char *utilis, int *VB , int *NoV );
int trier(char *list_elec );
void fichier(char *list_elec );*/

#endif
