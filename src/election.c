#include "election.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <gtk/gtk.h>


int ines_ajout_election(char fich[],election p){
    FILE *f=NULL;
	election m;
    f = fopen(fich,"r");
	if ((strlen(p.identifiant) * strlen(p.nb_habitant) * strlen(p.municipalite) )==0){
		fclose(f);
		return 2;
	}
if (f!=NULL){
    while (fscanf(f,"%s %s %d %s %d %d %d\n",m.identifiant,m.nb_habitant,&m.nb_conseiller,m.municipalite,&m.d.j,&m.d.m,&m.d.a)!=EOF){
	if (strcmp(m.identifiant,p.identifiant)==0){
	return 3;
}
}}
	fclose(f);
    f = fopen(fich,"a+");
    if (f!=NULL){
	
	fprintf(f,"%s %s %d %s %d %d %d\n",p.identifiant,p.nb_habitant,p.nb_conseiller,p.municipalite,p.d.j,p.d.m,p.d.a);
	fclose(f);
	return 1;
    }
    fclose(f);
return 0;
}
election ines_remplir_edit(char fich[], char id[]){

 	FILE *f=NULL;
    election p;
    f = fopen(fich,"r");
    if (f!=NULL)
    {

    while (fscanf(f,"%s %s %d %s %d %d %d\n",p.identifiant,p.nb_habitant,&p.nb_conseiller,p.municipalite,&p.d.j,&p.d.m,&p.d.a)!=EOF){
		if (strcmp(p.identifiant,id)==0){
 		fclose(f);
		return p;
		};
}
    }
 	fclose(f);
}
int ines_modifier_election(char fich[], election m){
    FILE *f=NULL;
    FILE *t = NULL;
    election p;
	//int quan = 10;

    if ((strlen(m.identifiant) * strlen(m.nb_habitant) * strlen(m.municipalite))==0){
	
	return 2;
}
    int flag=0;
    f = fopen(fich,"r");
    t = fopen("temp.txt" , "a+");
    if (f!=NULL)
    {
    while (fscanf(f,"%s %s %d %s %d %d %d\n",p.identifiant,p.nb_habitant,&p.nb_conseiller,p.municipalite,&p.d.j,&p.d.m,&p.d.a)!=EOF){
            if (strcmp(p.identifiant,m.identifiant)==0){
		flag = 1;
		fprintf(t,"%s %s %d %s %d %d %d\n",m.identifiant,m.nb_habitant,m.nb_conseiller,m.municipalite,m.d.j,m.d.m,m.d.a);
		}else{
		fprintf(t,"%s %s %d %s %d %d %d\n",p.identifiant,p.nb_habitant,p.nb_conseiller,p.municipalite,p.d.j,p.d.m,p.d.a);
	}
	}
        }
        fclose(f);
        remove(fich);
        fclose(t);
        rename("temp.txt",fich);
return flag;

    
}
int ines_supprimer_election(char fich[],char id[]){
    FILE *f=NULL;
    FILE *t = NULL;
	FILE *m = NULL;
    election p;
    int flag=0;
    f = fopen(fich,"r");
    t = fopen("temp.txt" , "a+");
    m = fopen("archive.txt", "a+");
    if (f!=NULL)
    {
    while (fscanf(f,"%s %s %d %s %d %d %d\n",p.identifiant,p.nb_habitant,&p.nb_conseiller,p.municipalite,&p.d.j,&p.d.m,&p.d.a)!=EOF){
            if (strcmp(p.identifiant,id)!=0){
		fprintf(t,"%s %s %d %s %d %d %d\n",p.identifiant,p.nb_habitant,p.nb_conseiller,p.municipalite,p.d.j,p.d.m,p.d.a);
		}else{
		flag = 1;
			fprintf(m,"%s %s %d %s %d %d %d\n",p.identifiant,p.nb_habitant,p.nb_conseiller,p.municipalite,p.d.j,p.d.m,p.d.a);
			
		}

        }}
        fclose(f);
	fclose(m);
        remove(fich);
        fclose(t);
        rename("temp.txt",fich);
	return flag;
}
int ines_check_substring(char str1[], char str2[]){
	int n1,n2,i,flag = 0;
	n1 = strlen(str1);
	n2= strlen(str2);
	if (n1<=n2){
	for (i=0;i<n1;i++){
		if (str1[i] == str2[i]){
			flag +=1;			
}
	}
	if (flag == n1){
		return 1;
	}else{
		return 0;
	}
}else{
	return 0;
}
}

enum{
IDENTIFIANT,
NB_HABITANT,
NB_CONSEILLER,
MUNICIPALITE,
J,
M,
A,
COLUMNS_in
};

void ines_treeview_afficher(GtkWidget *liste){
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;

GtkTreeIter iter;

GtkListStore *store;

election p;

store = NULL;

FILE* f= NULL;
store = gtk_tree_view_get_model(liste);

if (store==NULL){

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" identifiant",renderer,"text",IDENTIFIANT,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" nb_habitant",renderer,"text",NB_HABITANT,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);


renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" nb_conseiller",renderer,"text",NB_CONSEILLER,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);


renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" municipalite",renderer,"text",MUNICIPALITE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);


renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" jour",renderer,"text",J,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" mois",renderer,"text",M,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" annee",renderer,"text",A,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
}

store = gtk_list_store_new(COLUMNS_in, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_INT , G_TYPE_STRING,G_TYPE_INT,G_TYPE_INT,G_TYPE_INT);

f = fopen("ajout_election.txt","r");
if (f==NULL){
return ;
}else{
while(fscanf(f,"%s %s %d %s %d %d %d\n",p.identifiant,p.nb_habitant,&p.nb_conseiller,p.municipalite,&p.d.j,&p.d.m,&p.d.a)!=EOF){
gtk_list_store_append(store, &iter);
gtk_list_store_set(store,&iter,IDENTIFIANT,p.identifiant,NB_HABITANT,p.nb_habitant,NB_CONSEILLER,p.nb_conseiller,MUNICIPALITE,p.municipalite,J,p.d.j,M,p.d.m,A,p.d.a,-1);
}
fclose(f);

gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);
}}
void ines_treeview_search(GtkWidget *liste,char id[]){
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;

GtkTreeIter iter;

GtkListStore *store;

election p;

store = NULL;

FILE* f= NULL;
store = gtk_tree_view_get_model(liste);

if (store==NULL){

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" identifiant",renderer,"text",IDENTIFIANT,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" nb_habitant",renderer,"text",NB_HABITANT,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);


renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" nb_conseiller",renderer,"text",NB_CONSEILLER,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);


renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" municipalite",renderer,"text",MUNICIPALITE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);


renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" jour",renderer,"text",J,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" mois",renderer,"text",M,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" annee",renderer,"text",A,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
}

store = gtk_list_store_new(COLUMNS_in, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_INT , G_TYPE_STRING,G_TYPE_INT,G_TYPE_INT,G_TYPE_INT);

f = fopen("ajout_election.txt","r");
if (f==NULL){
return ;
}else{
while(fscanf(f,"%s %s %d %s %d %d %d\n",p.identifiant,p.nb_habitant,&p.nb_conseiller,p.municipalite,&p.d.j,&p.d.m,&p.d.a)!=EOF){
if (ines_check_substring(id, p.identifiant)){
gtk_list_store_append(store, &iter);
gtk_list_store_set(store,&iter,IDENTIFIANT,p.identifiant,NB_HABITANT,p.nb_habitant,NB_CONSEILLER,p.nb_conseiller,MUNICIPALITE,p.municipalite,J,p.d.j,M,p.d.m,A,p.d.a,-1);
}
}
fclose(f);

gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);
}}
