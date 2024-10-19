#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <gtk/gtk.h>
#include "list_elec.h"



int chadha_ajouter(char fich[],list_elec e){
    FILE *f=NULL;
    f = fopen(fich,"a+");
	list_elec m;
	if ((strlen(e.num_list) * strlen(e.nomlist) * strlen(e.id_list)*strlen(e.id_electeur) * strlen(e.condidat1) * strlen(e.condidat2)  * strlen(e.condidat3) )==0){
		fclose(f);
		return 2;
	}

while (fscanf(f,"%s %s %s %s %s %s %s %s %d %d %d %d %d\n",m.num_list,m.nomlist,m.id_list,m.id_electeur,m.orientation,m.condidat1,m.condidat2,m.condidat3,&m.nbv,&m.id_v,&m.date_ch.jour_ch,&m.date_ch.mois_ch,&m.date_ch.annee_ch)!=EOF){

	if (strcmp(m.num_list,e.num_list)==0){
				return -1;
	}
}
    if (f!=NULL){
	fprintf(f,"%s %s %s %s %s %s %s %s %d %d %d %d %d\n",e.num_list,e.nomlist,e.id_list,e.id_electeur,e.orientation,e.condidat1,e.condidat2,e.condidat3,e.nbv,e.id_v,e.date_ch.jour_ch,e.date_ch.mois_ch,e.date_ch.annee_ch);
	fclose(f);
	return 1;
    }
    fclose(f);
return 0;
}

int chadha_ajouter_un_vote(char fich[],char id[]){
   FILE *f=NULL;
    f = fopen(fich,"r");
    FILE *t=NULL;
    t = fopen("temp.txt" , "a+");
int flag=-1;
list_elec  e;
if (f!=NULL){
while (fscanf(f,"%s %s %s %s %s %s %s %s %d %d %d %d %d\n",e.num_list,e.nomlist,e.id_list,e.id_electeur,e.orientation,e.condidat1,e.condidat2,e.condidat3,&e.nbv,&e.id_v,&e.date_ch.jour_ch,&e.date_ch.mois_ch,&e.date_ch.annee_ch)!=EOF){

	if (strcmp(e.num_list,id)==0){
flag = 1;
		fprintf(t,"%s %s %s %s %s %s %s %s %d %d %d %d %d\n",e.num_list,e.nomlist,e.id_list,e.id_electeur,e.orientation,e.condidat1,e.condidat2,e.condidat3,e.nbv+1,e.id_v,e.date_ch.jour_ch,e.date_ch.mois_ch,e.date_ch.annee_ch);
	}else{
		fprintf(t,"%s %s %s %s %s %s %s %s %d %d %d %d %d\n",e.num_list,e.nomlist,e.id_list,e.id_electeur,e.orientation,e.condidat1,e.condidat2,e.condidat3,e.nbv,e.id_v,e.date_ch.jour_ch,e.date_ch.mois_ch,e.date_ch.annee_ch);
	}

}
}
        fclose(f);
        remove(fich);
        fclose(t);
        rename("temp.txt",fich);
return flag;
}

int chadha_ajouter_vote_blanc(char fich[]){
    FILE *f=NULL;
    f = fopen(fich,"r");
    FILE *t=NULL;
	int vb;
    t = fopen("temp.txt" , "a+");
if (f!=NULL){
while (fscanf(f,"%d\n",&vb)!=EOF){
	fprintf(t,"%d\n",vb+1);
}

        fclose(f);
        remove(fich);
        fclose(t);
        rename("temp.txt",fich);
}else{
	fprintf(t,"%d\n",1);
        fclose(t);
	rename("temp.txt",fich);
}
return 1;
}


void chadha_trier_vote(){

	FILE *f=NULL;
	f = fopen("liste.txt","r");
	FILE *t=NULL;
	t = fopen("list_triee.txt" , "a+");
	list_elec table[100];
	list_elec e;
	int index =0;
	int max;

	if (f!=NULL){
	while (fscanf(f,"%s %s %s %s %s %s %s %s %d %d %d %d %d\n",e.num_list,e.nomlist,e.id_list,e.id_electeur,e.orientation,e.condidat1,e.condidat2,e.condidat3,&e.nbv,&e.id_v,&e.date_ch.jour_ch,&e.date_ch.mois_ch,&e.date_ch.annee_ch)!=EOF){
		table[index] = e;
		index++;
	}
}
	for (int i=0;i<index-1;i++){
		max = i;
		for (int j=i+1;j<index;j++){
			if (table[max].nbv < table[j].nbv){
				max = j;			
			}
		}
	if (max !=i){
		e = table[i];
		table[i] = table[max];
		table[max]= e;
		}
	}
for (int i = 0; i<index;i++){
	fprintf(t,"%s %s %s %s %s %s %s %s %d %d %d %d %d\n",table[i].num_list,table[i].nomlist,table[i].id_list,table[i].id_electeur,table[i].orientation,table[i].condidat1,table[i].condidat2,table[i].condidat3,table[i].nbv,table[i].id_v,table[i].date_ch.jour_ch,table[i].date_ch.mois_ch,table[i].date_ch.annee_ch);
}
fclose(f);
fclose(t);
	


}


int chadha_supprimer_election(char fich[],char id[]){
    FILE *f=NULL;
    FILE *t = NULL;
    list_elec e;
    int flag=0;
    f = fopen(fich,"r");
    t = fopen("temp.txt" , "a+");
    if (f!=NULL)
    {
    while (fscanf(f,"%s %s %s %s %s %s %s %s %d %d %d %d %d\n",e.num_list,e.nomlist,e.id_list,e.id_electeur,e.orientation,e.condidat1,e.condidat2,e.condidat3,&e.nbv,&e.id_v,&e.date_ch.jour_ch,&e.date_ch.mois_ch,&e.date_ch.annee_ch)!=EOF){
            if (strcmp(e.num_list,id)!=0){
		fprintf(t,"%s %s %s %s %s %s %s %s %d %d %d %d %d\n",e.num_list,e.nomlist,e.id_list,e.id_electeur,e.orientation,e.condidat1,e.condidat2,e.condidat3,e.nbv,e.id_v,e.date_ch.jour_ch,e.date_ch.mois_ch,e.date_ch.annee_ch);
		}else{
		flag = 1;
		}

        }}
        fclose(f);
        remove(fich);
        fclose(t);
        rename("temp.txt",fich);
	return flag;
}


list_elec chadha_remplir_modifier(char fich[],char id[]){
    FILE *f=NULL;
	list_elec e;
    f = fopen(fich,"r");
	if (f!=NULL){
    while (fscanf(f,"%s %s %s %s %s %s %s %s %d %d %d %d %d\n",e.num_list,e.nomlist,e.id_list,e.id_electeur,e.orientation,e.condidat1,e.condidat2,e.condidat3,&e.nbv,&e.id_v,&e.date_ch.jour_ch,&e.date_ch.mois_ch,&e.date_ch.annee_ch)!=EOF){
            if (strcmp(e.num_list,id)==0){
			fclose(f);
			return e;
			}
		}

	}
	fclose(f);
	return e;	
}


int chadha_make_modification(char fich[],list_elec le){
FILE *f=NULL;
    FILE *t = NULL;
	FILE *m = NULL;
    list_elec e;
    int flag=0;
    f = fopen(fich,"r");

	if ((strlen(le.num_list) * strlen(le.nomlist) * strlen(le.id_list)*strlen(le.id_electeur) * strlen(le.condidat1) * strlen(le.condidat2)  * strlen(le.condidat3) )==0){
		fclose(f);
		return 2;
	}
    t = fopen("temp.txt" , "a+");
    if (f!=NULL)
    {
    while (fscanf(f,"%s %s %s %s %s %s %s %s %d %d %d %d %d\n",e.num_list,e.nomlist,e.id_list,e.id_electeur,e.orientation,e.condidat1,e.condidat2,e.condidat3,&e.nbv,&e.id_v,&e.date_ch.jour_ch,&e.date_ch.mois_ch,&e.date_ch.annee_ch)!=EOF){
            if (strcmp(e.num_list,le.num_list)!=0){
		fprintf(t,"%s %s %s %s %s %s %s %s %d %d %d %d %d\n",e.num_list,e.nomlist,e.id_list,e.id_electeur,e.orientation,e.condidat1,e.condidat2,e.condidat3,e.nbv,e.id_v,e.date_ch.jour_ch,e.date_ch.mois_ch,e.date_ch.annee_ch);
		}else{
		fprintf(t,"%s %s %s %s %s %s %s %s %d %d %d %d %d\n",le.num_list,le.nomlist,le.id_list,le.id_electeur,le.orientation,le.condidat1,le.condidat2,le.condidat3,le.nbv,le.id_v,le.date_ch.jour_ch,le.date_ch.mois_ch,le.date_ch.annee_ch);
		flag = 1;
		}

        }}
        fclose(f);
        remove(fich);
        fclose(t);
        rename("temp.txt",fich);
	return flag;

}


enum{
NUM_LIST,
NOMLIST,
ID_LIST,
ID_ELECTEUR,
ORIENTATION,
CONDIDAT1,
CONDIDAT2,
CONDIDAT3,
NBV,
JOUR_CH,
MOIS_CH,
ANNEE_CH,
COLUMNS_CH
};

void chadha_treeview_afficher(char fich[],GtkWidget *liste){
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;

GtkTreeIter iter;

GtkListStore *store;

list_elec e;

store = NULL;

FILE* f= NULL;
store = gtk_tree_view_get_model(liste);

if (store==NULL){

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Num list",renderer,"text",NUM_LIST,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Nom list",renderer,"text",NOMLIST,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);


renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Id list",renderer,"text",ID_LIST,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);


renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Id electeur",renderer,"text",ID_ELECTEUR,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);


renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Orientation",renderer,"text",ORIENTATION,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Condidat1",renderer,"text",CONDIDAT1,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Condidat2",renderer,"text",CONDIDAT2,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Condidat3",renderer,"text",CONDIDAT3,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Nbr vote",renderer,"text",NBV,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Jours",renderer,"text",JOUR_CH,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Mois",renderer,"text",MOIS_CH,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Annee",renderer,"text",ANNEE_CH,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
}

store = gtk_list_store_new(COLUMNS_CH, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_INT,G_TYPE_INT,G_TYPE_INT,G_TYPE_INT);

f = fopen(fich,"r");
if (f==NULL){
return ;
}else{
while(fscanf(f,"%s %s %s %s %s %s %s %s %d %d %d %d %d\n",e.num_list,e.nomlist,e.id_list,e.id_electeur,e.orientation,e.condidat1,e.condidat2,e.condidat3,&e.nbv,&e.id_v,&e.date_ch.jour_ch,&e.date_ch.mois_ch,&e.date_ch.annee_ch)!=EOF){
gtk_list_store_append(store, &iter);
gtk_list_store_set(store,&iter,NUM_LIST,e.num_list,NOMLIST,e.nomlist,ID_LIST,e.id_list,ID_ELECTEUR,e.id_electeur,ORIENTATION,e.orientation,CONDIDAT1,e.condidat1,CONDIDAT2,e.condidat2,CONDIDAT3,e.condidat3,NBV,e.nbv,JOUR_CH,e.date_ch.jour_ch,MOIS_CH,e.date_ch.mois_ch,ANNEE_CH,e.date_ch.annee_ch,-1);
}
fclose(f);

gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);
}}




void chadha_treeview_search(GtkWidget *liste,char ide[]){
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;

GtkTreeIter iter;

GtkListStore *store;

list_elec e;

store = NULL;

FILE* f= NULL;
store = gtk_tree_view_get_model(liste);

if (store==NULL){

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Num list",renderer,"text",NUM_LIST,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Nom list",renderer,"text",NOMLIST,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);


renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Id list",renderer,"text",ID_LIST,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);


renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Id electeur",renderer,"text",ID_ELECTEUR,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);


renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Orientation",renderer,"text",ORIENTATION,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Condidat1",renderer,"text",CONDIDAT1,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Condidat2",renderer,"text",CONDIDAT2,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Condidat3",renderer,"text",CONDIDAT3,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Nbr vote",renderer,"text",NBV,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Jours",renderer,"text",JOUR_CH,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Mois",renderer,"text",MOIS_CH,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer = gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes(" Annee",renderer,"text",ANNEE_CH,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
}

store = gtk_list_store_new(COLUMNS_CH, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_INT,G_TYPE_INT,G_TYPE_INT,G_TYPE_INT);

f = fopen("liste.txt","r");
if (f==NULL){
return ;
}else{
while(fscanf(f,"%s %s %s %s %s %s %s %s %d %d %d %d %d\n",e.num_list,e.nomlist,e.id_list,e.id_electeur,e.orientation,e.condidat1,e.condidat2,e.condidat3,&e.nbv,&e.id_v,&e.date_ch.jour_ch,&e.date_ch.mois_ch,&e.date_ch.annee_ch)!=EOF){
if (strcmp(ide,e.num_list)==0 || strcmp(ide,"")==0){
gtk_list_store_append(store, &iter);
gtk_list_store_set(store,&iter,NUM_LIST,e.num_list,NOMLIST,e.nomlist,ID_LIST,e.id_list,ID_ELECTEUR,e.id_electeur,ORIENTATION,e.orientation,CONDIDAT1,e.condidat1,CONDIDAT2,e.condidat2,CONDIDAT3,e.condidat3,NBV,e.nbv,JOUR_CH,e.date_ch.jour_ch,MOIS_CH,e.date_ch.mois_ch,ANNEE_CH,e.date_ch.annee_ch,-1);
}
}
fclose(f);

gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
g_object_unref(store);
}}






















