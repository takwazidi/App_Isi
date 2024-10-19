#include <stdio.h>
#include <time.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <gtk/gtk.h>
#include "reclamation.h"


void ajouter_reclamation(reclamation r, char *filename)
{
GtkWidget *rQuestion, *rInfo;
FILE *f;
int i=0;
gpointer user_data;
reclamation b;
f=fopen(filename,"a+");
    if(f!=NULL)
    {	while(fscanf(f,"%s %s %d %s %s %s \n",b.typedereclamation,b.idBureauvote,&(b.idlist),b.idreclamation,b.Objet,b.textereclamation)!=EOF)
	{
		
	if(strcmp(r.idreclamation,b.idreclamation)==0)
		i++;
	}
	if(i==0){
	 fprintf(f,"%s %s %d %s %s %s \n",r.typedereclamation,r.idBureauvote,r.idlist,r.idreclamation,r.Objet,r.textereclamation);

rQuestion=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_INFO,GTK_BUTTONS_OK,"Reclamation ajouté avec succès !");
	switch(gtk_dialog_run(GTK_DIALOG(rQuestion)))
	{
	case GTK_RESPONSE_OK:
	gtk_widget_destroy(rQuestion);
	break;
	}
	}
	if(i!=0){
	rInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_WARNING,GTK_BUTTONS_OK,"ID reclamation doit etre unique !");
	switch(gtk_dialog_run(GTK_DIALOG(rInfo)))
	{
	case GTK_RESPONSE_OK:
	gtk_widget_destroy(rInfo);
	break;
	}
	}
        fclose(f);
    }
}


void actualiser_reclamation(GtkWidget *liste, char *filename)
{
reclamation r;
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
gchar id_list[10];
FILE *f;


store=gtk_tree_view_get_model(liste);
if (store==NULL)
	{
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" Type de reclamation", renderer,"text",TYPE, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" ID Bureau de vote", renderer,"text",BUREAU, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" ID list", renderer,"text",LIST, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" ID reclamation", renderer,"text",RECLAMATION, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" Objet", renderer,"text",OBJET, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" Texte reclamation", renderer,"text",TEXT, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);


store=gtk_list_store_new (COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
f=fopen(filename,"r");
if(f!=NULL)


{ f = fopen(filename,"a+");
	while(fscanf(f,"%s %s %d %s %s %s \n",r.typedereclamation,r.idBureauvote,&(r.idlist),r.idreclamation,r.Objet,r.textereclamation)!=EOF)
        {
sprintf(id_list,"%d",r.idlist);
gtk_list_store_append (store,&iter);
gtk_list_store_set (store , &iter , TYPE, r.typedereclamation, BUREAU, r.idBureauvote, LIST, id_list , RECLAMATION, r.idreclamation, OBJET, r.Objet, TEXT, r.textereclamation , -1);
	}	
	fclose(f);
gtk_tree_view_set_model (GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
g_object_unref(store);
}
}
gtk_tree_view_set_enable_search(GTK_TREE_VIEW(liste),TRUE);
}
	
void supprimer_reclamation(reclamation r , char *filename)

{
    
    reclamation b;
    int a=0;
    GtkWidget *rInfo;
    gpointer user_data;
    FILE *f=fopen(filename, "r");
    FILE *g=fopen("nouv.txt","w");
    if(f!=NULL && g!=NULL)
    
    {
      while (fscanf(f,"%s %s %d %s %s %s \n",b.typedereclamation,b.idBureauvote,&(b.idlist),b.idreclamation,b.Objet,b.textereclamation)!=EOF)
        {
            if( strcmp(b.idreclamation,r.idreclamation)!=0 )
               
			 fprintf(g,"%s %s %d %s %s %s \n",b.typedereclamation,b.idBureauvote,b.idlist,b.idreclamation,b.Objet,b.textereclamation);

	else
			a=1;
	}
	rInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_INFO,GTK_BUTTONS_OK,a==1?"Reclamation supprimé avec succès":"Reclamation introuvable");
	switch(gtk_dialog_run(GTK_DIALOG(rInfo)))
	{
	case GTK_RESPONSE_OK:
	gtk_widget_destroy(rInfo);
	break;
	}
    fclose(f);
    fclose(g);
    remove(filename);
    rename("nouv.txt", filename);
return a;
}	
}

void modifier_reclamation(reclamation r, char *filename){
reclamation b;
GtkWidget *rInfo;
gpointer user_data;
FILE *f, *g;
f=fopen(filename,"r");
g=fopen("dump.txt","w");
if(f==NULL||g==NULL)
{
	return;
}
else{
	while(fscanf(f,"%s %s %d %s %s %s \n",b.typedereclamation,b.idBureauvote,&(b.idlist),b.idreclamation,b.Objet,b.textereclamation)!=EOF)
	{
		if(strcmp(b.idreclamation,r.idreclamation)!=0)
			fprintf(g,"%s %s %d %s %s %s \n",b.typedereclamation,b.idBureauvote,b.idlist,b.idreclamation,b.Objet,b.textereclamation);
		else
			fprintf(g,"%s %s %d %s %s %s \n",r.typedereclamation,r.idBureauvote,r.idlist,r.idreclamation,r.Objet,r.textereclamation);
	}
	rInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_INFO,GTK_BUTTONS_OK,"Reclamation modifié avec succès !");
	switch(gtk_dialog_run(GTK_DIALOG(rInfo)))
	{
	case GTK_RESPONSE_OK:
	gtk_widget_destroy(rInfo);
	break;
	}
	fclose(f);
	fclose(g);
remove(filename);
rename("dump.txt",filename);
}
}

int mediouni_check_substring(char str1[], char str2[]){
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


void chercherreclamation(GtkWidget *liste, char idreclamation[])
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;

reclamation r;

store=NULL;

FILE* f=NULL;

store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" Type de reclamation", renderer,"text",TYPE, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" ID Bureau de vote", renderer,"text",BUREAU, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);


	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" ID list", renderer,"text",LIST, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);


	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" ID reclamation", renderer,"text",RECLAMATION, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);


	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" Objet", renderer,"text",OBJET, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);


	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" Texte reclamation", renderer,"text",TEXT, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);



}


store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_INT, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING);

f=fopen("reclamation.txt","r");
if(f!=NULL)
{      
while(fscanf(f,"%s %s %d %s %s %s \n",r.typedereclamation,r.idBureauvote,&(r.idlist),r.idreclamation,r.Objet,r.textereclamation)!=EOF)
{
if(mediouni_check_substring(idreclamation,r.idreclamation))
{
gtk_list_store_append(store,&iter);
gtk_list_store_set(store , &iter , TYPE, r.typedereclamation, BUREAU, r.idBureauvote, LIST, r.idlist , RECLAMATION, r.idreclamation, OBJET, r.Objet, TEXT, r.textereclamation , -1);
}
}
fclose(f);

gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
g_object_unref(store);
}
}


	

