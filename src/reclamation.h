
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>

typedef struct {
char typedereclamation[50];
char idBureauvote[50];
int idlist;
char idreclamation[50];
char Objet[50];
char textereclamation[50];
} reclamation ;

enum
{
	TYPE,
	BUREAU,
	LIST,
	RECLAMATION,
	OBJET,
	TEXT,
	COLUMNS,
};

void ajouter_reclamation(reclamation r, char *filename);
void modifier_reclamation(reclamation r, char *filename);
void supprimer_reclamation(reclamation r , char *filename);
void actualiser_reclamation(GtkWidget *liste, char *filename);
void chercherreclamation(GtkWidget *liste, char idreclamation[]);
int mediouni_check_substring(char str1[], char str2[]);
