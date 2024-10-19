#include <gtk/gtk.h>


typedef struct
{
int j;
int m;
int a;
}Date ;


typedef struct {

char identifiant[30],municipalite[30],nb_habitant[40];
int nb_conseiller;
Date d;

} election ;

int ines_ajout_election(char fich[],election p);
void ines_treeview_afficher(GtkWidget *liste);
election ines_remplir_edit(char fich[], char id[]);
int ines_modifier_election(char fich[], election m);
int ines_supprimer_election(char fich[],char id[]);
int ines_check_substring(char str1[], char str2[]);
void ines_treeview_search(GtkWidget *liste,char id[]);
