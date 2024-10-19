#include "utilisateur.h"


void ajouter(utilisateur u)
{
	FILE *f=fopen("utilisateur.txt", "a");
	fprintf(f,"%s %s %s %s %d %d %d %s %s %s %s %s %d %s \n",u.nom,u.prenom,u.nationalite,u.cin,u.ddn.jour,u.ddn.mois,u.ddn.annee,u.login,u.mdp,u.numbv,u.role,u.adresse,u.sexe,u.vote);
	fclose(f);
}


void supprimer(char *id)
{
	FILE*f=NULL;
	FILE*f1=NULL;
	utilisateur u;
	f=fopen("utilisateur.txt","r");
	f1=fopen("ancien.txt","w+");
	while(fscanf(f,"%s %s %s %s %d %d %d %s %s %s %s %s %d %s \n",u.nom,u.prenom,u.nationalite,u.cin,&u.ddn.jour,&u.ddn.mois,&u.ddn.annee,u.login,u.mdp,u.numbv,u.role,u.adresse,&u.sexe,u.vote)!=EOF)
		if(strcmp(id,u.cin)!=0)
			fprintf(f1,"%s %s %s %s %d %d %d %s %s %s %s %s %d %s \n",u.nom,u.prenom,u.nationalite,u.cin,u.ddn.jour,u.ddn.mois,u.ddn.annee,u.login,u.mdp,u.numbv,u.role,u.adresse,u.sexe,u.vote);
	fclose(f);
	fclose(f1);
	remove("utilisateur.txt");
	rename("ancien.txt","utilisateur.txt");
}


void modifier(char *id, utilisateur nouv)
{
	FILE*f=NULL;
	FILE*f1=NULL;
	utilisateur u;
	f=fopen("utilisateur.txt","r");
	f1=fopen("ancien.txt","w+");
	while(fscanf(f,"%s %s %s %s %d %d %d %s %s %s %s %s %d %s \n",u.nom,u.prenom,u.nationalite,u.cin,&u.ddn.jour,&u.ddn.mois,&u.ddn.annee,u.login,u.mdp,u.numbv,u.role,u.adresse,&u.sexe,u.vote)!=EOF)
	{
		if(strcmp(id,u.cin)!=0)
			fprintf(f1,"%s %s %s %s %d %d %d %s %s %s %s %s %d %s \n",u.nom,u.prenom,u.nationalite,u.cin,u.ddn.jour,u.ddn.mois,u.ddn.annee,u.login,u.mdp,u.numbv,u.role,u.adresse,u.sexe,u.vote);
		else
			fprintf(f1,"%s %s %s %s %d %d %d %s %s %s %s %s %d %s \n",nouv.nom,nouv.prenom,nouv.nationalite,nouv.cin,nouv.ddn.jour,nouv.ddn.mois,nouv.ddn.annee,nouv.login,nouv.mdp,nouv.numbv,nouv.role,nouv.adresse,nouv.sexe,u.vote);
	}
	fclose(f);
	fclose(f1);
	remove("utilisateur.txt");
	rename("ancien.txt","utilisateur.txt");
}


int log(char login[], char mdp[])
{
	FILE*f=NULL;
	utilisateur u;
	f=fopen("utilisateur.txt","r");
	while(fscanf(f,"%s %s %s %s %d %d %d %s %s %s %s %s %d %s \n",u.nom,u.prenom,u.nationalite,u.cin,&u.ddn.jour,&u.ddn.mois,&u.ddn.annee,u.login,u.mdp,u.numbv,u.role,u.adresse,&u.sexe,u.vote)!=EOF)
	{
		if((strcmp(login,u.login)==0)&&(strcmp(mdp,u.mdp)==0))
		{
			if(strcmp(u.role,"Administrateur")==0)
			{
				fclose(f);
				return 1;
			}
			if(strcmp(u.role,"Agent_de_bureau_de_vote")==0)
			{
				fclose(f);
				return 2;
			}
			if(strcmp(u.role,"Electeur")==0)
			{
				fclose(f);
				return 3;
			}
			if(strcmp(u.role,"Observateur")==0)
			{
				fclose(f);
				return 4;
			}
		}
	}
}


GtkListStore *adstore;
GtkTreeViewColumn *adcolumn;
GtkCellRenderer *cellad;
FILE *f;
int i;
void afficher_utilisateur(GtkWidget* treeview1,char*l)
{
	utilisateur u;
        


        /* Creation du modele */
        adstore = gtk_list_store_new(14,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
				     G_TYPE_STRING,
				     G_TYPE_INT,
          	       	             G_TYPE_INT,
				     G_TYPE_INT,
                                     G_TYPE_STRING,
			             G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
				     G_TYPE_STRING,
                                     G_TYPE_INT,
				     G_TYPE_STRING);
        /* Insertion des elements */
        f=fopen(l,"r");
while(fscanf(f,"%s %s %s %s %d %d %d %s %s %s %s %s %d %s \n",u.nom,u.prenom,u.nationalite,u.cin,&u.ddn.jour,&u.ddn.mois,&u.ddn.annee,u.login,u.mdp,u.numbv,u.role,u.adresse,&u.sexe,u.vote)!=EOF)
        {GtkTreeIter pIter;

         /* Creation de la nouvelle ligne */
         gtk_list_store_append(adstore, &pIter);
         /* Mise a jour des donnees */
         gtk_list_store_set(adstore, &pIter,
                            0,u.cin,
                            1,u.nom,
                            2,u.prenom,
			    3,u.nationalite,
                            4,u.ddn.jour,
                            5,u.ddn.mois,
                            6,u.ddn.annee,
                            7,u.login,
			    8,u.mdp,
			    9,u.numbv,
			    10,u.role,
			    11,u.adresse,
			    12,u.sexe,
			    13,u.vote,
                            -1);}
        fclose(f);

/* Creation de la 1ere colonne */
if(i==0)
{cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("cin",
                                                            cellad,
                                                            "text", 0,
                                                            NULL);


        /* Ajouter la 1er colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


/* Creation de la 2eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("nom",
                                                            cellad,
                                                            "text", 1,
                                                            NULL);
/* Ajouter la 2emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 3eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("prenom",
                                                            cellad,
                                                            "text", 2,
                                                            NULL);
/* Ajouter la 3emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 4eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("nationalite",
                                                            cellad,
                                                            "text", 3,
                                                            NULL);
/* Ajouter la 4emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 5eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("jour",
                                                            cellad,
                                                            "text", 4,
                                                            NULL);
/* Ajouter la 5emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


/* Creation de la 6eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("mois",
                                                            cellad,
                                                            "text", 5,
                                                            NULL);
/* Ajouter la 6emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 7eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("annee",
                                                            cellad,
                                                            "text", 6,
                                                            NULL);
/* Ajouter la 7emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 8eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("login",
                                                            cellad,
                                                            "text", 7,
                                                            NULL);
/* Ajouter la 8emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 9eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("mdp",
                                                            cellad,
                                                            "text", 8,
                                                            NULL);
/* Ajouter la 9emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 10eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("numbv",
                                                            cellad,
                                                            "text",9,
                                                            NULL);
/* Ajouter la 10emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 11eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("role",
                                                            cellad,
                                                            "text", 10,
                                                            NULL);
/* Ajouter la 11emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 12eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("adresse",
                                                            cellad,
                                                            "text", 11,
                                                            NULL);
/* Ajouter la 12emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 13eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("sex",
                                                            cellad,
                                                            "text", 12,
                                                            NULL);
/* Ajouter la 13emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 14eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("vote",
                                                            cellad,
                                                            "text", 13,
                                                            NULL);
/* Ajouter la 14emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


i++;}


  gtk_tree_view_set_model ( GTK_TREE_VIEW (treeview1),
                                  GTK_TREE_MODEL(adstore)  );
}

void chercher_utilisateur(GtkWidget* treeview1,char*l,char *cin)
{
	utilisateur u;
        int nb=0;


        /* Creation du modele */
        adstore = gtk_list_store_new(14,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
				     G_TYPE_STRING,
				     G_TYPE_INT,
          	       	             G_TYPE_INT,
				     G_TYPE_INT,
                                     G_TYPE_STRING,
			             G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
				     G_TYPE_STRING,
                                     G_TYPE_INT,
				     G_TYPE_STRING);
        /* Insertion des elements */
        f=fopen(l,"r");
while(fscanf(f,"%s %s %s %s %d %d %d %s %s %s %s %s %d %s \n",u.nom,u.prenom,u.nationalite,u.cin,&u.ddn.jour,&u.ddn.mois,&u.ddn.annee,u.login,u.mdp,u.numbv,u.role,u.adresse,&u.sexe,u.vote)!=EOF)
        
	 {if( strcmp(cin,u.cin)==0){ nb++;
	 GtkTreeIter pIter;
         /* Creation de la nouvelle ligne */
         gtk_list_store_append(adstore, &pIter);
         /* Mise a jour des donnees */
         gtk_list_store_set(adstore, &pIter,
                            0,u.cin,
                            1,u.nom,
                            2,u.prenom,
			    3,u.nationalite,
                            4,u.ddn.jour,
                            5,u.ddn.mois,
                            6,u.ddn.annee,
                            7,u.login,
			    8,u.mdp,
			    9,u.numbv,
			    10,u.role,
			    11,u.adresse,
			    12,u.sexe,
			    13,u.vote,
                            -1);}
}
        fclose(f);

/* Creation de la 1ere colonne */
if(i==0)
{cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("cin",
                                                            cellad,
                                                            "text", 0,
                                                            NULL);


        /* Ajouter la 1er colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


/* Creation de la 2eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("nom",
                                                            cellad,
                                                            "text", 1,
                                                            NULL);
/* Ajouter la 2emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 3eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("prenom",
                                                            cellad,
                                                            "text", 2,
                                                            NULL);
/* Ajouter la 3emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 4eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("nationalite",
                                                            cellad,
                                                            "text", 3,
                                                            NULL);
/* Ajouter la 4emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 5eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("jour",
                                                            cellad,
                                                            "text", 4,
                                                            NULL);
/* Ajouter la 5emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


/* Creation de la 6eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("mois",
                                                            cellad,
                                                            "text", 5,
                                                            NULL);
/* Ajouter la 6emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 7eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("annee",
                                                            cellad,
                                                            "text", 6,
                                                            NULL);
/* Ajouter la 7emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 8eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("login",
                                                            cellad,
                                                            "text", 7,
                                                            NULL);
/* Ajouter la 8emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 9eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("mdp",
                                                            cellad,
                                                            "text", 8,
                                                            NULL);
/* Ajouter la 9emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 10eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("numbv",
                                                            cellad,
                                                            "text",9,
                                                            NULL);
/* Ajouter la 10emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 11eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("role",
                                                            cellad,
                                                            "text", 10,
                                                            NULL);
/* Ajouter la 11emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 12eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("adresse",
                                                            cellad,
                                                            "text", 11,
                                                            NULL);
/* Ajouter la 12emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 13eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("sex",
                                                            cellad,
                                                            "text", 12,
                                                            NULL);
/* Ajouter la 13emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 14eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("vote",
                                                            cellad,
                                                            "text", 13,
                                                            NULL);
/* Ajouter la 14emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


i++;}


  gtk_tree_view_set_model ( GTK_TREE_VIEW (treeview1),
                                  GTK_TREE_MODEL(adstore)  );
}



void afficher_admin(GtkWidget* treeview1,char*l)
{
	utilisateur u;
        int nb=0;


        /* Creation du modele */
        adstore = gtk_list_store_new(14,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
				     G_TYPE_STRING,
				     G_TYPE_INT,
          	       	             G_TYPE_INT,
				     G_TYPE_INT,
                                     G_TYPE_STRING,
			             G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
				     G_TYPE_STRING,
                                     G_TYPE_INT,
				     G_TYPE_STRING);
        /* Insertion des elements */
        f=fopen(l,"r");
while(fscanf(f,"%s %s %s %s %d %d %d %s %s %s %s %s %d %s \n",u.nom,u.prenom,u.nationalite,u.cin,&u.ddn.jour,&u.ddn.mois,&u.ddn.annee,u.login,u.mdp,u.numbv,u.role,u.adresse,&u.sexe,u.vote)!=EOF)
        
	 {if( strcmp(u.role,"Administrateur")==0){ nb++;
	 GtkTreeIter pIter;
         /* Creation de la nouvelle ligne */
         gtk_list_store_append(adstore, &pIter);
         /* Mise a jour des donnees */
         gtk_list_store_set(adstore, &pIter,
                            0,u.cin,
                            1,u.nom,
                            2,u.prenom,
			    3,u.nationalite,
                            4,u.ddn.jour,
                            5,u.ddn.mois,
                            6,u.ddn.annee,
                            7,u.login,
			    8,u.mdp,
			    9,u.numbv,
			    10,u.role,
			    11,u.adresse,
			    12,u.sexe,
			    13,u.vote,
                            -1);}
}
        fclose(f);

/* Creation de la 1ere colonne */
if(i==0)
{cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("cin",
                                                            cellad,
                                                            "text", 0,
                                                            NULL);


        /* Ajouter la 1er colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


/* Creation de la 2eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("nom",
                                                            cellad,
                                                            "text", 1,
                                                            NULL);
/* Ajouter la 2emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 3eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("prenom",
                                                            cellad,
                                                            "text", 2,
                                                            NULL);
/* Ajouter la 3emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 4eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("nationalite",
                                                            cellad,
                                                            "text", 3,
                                                            NULL);
/* Ajouter la 4emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 5eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("jour",
                                                            cellad,
                                                            "text", 4,
                                                            NULL);
/* Ajouter la 5emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


/* Creation de la 6eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("mois",
                                                            cellad,
                                                            "text", 5,
                                                            NULL);
/* Ajouter la 6emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 7eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("annee",
                                                            cellad,
                                                            "text", 6,
                                                            NULL);
/* Ajouter la 7emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 8eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("login",
                                                            cellad,
                                                            "text", 7,
                                                            NULL);
/* Ajouter la 8emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 9eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("mdp",
                                                            cellad,
                                                            "text", 8,
                                                            NULL);
/* Ajouter la 9emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 10eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("numbv",
                                                            cellad,
                                                            "text",9,
                                                            NULL);
/* Ajouter la 10emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 11eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("role",
                                                            cellad,
                                                            "text", 10,
                                                            NULL);
/* Ajouter la 11emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 12eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("adresse",
                                                            cellad,
                                                            "text", 11,
                                                            NULL);
/* Ajouter la 12emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 13eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("sex",
                                                            cellad,
                                                            "text", 12,
                                                            NULL);
/* Ajouter la 13emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 14eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("vote",
                                                            cellad,
                                                            "text", 13,
                                                            NULL);
/* Ajouter la 14emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


i++;}


  gtk_tree_view_set_model ( GTK_TREE_VIEW (treeview1),
                                  GTK_TREE_MODEL(adstore)  );
}


void afficher_agent(GtkWidget* treeview1,char*l)
{
	utilisateur u;
        int nb=0;


        /* Creation du modele */
        adstore = gtk_list_store_new(14,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
				     G_TYPE_STRING,
				     G_TYPE_INT,
          	       	             G_TYPE_INT,
				     G_TYPE_INT,
                                     G_TYPE_STRING,
			             G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
				     G_TYPE_STRING,
                                     G_TYPE_INT,
				     G_TYPE_STRING);
        /* Insertion des elements */
        f=fopen(l,"r");
while(fscanf(f,"%s %s %s %s %d %d %d %s %s %s %s %s %d %s \n",u.nom,u.prenom,u.nationalite,u.cin,&u.ddn.jour,&u.ddn.mois,&u.ddn.annee,u.login,u.mdp,u.numbv,u.role,u.adresse,&u.sexe,u.vote)!=EOF)
        
	 {if( strcmp(u.role,"Agent_de_bureau_de_vote")==0){ nb++;
	 GtkTreeIter pIter;
         /* Creation de la nouvelle ligne */
         gtk_list_store_append(adstore, &pIter);
         /* Mise a jour des donnees */
         gtk_list_store_set(adstore, &pIter,
                            0,u.cin,
                            1,u.nom,
                            2,u.prenom,
			    3,u.nationalite,
                            4,u.ddn.jour,
                            5,u.ddn.mois,
                            6,u.ddn.annee,
                            7,u.login,
			    8,u.mdp,
			    9,u.numbv,
			    10,u.role,
			    11,u.adresse,
			    12,u.sexe,
			    13,u.vote,
                            -1);}
}
        fclose(f);

/* Creation de la 1ere colonne */
if(i==0)
{cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("cin",
                                                            cellad,
                                                            "text", 0,
                                                            NULL);


        /* Ajouter la 1er colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


/* Creation de la 2eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("nom",
                                                            cellad,
                                                            "text", 1,
                                                            NULL);
/* Ajouter la 2emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 3eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("prenom",
                                                            cellad,
                                                            "text", 2,
                                                            NULL);
/* Ajouter la 3emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 4eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("nationalite",
                                                            cellad,
                                                            "text", 3,
                                                            NULL);
/* Ajouter la 4emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 5eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("jour",
                                                            cellad,
                                                            "text", 4,
                                                            NULL);
/* Ajouter la 5emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


/* Creation de la 6eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("mois",
                                                            cellad,
                                                            "text", 5,
                                                            NULL);
/* Ajouter la 6emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 7eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("annee",
                                                            cellad,
                                                            "text", 6,
                                                            NULL);
/* Ajouter la 7emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 8eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("login",
                                                            cellad,
                                                            "text", 7,
                                                            NULL);
/* Ajouter la 8emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 9eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("mdp",
                                                            cellad,
                                                            "text", 8,
                                                            NULL);
/* Ajouter la 9emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 10eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("numbv",
                                                            cellad,
                                                            "text",9,
                                                            NULL);
/* Ajouter la 10emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 11eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("role",
                                                            cellad,
                                                            "text", 10,
                                                            NULL);
/* Ajouter la 11emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 12eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("adresse",
                                                            cellad,
                                                            "text", 11,
                                                            NULL);
/* Ajouter la 12emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 13eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("sex",
                                                            cellad,
                                                            "text", 12,
                                                            NULL);
/* Ajouter la 13emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 14eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("vote",
                                                            cellad,
                                                            "text", 13,
                                                            NULL);
/* Ajouter la 14emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


i++;}


  gtk_tree_view_set_model ( GTK_TREE_VIEW (treeview1),
                                  GTK_TREE_MODEL(adstore)  );
}



void afficher_electeur(GtkWidget* treeview1,char*l)
{
	utilisateur u;
        int nb=0;


        /* Creation du modele */
        adstore = gtk_list_store_new(14,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
				     G_TYPE_STRING,
				     G_TYPE_INT,
          	       	             G_TYPE_INT,
				     G_TYPE_INT,
                                     G_TYPE_STRING,
			             G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
				     G_TYPE_STRING,
                                     G_TYPE_INT,
				     G_TYPE_STRING);
        /* Insertion des elements */
        f=fopen(l,"r");
while(fscanf(f,"%s %s %s %s %d %d %d %s %s %s %s %s %d %s \n",u.nom,u.prenom,u.nationalite,u.cin,&u.ddn.jour,&u.ddn.mois,&u.ddn.annee,u.login,u.mdp,u.numbv,u.role,u.adresse,&u.sexe,u.vote)!=EOF)
        
	 {if( strcmp(u.role,"Electeur")==0){ nb++;
	 GtkTreeIter pIter;
         /* Creation de la nouvelle ligne */
         gtk_list_store_append(adstore, &pIter);
         /* Mise a jour des donnees */
         gtk_list_store_set(adstore, &pIter,
                            0,u.cin,
                            1,u.nom,
                            2,u.prenom,
			    3,u.nationalite,
                            4,u.ddn.jour,
                            5,u.ddn.mois,
                            6,u.ddn.annee,
                            7,u.login,
			    8,u.mdp,
			    9,u.numbv,
			    10,u.role,
			    11,u.adresse,
			    12,u.sexe,
			    13,u.vote,
                            -1);}
}
        fclose(f);

/* Creation de la 1ere colonne */
if(i==0)
{cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("cin",
                                                            cellad,
                                                            "text", 0,
                                                            NULL);


        /* Ajouter la 1er colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


/* Creation de la 2eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("nom",
                                                            cellad,
                                                            "text", 1,
                                                            NULL);
/* Ajouter la 2emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 3eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("prenom",
                                                            cellad,
                                                            "text", 2,
                                                            NULL);
/* Ajouter la 3emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 4eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("nationalite",
                                                            cellad,
                                                            "text", 3,
                                                            NULL);
/* Ajouter la 4emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 5eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("jour",
                                                            cellad,
                                                            "text", 4,
                                                            NULL);
/* Ajouter la 5emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


/* Creation de la 6eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("mois",
                                                            cellad,
                                                            "text", 5,
                                                            NULL);
/* Ajouter la 6emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 7eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("annee",
                                                            cellad,
                                                            "text", 6,
                                                            NULL);
/* Ajouter la 7emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 8eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("login",
                                                            cellad,
                                                            "text", 7,
                                                            NULL);
/* Ajouter la 8emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 9eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("mdp",
                                                            cellad,
                                                            "text", 8,
                                                            NULL);
/* Ajouter la 9emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 10eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("numbv",
                                                            cellad,
                                                            "text",9,
                                                            NULL);
/* Ajouter la 10emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 11eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("role",
                                                            cellad,
                                                            "text", 10,
                                                            NULL);
/* Ajouter la 11emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 12eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("adresse",
                                                            cellad,
                                                            "text", 11,
                                                            NULL);
/* Ajouter la 12emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 13eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("sex",
                                                            cellad,
                                                            "text", 12,
                                                            NULL);
/* Ajouter la 13emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 14eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("vote",
                                                            cellad,
                                                            "text", 13,
                                                            NULL);
/* Ajouter la 14emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


i++;}


  gtk_tree_view_set_model ( GTK_TREE_VIEW (treeview1),
                                  GTK_TREE_MODEL(adstore)  );
}



void afficher_observateur(GtkWidget* treeview1,char*l)
{
	utilisateur u;
        int nb=0;


        /* Creation du modele */
        adstore = gtk_list_store_new(14,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
				     G_TYPE_STRING,
				     G_TYPE_INT,
          	       	             G_TYPE_INT,
				     G_TYPE_INT,
                                     G_TYPE_STRING,
			             G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
				     G_TYPE_STRING,
                                     G_TYPE_INT,
				     G_TYPE_STRING);
        /* Insertion des elements */
        f=fopen(l,"r");
while(fscanf(f,"%s %s %s %s %d %d %d %s %s %s %s %s %d %s \n",u.nom,u.prenom,u.nationalite,u.cin,&u.ddn.jour,&u.ddn.mois,&u.ddn.annee,u.login,u.mdp,u.numbv,u.role,u.adresse,&u.sexe,u.vote)!=EOF)
        
	 {if( strcmp(u.role,"Observateur")==0){ nb++;
	 GtkTreeIter pIter;
         /* Creation de la nouvelle ligne */
         gtk_list_store_append(adstore, &pIter);
         /* Mise a jour des donnees */
         gtk_list_store_set(adstore, &pIter,
                            0,u.cin,
                            1,u.nom,
                            2,u.prenom,
			    3,u.nationalite,
                            4,u.ddn.jour,
                            5,u.ddn.mois,
                            6,u.ddn.annee,
                            7,u.login,
			    8,u.mdp,
			    9,u.numbv,
			    10,u.role,
			    11,u.adresse,
			    12,u.sexe,
			    13,u.vote,
                            -1);}
}
        fclose(f);

/* Creation de la 1ere colonne */
if(i==0)
{cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("cin",
                                                            cellad,
                                                            "text", 0,
                                                            NULL);


        /* Ajouter la 1er colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


/* Creation de la 2eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("nom",
                                                            cellad,
                                                            "text", 1,
                                                            NULL);
/* Ajouter la 2emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 3eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("prenom",
                                                            cellad,
                                                            "text", 2,
                                                            NULL);
/* Ajouter la 3emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 4eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("nationalite",
                                                            cellad,
                                                            "text", 3,
                                                            NULL);
/* Ajouter la 4emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 5eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("jour",
                                                            cellad,
                                                            "text", 4,
                                                            NULL);
/* Ajouter la 5emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


/* Creation de la 6eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("mois",
                                                            cellad,
                                                            "text", 5,
                                                            NULL);
/* Ajouter la 6emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 7eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("annee",
                                                            cellad,
                                                            "text", 6,
                                                            NULL);
/* Ajouter la 7emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 8eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("login",
                                                            cellad,
                                                            "text", 7,
                                                            NULL);
/* Ajouter la 8emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 9eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("mdp",
                                                            cellad,
                                                            "text", 8,
                                                            NULL);
/* Ajouter la 9emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 10eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("numbv",
                                                            cellad,
                                                            "text",9,
                                                            NULL);
/* Ajouter la 10emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 11eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("role",
                                                            cellad,
                                                            "text", 10,
                                                            NULL);
/* Ajouter la 11emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
/* Creation de la 12eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("adresse",
                                                            cellad,
                                                            "text", 11,
                                                            NULL);
/* Ajouter la 12emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 13eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("sex",
                                                            cellad,
                                                            "text", 12,
                                                            NULL);
/* Ajouter la 13emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

/* Creation de la 14eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("vote",
                                                            cellad,
                                                            "text", 13,
                                                            NULL);
/* Ajouter la 14emme colonne à la vue */
gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


i++;}


  gtk_tree_view_set_model ( GTK_TREE_VIEW (treeview1),
                                  GTK_TREE_MODEL(adstore)  );
}

float agemoyen(char *filename)
{
 utilisateur u;
 int k=0,s=0;
 float moy;
    FILE * f=fopen(filename,"r");
    if(f!=NULL)
        while(fscanf(f,"%s %s %s %s %d %d %d %s %s %s %s %s %d %s \n",u.nom,u.prenom,u.nationalite,u.cin,&u.ddn.jour,&u.ddn.mois,&u.ddn.annee,u.login,u.mdp,u.numbv,u.role,u.adresse,&u.sexe,u.vote)!=EOF)
            if((strcasecmp(u.role,"Electeur")==0)&&(u.vote!=-1))
            {
                k++;
                s+=2023-u.ddn.annee;
            }
    moy=(float)s/k;
    fclose(f);
    return moy;
}



int nbe(char *filename, char *id)
{
	utilisateur u;
	int k=0;
	FILE * f=fopen(filename,"r");
    	if(f!=NULL)
            while(fscanf(f,"%s %s %s %s %d %d %d %s %s %s %s %s %d %s \n",u.nom,u.prenom,u.nationalite,u.cin,&u.ddn.jour,&u.ddn.mois,&u.ddn.annee,u.login,u.mdp,u.numbv,u.role,u.adresse,&u.sexe,u.vote)!=EOF)
                if((strcmp(id,u.numbv)==0)&&(strcmp(u.role,"Electeur")==0))
                    k++;
	return k;
}


