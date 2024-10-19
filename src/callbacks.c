#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "election.h"
//#include "election.c"
//#include "list_elec.c"
#include "list_elec.h"
#include "TPHF.c"
#include"bureau.h"
#include "utilisateur.c"
#include "utilisateur.h"
#include "reclamation.h"

int ines_accept=0;
char ines_identifiant[30] ="";
int ines_nb_conseiller=0;
int ines_flag_edit=0; 
int ines_oui_non_edit=1;
int ines_flag_tree_view = 0;

int saif_accept=0;
int saif_flag_edit=0;
char saif_identifiant[30] ="";
int saif_oui_non_edit=0;

char ID_RECLAMATION[50]="";
int oui_non ;


/*gboolean
on_ines_window_modifier_election_focus_in_event
                                        (GtkWidget       *widget,
                                        GdkEventFocus   *event,
                                        gpointer         user_data)
{

  return FALSE;
}


void
on_ines_radiobutton1_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_ines_radiobutton2_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}*/


/*void
on_ines_button_retour_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{

}
*/
/*
void
on_ines_button_confirmer_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{

}
*/

/*void
on_ines_combobox2_changed              (GtkComboBox     *combobox,
                                        gpointer         user_data)
{

}
*/
/*
gboolean
on_ines_window_afficher_election_focus_in_event
                                        (GtkWidget       *widget,
                                        GdkEventFocus   *event,
                                        gpointer         user_data)
{

  return FALSE;
}
*/

/*void
on_ines_treeview_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}
*/
/*
void
on_ines_entry_chercher_changed         (GtkEditable     *editable,
                                        gpointer         user_data)
{

}
*/
/*
void
on_ines_button_ajouter_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}

*/

/*void
on_ines_button_modifier_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{

}
*/
/*
void
on_ines_button_supprimer_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{

}
*/
/*
void
on_i_button_r_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}
*/

void
on_H_button35_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_H_button36_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_H_button38_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_H_button37_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}

/*
void
on_ines_combobox1_changed              (GtkComboBox     *combobox,
                                        gpointer         user_data)
{

}


void
on_ines_checkbutton_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_i_button_confirmer_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_i_button_retour_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}*/


void
on_H_button29_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_H_button2_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_H_button28_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


gboolean
on_treeview13_select_cursor_row        (GtkTreeView     *treeview,
                                        gboolean         start_editing,
                                        gpointer         user_data)
{

  return FALSE;
}


void
on_entry249_insert_text                (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data)
{

}


void
on_button101_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobutton79_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobutton77_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobutton78_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobutton76_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_entry244_insert_text                (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data)
{

}


void
on_entry245_insert_text                (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data)
{

}


void
on_checkbutton46_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_checkbutton47_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_checkbutton44_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_spinbutton36_editing_done           (GtkCellEditable *celleditable,
                                        gpointer         user_data)
{

}


void
on_comboboxentry26_editing_done        (GtkCellEditable *celleditable,
                                        gpointer         user_data)
{

}


void
on_radiobutton72_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobutton73_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_checkbutton45_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_entry246_insert_text                (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data)
{

}


void
on_entry247_insert_text                (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data)
{

}


void
on_checkbutton51_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_checkbutton50_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_checkbutton48_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_checkbutton49_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobutton74_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobutton75_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_comboboxentry29_changed             (GtkComboBox     *combobox,
                                        gpointer         user_data)
{

}

/*
void
on_chadha_button93_connexion_clicked   (GtkButton       *button,
                                        gpointer         user_data)
{

}*/

/*
void
on_ines_button_app_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_ines_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{

}*/

/*
void
on_chadha_button103_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}*/

/*
void
on_chadha_button104_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}
*/
/*
void
on_chadha_button105_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}*/

/*
gboolean
on_chadha_window2_voter_focus_in_event (GtkWidget       *widget,
                                        GdkEventFocus   *event,
                                        gpointer         user_data)
{

  return FALSE;
}*/

/*
void
on_chadha_button106_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}*/


/*void
on_comboboxentry31_changed             (GtkComboBox     *combobox,
                                        gpointer         user_data)
{

}*/


/*void
on_chadha_checkbutton52_im_not_a_robot_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}*/

/*
void
on_chadha_button107_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}*/

/*
void
on_chadha_button108_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}*/

/*
gboolean
on_chadha_window3_afficher_listes_focus_in_event
                                        (GtkWidget       *widget,
                                        GdkEventFocus   *event,
                                        gpointer         user_data)
{

  return FALSE;
}*/

/*
void
on_treeview14_row_activated            (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}*/


/*
void
on_chadha_button116_ajout_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{

}
*/
/*
void
on_chadha_button115_affiche_clicked    (GtkButton       *button,
                                        gpointer         user_data)
{

}*/

/*
void
on_chadha_button110_supp_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{

}*/

/*
void
on_chadha_trier_par_vote_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{

}*/

/*
void
on_chadha_button109_retour_clicked     (GtkButton       *button,
                                        gpointer         user_data)
{

}*/

/*
void
on_chadha_button119_chercher_clicked   (GtkButton       *button,
                                        gpointer         user_data)
{

}*/


/*void
on_chadha_radiobutton84_droite_toggled (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}*/

/*
void
on_chadha_radiobutton83_centre_toggled (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}*/

/*
void
on_chadha_radiobutton82_gauche_toggled (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}*/


/*void
on_button112_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}*/

/*
void
on_button111_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}*/

/*
gboolean
on_chadha_window5_modifier_list_focus_in_event
                                        (GtkWidget       *widget,
                                        GdkEventFocus   *event,
                                        gpointer         user_data)
{

  return FALSE;
}*/

/*
void
on_button117_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}*/

/*
void
on_button118_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}*/

/*
void
on_radiobutton86_m_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}*/

/*
void
on_radiobutton85_m_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}*/


/*void
on_radiobutton87_m_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}*/



/////////////////////////////////////saif/////////////////////////////////////////
void
on_saif_treeview_aff_row_activated     (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter  iter;
gchar *identifiant;


GtkTreeModel *model = gtk_tree_view_get_model(treeview);

if (gtk_tree_model_get_iter(model,&iter,path)){
gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0 , &identifiant ,-1);
strcpy(saif_identifiant,identifiant); 
saif_flag_edit = 0;
}
}


void
on_saif_entry_aff_cher_changed         (GtkEditable     *editable,
                                        gpointer         user_data)
{
GtkWidget *saif_entry_aff_cher;
char id[20]= "", fich[20]="bvote.txt";
int i;
GtkWidget *tree;
tree =  lookup_widget(editable,"saif_treeview_aff");

saif_entry_aff_cher = lookup_widget(GTK_WIDGET(editable),"saif_entry_aff_cher");
i=atoi(gtk_entry_get_text(GTK_ENTRY(saif_entry_aff_cher)));
sprintf(id,"%d",i);
chercherbureau(tree,id);
}


void
on_saif_button_aff_ret_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_saif_button_aff_mod_clicked         (GtkButton       *widget,
                                        gpointer         user_data)
{
GtkWidget *saif_window_aff,*mod;
GtkWidget *saif_entry_mod_id, *saif_spinbutton_mod_ce, *saif_spinbutton_mod_co, *saif_combobox_mod_ad, *saif_combobox_mod_idbv, *pInfo;
GtkWidget saif_window_mod;
char capobs[20], capelec[10], id[20];
bureau b;
int a=0;
saif_window_aff=lookup_widget(widget,"saif_window_aff");
gtk_widget_destroy(saif_window_aff);
mod=lookup_widget(widget,"saif_window_mod");
mod=create_saif_window_mod();
gtk_widget_show(mod);
saif_entry_mod_id=lookup_widget(widget,"saif_entry_mod_id");
saif_spinbutton_mod_ce=lookup_widget(widget,"saif_spinbutton_mod_ce");
saif_spinbutton_mod_co=lookup_widget(widget,"saif_spinbutton_mod_co");
saif_combobox_mod_ad=lookup_widget(widget,"saif_combobox_mod_ad");
saif_combobox_mod_idbv=lookup_widget(widget,"saif_combobox_mod_idbv");
FILE *f;
f = fopen("bvote.txt","r");
if(f!=NULL){
while(fscanf(f,"%s %d %d %s %s \n",b.id,&(b.cap_elec),&(b.cap_obs),b.b_adr,b.id_agentb)!=EOF)
	{
		if(strcmp(b.id,saif_identifiant)==0){
			a=1;
			break;
                 }
	}
fclose(f);
}
if(a==1){
gtk_entry_set_text(GTK_ENTRY(saif_entry_mod_id),b.id);
gtk_spin_button_set_value(GTK_SPIN_BUTTON(saif_spinbutton_mod_ce),b.cap_elec);
gtk_spin_button_set_value(GTK_SPIN_BUTTON(saif_spinbutton_mod_co),b.cap_obs);
gtk_combo_box_set_active (GTK_COMBO_BOX(saif_combobox_mod_ad), b.b_adr);
gtk_combo_box_set_active (GTK_COMBO_BOX(saif_combobox_mod_idbv), b.id_agentb);


}
else{
pInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_ERROR,GTK_BUTTONS_OK,"Bureau introuvable");
	switch(gtk_dialog_run(GTK_DIALOG(pInfo)))
	{
	case GTK_RESPONSE_OK:
	gtk_widget_destroy(pInfo);
	break;
	}
}
}


void
on_saif_button_aff_sup_clicked         (GtkButton       *widget,
                                        gpointer         user_data)
{
GtkWidget *msg;
msg = lookup_widget(widget,"saif_label_aff_msgcher");		
char text[200];
char fich[20] = "bvote.txt";
if (strlen(saif_identifiant)>0){ 
	saif_supprimer_bv(fich,saif_identifiant);
	GtkWidget *tree;

	tree =  lookup_widget(GTK_WIDGET(widget),"saif_treeview_aff");

	afficher(tree,"bvote.txt");
		//strcpy(text,"<span color=\"green\" font-size=\"13500\"><b>Supprimer avec succes</b></span>");
		//gtk_label_set_markup(msg,text);
	strcpy(saif_identifiant,"");

}else{
		strcpy(text,"<span color=\"red\" font-size=\"11000\"><b>Selectionné bureau de vote avec double click</b></span>");
		gtk_label_set_markup(msg,text);
}
}


void
on_saif_button_aff_act_clicked         (GtkButton       *objet,
                                        gpointer         user_data)
{
GtkWidget *saif_treeview_aff;
GtkWidget *saif_window_aff;
saif_window_aff=lookup_widget(objet,"saif_window_aff");
gtk_widget_destroy(saif_window_aff);
saif_window_aff=lookup_widget(objet,"saif_window_aff");
saif_window_aff=create_saif_window_aff();
gtk_widget_show(saif_window_aff);
saif_treeview_aff=lookup_widget(saif_window_aff,"saif_treeview_aff");
afficher(saif_treeview_aff,"bvote.txt");
}


void
on_saif_button_aff_rech_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_saif_button_aff_aj_clicked          (GtkButton       *objet,
                                        gpointer         user_data)
{
GtkWidget *saif_window_aj;
GtkWidget *saif_window_aff;
saif_window_aff=lookup_widget(objet,"saif_window_aff");
gtk_widget_destroy(saif_window_aff);
saif_window_aj=lookup_widget(objet,"saif_window_aj");
saif_window_aj=create_saif_window_aj();
gtk_widget_show(saif_window_aj);
}


void
on_saif_button_aj_conf_clicked         (GtkButton       *objet,
                                        gpointer         user_data)
{
bureau p;

GtkWidget* input1 ;
GtkWidget* input2 ;
GtkWidget* input3 ;
GtkWidget* input4 ;
GtkWidget* input5 ;
GtkWidget* saif_checkbutton_aj ;
GtkWidget *saif_window_aj;
GtkWidget *pInfo;


saif_window_aj=lookup_widget(objet,"saif_window_aj");

input1= lookup_widget(objet,"saif_entry_aj_id") ;
input2= lookup_widget(objet,"saif_spinbutton_aj_ce") ;
input3= lookup_widget(objet,"saif_spinbutton_aj_co") ;
input4= lookup_widget(objet,"saif_combobox_aj_ad");
input5= lookup_widget(objet,"saif_combobox_aj_idbv");

saif_checkbutton_aj= lookup_widget(objet,"saif_checkbutton_aj");

strcpy(p.id,gtk_entry_get_text(GTK_ENTRY(input1)));
p.cap_elec= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(input2));
p.cap_obs= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(input3));
strcpy(p.b_adr,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input4)));
strcpy(p.id_agentb,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input5)));
//if(saif_accept==1)
ajouter_bureau(p,"bvote.txt");
}


void
on_saif_button_aj_ret_clicked          (GtkButton       *objet,
                                        gpointer         user_data)
{
GtkWidget *saif_window_aj;
GtkWidget *saif_window_aff;
saif_window_aj=lookup_widget(objet,"saif_window_aj");
gtk_widget_destroy(saif_window_aj);
saif_window_aff=lookup_widget(objet,"saif_window_aff");
saif_window_aff=create_saif_window_aff();
gtk_widget_show(saif_window_aff);
}


void
on_saif_checkbutton_aj_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton)){ 
	saif_accept = 1;
}else{
	saif_accept = 0;

}
}


void
on_saif_button_md_conf_clicked         (GtkButton       *objet,
                                        gpointer         user_data)
{
bureau p;
GtkWidget* input1 ;
GtkWidget* input2 ;
GtkWidget* input3 ;
GtkWidget* input4 ;
GtkWidget* input5 ;
GtkWidget* saif_checkbutton_mod ;
GtkWidget *saif_window_mod;
GtkWidget *pInfo;


saif_window_mod=lookup_widget(objet,"saif_window_mod");

input1= lookup_widget(objet,"saif_entry_mod_id") ;
input2= lookup_widget(objet,"saif_spinbutton_mod_ce") ;
input3= lookup_widget(objet,"saif_spinbutton_mod_co") ;
input4= lookup_widget(objet,"saif_combobox_mod_ad");
input5= lookup_widget(objet,"saif_combobox_mod_idbv");

saif_checkbutton_mod= lookup_widget(objet,"saif_checkbutton_mod");

strcpy(p.id,gtk_entry_get_text(GTK_ENTRY(input1)));
p.cap_elec= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(input2));
p.cap_obs= gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(input3));
strcpy(p.b_adr,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input4)));
strcpy(p.id_agentb,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input5)));
modifier_bureau(p,"bvote.txt");
}


void
on_saif_button_md_ret_clicked          (GtkButton       *objet,
                                        gpointer         user_data)
{
GtkWidget *saif_window_mod;
GtkWidget *saif_window_aff;
saif_window_mod=lookup_widget(objet,"saif_window_mod");
gtk_widget_destroy(saif_window_mod);
saif_window_aff=lookup_widget(objet,"saif_window_aff");
saif_window_aff=create_saif_window_aff();
gtk_widget_show(saif_window_aff);
}


void
on_saif_checkbutton_mod_toggled        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton)){ 
	saif_accept = 1;
}else{
	saif_accept = 0;

}
}


void
on_saif_button_app_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
 GtkWidget *saif_window_login,*saif_window_aff;
 GtkWidget *user,*pass,*resultat; 
char username[20]; 
char password[20];
char text[20];
user= lookup_widget(button,"saif_entry_user");
pass = lookup_widget(button,"saif_entry_pass");
strcpy(username,gtk_entry_get_text(GTK_ENTRY(user)));
strcpy(password,gtk_entry_get_text(GTK_ENTRY(pass))); 
if ((strcmp(username,"bv")==0)&&(strcmp (password,"bv")==0)) 
{
saif_window_login=lookup_widget(button,"saif_window_login");
saif_window_aff = create_saif_window_aff (); 
gtk_widget_show (saif_window_aff);
gtk_widget_destroy(saif_window_login); }
else {
resultat=lookup_widget(button,"saif_label_login");
strcpy(text,"user not found ");
gtk_label_set_text(GTK_LABEL(resultat),text);


}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int oriantation_ajout=2; 
int chadha_focus_vote = 0; 
int chadha_tree_view = 0 ; 
char chadha_id_to_manage[30]="";
int chadha_modifier_flag =0; 
int oriantation_modifier=1; 
int chadha_im_not_a_robot_checkbox = 0; 

void
on_chadha_button93_connexion_clicked   (GtkButton       *button,
                                        gpointer         user_data) //login
{
GtkWidget *chadha_window_espace_electeur, *chadha_window_login, *pass, *user,*msg;
msg = lookup_widget(button,"label559");
char password[40],username[40];




user=lookup_widget(GTK_WIDGET(button),"entry250");
pass=lookup_widget(GTK_WIDGET(button),"entry251");
strcpy(username,gtk_entry_get_text(GTK_ENTRY(user)));
strcpy(password,gtk_entry_get_text(GTK_ENTRY(pass)));
char password_true[40],username_true[40];
   FILE *f=NULL;
    f = fopen("utilisateur.txt","r");
if (f!=NULL){
while (fscanf(f,"%s %s",username_true,password_true)!=EOF){
}
}
if (strcmp(username,username_true)==0 && strcmp(password,password_true)==0){

chadha_window_login=lookup_widget(button,"chadha_window_login");

gtk_widget_destroy(chadha_window_login);
chadha_window_espace_electeur=create_chadha_window_espace_electeur();
gtk_widget_show(chadha_window_espace_electeur);
}else{
char text[200];
strcpy(text,"<span color=\"red\" font-size=\"13500\"><b>user or pass is wrong</b></span>");
gtk_label_set_markup(msg,text);
}
}


void
on_chadha_button104_clicked            (GtkButton       *button,
                                        gpointer         user_data) //gestion list chadha_window3_afficher_listes
{

GtkWidget *chadha_window3_afficher_listes,*chadha_window_espace_electeur;
chadha_window3_afficher_listes=create_chadha_window3_afficher_listes();
gtk_widget_show(chadha_window3_afficher_listes);
chadha_window_espace_electeur=lookup_widget(button,"chadha_window_espace_electeur");
gtk_widget_destroy(chadha_window_espace_electeur);
}


void
on_chadha_button103_clicked            (GtkButton       *button,
                                        gpointer         user_data) // voter chadha_window2_voter
{
GtkWidget *chadha_window2_voter,*chadha_window_espace_electeur;
chadha_window2_voter=create_chadha_window2_voter();
gtk_widget_show(chadha_window2_voter);
chadha_window_espace_electeur=lookup_widget(button,"chadha_window_espace_electeur");
gtk_widget_destroy(chadha_window_espace_electeur);

}


void
on_chadha_button105_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *chadha_window_espace_electeur, *aziz_window_login;
chadha_window_espace_electeur=lookup_widget(button,"chadha_window_espace_electeur");

aziz_window_login=create_aziz_window_login();
gtk_widget_show(aziz_window_login);
gtk_widget_destroy(chadha_window_espace_electeur);
}


void
on_chadha_button106_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
 char fich[20] = "liste.txt";
char text[200];
GtkWidget *voter,*msg;
msg = lookup_widget(button,"label571");
char selected_id[40];
if (chadha_im_not_a_robot_checkbox){
voter = lookup_widget(GTK_WIDGET(button),"comboboxentry31"); 
strcpy(selected_id,gtk_combo_box_get_active_text(GTK_COMBO_BOX(voter)));
int flag = chadha_ajouter_un_vote(fich,selected_id);
if (flag!=-1){

		strcpy(text,"<span color=\"green\" font-size=\"13500\"><b>vote avec succée</b></span>");
		gtk_label_set_markup(msg,text);}
else{
		strcpy(text,"<span color=\"red\" font-size=\"13500\"><b>Numéro de liste incorrect</b></span>");
		gtk_label_set_markup(msg,text);}
}else{
		strcpy(text,"<span color=\"red\" font-size=\"13500\"><b>checkbox problem</b></span>");
		gtk_label_set_markup(msg,text);
}
}


void
on_chadha_button107_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

 char fich[20] = "Vote_blanc.txt";
char text[200];
GtkWidget *voter,*msg;
msg = lookup_widget(button,"label571");
if (chadha_im_not_a_robot_checkbox){
chadha_ajouter_vote_blanc(fich);

		strcpy(text,"<span color=\"green\" font-size=\"13500\"><b>vote avec succée</b></span>");
		gtk_label_set_markup(msg,text);
}else{
		strcpy(text,"<span color=\"red\" font-size=\"13500\"><b>checkbox problem</b></span>");
		gtk_label_set_markup(msg,text);
}
}


void
on_comboboxentry31_changed             (GtkComboBox     *combobox,
                                        gpointer         user_data)
{

}


void
on_chadha_button108_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *chadha_window2_voter,*chadha_window_espace_electeur;
chadha_window_espace_electeur=create_chadha_window_espace_electeur();
gtk_widget_show(chadha_window_espace_electeur);
chadha_window2_voter=lookup_widget(button,"chadha_window2_voter");
gtk_widget_destroy(chadha_window2_voter);
chadha_focus_vote = 0;
chadha_im_not_a_robot_checkbox = 0;
}


void
on_chadha_checkbutton52_im_not_a_robot_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton)){
	chadha_im_not_a_robot_checkbox = 1;
}else{
	chadha_im_not_a_robot_checkbox = 0;
}
}

	
gboolean
on_chadha_window3_afficher_listes_focus_in_event
                                        (GtkWidget       *widget,
                                        GdkEventFocus   *event,
                                        gpointer         user_data)
{
if (chadha_tree_view == 0){
GtkWidget *tree;

tree =  lookup_widget(GTK_WIDGET(widget),"treeview14");

chadha_treeview_afficher("liste.txt",tree);
}
chadha_tree_view=1;
  return FALSE;
}


void
on_treeview14_row_activated            (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{


GtkTreeIter  iter;
gchar *NUM_LIST;
GtkTreeModel *model = gtk_tree_view_get_model(treeview);

if (gtk_tree_model_get_iter(model,&iter,path)){
gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0 , &NUM_LIST ,-1);
strcpy(chadha_id_to_manage,NUM_LIST); 
}
}


void
on_chadha_spinbutton38_insert_text     (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data)
{

}


void
on_chadha_button109_retour_clicked     (GtkButton       *button,
                                        gpointer         user_data)
{

GtkWidget *chadha_window3_afficher_listes,*chadha_window_espace_electeur;
chadha_window_espace_electeur=create_chadha_window_espace_electeur();
gtk_widget_show(chadha_window_espace_electeur);
chadha_window3_afficher_listes=lookup_widget(button,"chadha_window3_afficher_listes");
gtk_widget_destroy(chadha_window3_afficher_listes);
chadha_tree_view = 0;
}


void
on_chadha_button119_chercher_clicked   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *num_l;
char num_list[40];

GtkWidget *tree;
tree =  lookup_widget(GTK_WIDGET(button),"treeview14");

num_l = lookup_widget(GTK_WIDGET(button),"chadha_entry_search");
strcpy(num_list,gtk_entry_get_text(GTK_ENTRY(num_l)));

GtkWidget *msg;
msg = lookup_widget(button,"msg_erreur_chadha");
gtk_label_set_text(msg,"");
if (strlen(num_list)){
chadha_treeview_search(tree,num_list);
}else{

chadha_treeview_search(tree,"");
}
}


void
on_chadha_button116_ajout_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{

GtkWidget *chadha_window3_afficher_listes,*chadha_window4_ajouter_list;
chadha_window4_ajouter_list=create_chadha_window4_ajouter_list();
gtk_widget_show(chadha_window4_ajouter_list);
oriantation_ajout=2; //il faut choisie cette valeur (par ce que droite est selectionnée par defaut) pour l'utiliser lors de remplissage de l'ajout
chadha_window3_afficher_listes=lookup_widget(button,"chadha_window3_afficher_listes");
gtk_widget_destroy(chadha_window3_afficher_listes);
chadha_tree_view = 0;
}


void
on_chadha_button110_supp_clicked       (GtkButton       *button,
                                        gpointer         user_data)

{
GtkWidget *msg;
msg = lookup_widget(button,"msg_erreur_chadha");
char text[200];
char fich[20] = "liste.txt";
if (strlen(chadha_id_to_manage)>0){ //hedhi maaneha aana id selectionné (ali b double click f tree view)
	chadha_supprimer_election(fich,chadha_id_to_manage);
	GtkWidget *tree;

	tree =  lookup_widget(GTK_WIDGET(button),"treeview14");

	chadha_treeview_afficher("liste.txt",tree);
		strcpy(text,"<span color=\"green\" font-size=\"13500\"><b>Supprimer avec succes</b></span>");
		gtk_label_set_markup(msg,text);
	strcpy(chadha_id_to_manage,"");

}else{
		strcpy(text,"<span color=\"red\" font-size=\"13500\"><b>Selectionné la ligne avec double click</b></span>");
		gtk_label_set_markup(msg,text);
}
}


void
on_chadha_button115_affiche_clicked    (GtkButton       *button,
                                        gpointer         user_data)
{

GtkWidget *msg;
char text[200];
msg = lookup_widget(button,"msg_erreur_chadha");
if (strlen(chadha_id_to_manage)>0){
GtkWidget *chadha_window3_afficher_listes,*chadha_window5_modifier_list;
chadha_window5_modifier_list=create_chadha_window5_modifier_list();
gtk_widget_show(chadha_window5_modifier_list);
chadha_window3_afficher_listes=lookup_widget(button,"chadha_window3_afficher_listes");
gtk_widget_destroy(chadha_window3_afficher_listes);
}else{
		strcpy(text,"<span color=\"red\" font-size=\"13500\"><b>Selectionné la ligne avec double click</b></span>");
		gtk_label_set_markup(msg,text);
}
chadha_tree_view = 0;
}


void
on_chadha_radiobutton84_droite_toggled (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton))){
		oriantation_ajout=3;
	}
}


void
on_chadha_radiobutton83_centre_toggled (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton))){
		oriantation_ajout=2;
	}
}


void
on_chadha_radiobutton82_gauche_toggled (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton))){
		oriantation_ajout=1;
	}
}


void
on_button111_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *chadha_window3_afficher_listes,*chadha_window4_ajouter_list;
chadha_window3_afficher_listes=create_chadha_window3_afficher_listes();
gtk_widget_show(chadha_window3_afficher_listes);
chadha_window4_ajouter_list=lookup_widget(button,"chadha_window4_ajouter_list");
gtk_widget_destroy(chadha_window4_ajouter_list);
}


void
on_button112_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *num_l,*nom_l,*id_l,*id_t_l,*cond1,*cond2,*cond3,*msg,*jour,*mois,*annee;
msg = lookup_widget(button,"label570");
list_elec e;
 char fich[20] = "liste.txt";
num_l = lookup_widget(GTK_WIDGET(button),"entry294");
nom_l = lookup_widget(GTK_WIDGET(button),"entry254");
id_l = lookup_widget(GTK_WIDGET(button),"entry252");
id_t_l = lookup_widget(GTK_WIDGET(button),"entry253");
if (oriantation_ajout == 1){
			strcpy(e.orientation,"gauche");

}else{
	if (oriantation_ajout==2){
			strcpy(e.orientation,"centre");

	}else{
		if (oriantation_ajout==3){
			strcpy(e.orientation,"droite");
		}
	}
}
cond1 = lookup_widget(GTK_WIDGET(button),"entry264");
cond2 = lookup_widget(GTK_WIDGET(button),"entry265");
cond3 = lookup_widget(GTK_WIDGET(button),"entry266");
strcpy(e.num_list,gtk_entry_get_text(GTK_ENTRY(num_l)));
strcpy(e.nomlist,gtk_entry_get_text(GTK_ENTRY(nom_l)));
strcpy(e.id_list,gtk_entry_get_text(GTK_ENTRY(id_l)));
strcpy(e.id_electeur,gtk_entry_get_text(GTK_ENTRY(id_t_l)));
strcpy(e.condidat1,gtk_entry_get_text(GTK_ENTRY(cond1)));
strcpy(e.condidat2,gtk_entry_get_text(GTK_ENTRY(cond2)));
strcpy(e.condidat3,gtk_entry_get_text(GTK_ENTRY(cond3)));
jour = lookup_widget(GTK_WIDGET(button),"chadha_jours_ajouter");
mois = lookup_widget(GTK_WIDGET(button),"chadha_mois_ajouter");
annee = lookup_widget(GTK_WIDGET(button),"chadha_an_ajouter");
e.nbv = 0;
e.id_v = 0;

char text[200];
e.date_ch.jour_ch = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
e.date_ch.mois_ch = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
e.date_ch.annee_ch = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));
int flag_ajout = chadha_ajouter(fich,e) ;
if (flag_ajout== 2){
		strcpy(text,"<span color=\"red\" font-size=\"13500\"><b>Tout les champs doivent etre remplis</b></span>");
		gtk_label_set_markup(msg,text);
}else{
if (flag_ajout== -1){

		strcpy(text,"<span color=\"red\" font-size=\"13500\"><b>Id deja exist</b></span>");
		gtk_label_set_markup(msg,text);
}else{
		strcpy(text,"<span color=\"green\" font-size=\"13500\"><b>Ajouté avec succé</b></span>");
		gtk_label_set_markup(msg,text);
}
}

}


void
on_button118_clicked                   (GtkButton       *widget,
                                        gpointer         user_data)
{

GtkWidget *num_l,*nom_l,*id_l,*id_t_l,*cond1,*cond2,*cond3,*radiogauche,*radiocentre,*radiodroite,*msg,*jour,*mois,*annee;
msg = lookup_widget(widget,"label569");
list_elec e;
char fich[30] = "liste.txt";
int flag = -1;
num_l = lookup_widget(GTK_WIDGET(widget),"entry305");
nom_l = lookup_widget(GTK_WIDGET(widget),"entry306");
id_l = lookup_widget(GTK_WIDGET(widget),"entry297");
id_t_l = lookup_widget(GTK_WIDGET(widget),"entry296");
radiogauche = lookup_widget(GTK_WIDGET(widget),"radiobutton85_m");
radiocentre = lookup_widget(GTK_WIDGET(widget),"radiobutton86_m");
radiodroite = lookup_widget(GTK_WIDGET(widget),"radiobutton87_m");
cond1 = lookup_widget(GTK_WIDGET(widget),"entry302");
cond2 = lookup_widget(GTK_WIDGET(widget),"entry303");
cond3 = lookup_widget(GTK_WIDGET(widget),"entry304");

strcpy(e.num_list,gtk_entry_get_text(GTK_ENTRY(num_l)));
strcpy(e.nomlist,gtk_entry_get_text(GTK_ENTRY(nom_l)));
strcpy(e.id_list,gtk_entry_get_text(GTK_ENTRY(id_l)));
strcpy(e.id_electeur,gtk_entry_get_text(GTK_ENTRY(id_t_l)));
strcpy(e.condidat1,gtk_entry_get_text(GTK_ENTRY(cond1)));
strcpy(e.condidat2,gtk_entry_get_text(GTK_ENTRY(cond2)));
strcpy(e.condidat3,gtk_entry_get_text(GTK_ENTRY(cond3)));
jour = lookup_widget(GTK_WIDGET(widget),"chadha_jours_modifier");
mois = lookup_widget(GTK_WIDGET(widget),"chadha_mois_modifier");
annee = lookup_widget(GTK_WIDGET(widget),"chadha_an_modifier");

e.date_ch.jour_ch = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
e.date_ch.mois_ch = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
e.date_ch.annee_ch = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));


if (oriantation_modifier == 1){
			strcpy(e.orientation,"gauche");

}else{
	if (oriantation_modifier==2){
			strcpy(e.orientation,"centre");

	}else{
		if (oriantation_modifier==3){
			strcpy(e.orientation,"droite");
		}
	}
}
char text[200];
flag = chadha_make_modification(fich,e);
if (flag==1){ // alors modification avec succée label569

		strcpy(text,"<span color=\"green\" font-size=\"13500\"><b>Modifié avec succé</b></span>");
		gtk_label_set_markup(msg,text);
}else{
	if (flag==2){ // des champs vides

		strcpy(text,"<span color=\"red\" font-size=\"13500\"><b>Tout les champs doivent etre remplis</b></span>");
		gtk_label_set_markup(msg,text);
	}else{ // num_list a ete changé lors de la modification

		strcpy(text,"<span color=\"green\" font-size=\"13500\"><b>Num list ne peut pas etre changer</b></span>");
		gtk_label_set_markup(msg,text);
	
	}
}

}


void
on_button117_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

GtkWidget *chadha_window3_afficher_listes,*chadha_window5_modifier_list;
chadha_window3_afficher_listes = create_chadha_window3_afficher_listes();
gtk_widget_show(chadha_window3_afficher_listes);
chadha_window5_modifier_list=lookup_widget(button,"chadha_window5_modifier_list");
gtk_widget_destroy(chadha_window5_modifier_list);
chadha_modifier_flag =0;
}



gboolean
on_chadha_window2_voter_focus_in_event (GtkWidget       *widget,
                                        GdkEventFocus   *event,
                                        gpointer         user_data)
{
if (chadha_focus_vote == 0){
GtkWidget *combo;

combo = lookup_widget(GTK_WIDGET(widget),"comboboxentry31");
 char fich[20] = "liste.txt";
    FILE *f=NULL;
    f = fopen(fich,"r");
list_elec  e;
while (fscanf(f,"%s %s %s %s %s %s %s %s %d %d %d %d %d\n",e.num_list,e.nomlist,e.id_list,e.id_electeur,e.orientation,e.condidat1,e.condidat2,e.condidat3,&e.nbv,&e.id_v,&e.date_ch.jour_ch,&e.date_ch.mois_ch,&e.date_ch.annee_ch)!=EOF){

	gtk_combo_box_append_text(GTK_COMBO_BOX(combo),e.num_list);

}
fclose(f);
}
chadha_focus_vote = 1;
  return FALSE;
}


gboolean
on_chadha_window5_modifier_list_focus_in_event
                                        (GtkWidget       *widget,
                                        GdkEventFocus   *event,
                                        gpointer         user_data)
{
list_elec e;
 char fich[20] = "liste.txt";
if (chadha_modifier_flag == 0){

e = chadha_remplir_modifier(fich,chadha_id_to_manage);

GtkWidget *num_l,*nom_l,*id_l,*id_t_l,*cond1,*cond2,*cond3,*radiogauche,*radiocentre,*radiodroite,*jour,*mois,*annee;
num_l = lookup_widget(GTK_WIDGET(widget),"entry305");
nom_l = lookup_widget(GTK_WIDGET(widget),"entry306");
id_l = lookup_widget(GTK_WIDGET(widget),"entry297");
id_t_l = lookup_widget(GTK_WIDGET(widget),"entry296");
radiogauche = lookup_widget(GTK_WIDGET(widget),"radiobutton85_m");
radiocentre = lookup_widget(GTK_WIDGET(widget),"radiobutton86_m");
radiodroite = lookup_widget(GTK_WIDGET(widget),"radiobutton87_m");
cond1 = lookup_widget(GTK_WIDGET(widget),"entry302");
cond2 = lookup_widget(GTK_WIDGET(widget),"entry303");
cond3 = lookup_widget(GTK_WIDGET(widget),"entry304");

jour = lookup_widget(GTK_WIDGET(widget),"chadha_jours_modifier");
mois = lookup_widget(GTK_WIDGET(widget),"chadha_mois_modifier");
annee = lookup_widget(GTK_WIDGET(widget),"chadha_an_modifier");


gtk_spin_button_set_value(jour,e.date_ch.jour_ch);
gtk_spin_button_set_value(mois,e.date_ch.mois_ch);
gtk_spin_button_set_value(annee,e.date_ch.annee_ch);
gtk_entry_set_text(GTK_ENTRY(num_l),e.num_list);
gtk_entry_set_text(GTK_ENTRY(nom_l),e.nomlist);
gtk_entry_set_text(GTK_ENTRY(id_l),e.id_list);
gtk_entry_set_text(GTK_ENTRY(id_t_l),e.id_electeur);
gtk_entry_set_text(GTK_ENTRY(cond1),e.condidat1);
gtk_entry_set_text(GTK_ENTRY(cond2),e.condidat2);
gtk_entry_set_text(GTK_ENTRY(cond3),e.condidat3);

if (strcmp(e.orientation,"gauche")==0){
gtk_toggle_button_set_active(GTK_RADIO_BUTTON(radiogauche),TRUE);
oriantation_modifier = 1;

}else{

if (strcmp(e.orientation,"centre")==0){
gtk_toggle_button_set_active(GTK_RADIO_BUTTON(radiocentre),TRUE);
oriantation_modifier = 2;

}else{
gtk_toggle_button_set_active(GTK_RADIO_BUTTON(radiodroite),TRUE);
oriantation_modifier = 3;
}
}



}
chadha_modifier_flag =1;
  return FALSE;
}




void
on_radiobutton87_m_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton))){
		oriantation_modifier=3;}
}


void
on_radiobutton86_m_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton))){
		oriantation_modifier=2;
	}
}


void
on_radiobutton85_m_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton))){
		oriantation_modifier=1;
	}

}
 


void
on_chadha_trier_par_vote_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *tree;

tree =  lookup_widget(GTK_WIDGET(button),"treeview14");
chadha_trier_vote();
chadha_treeview_afficher("list_triee.txt",tree);
 remove("list_triee.txt");
}
void
on_ines_radiobutton1_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton))){
		ines_oui_non_edit=1;
	}

}


void
on_ines_radiobutton2_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton))){
		ines_oui_non_edit=0;
	}
}


void
on_ines_button_retour_clicked          (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *modifier;
modifier = lookup_widget(objet,"ines_window_modifier_election");
gtk_widget_destroy(modifier);
}


void
on_ines_button_confirmer_clicked       (GtkWidget       *widget,
                                        gpointer         user_data)
{
ines_flag_tree_view = 0;

GtkWidget *identifiant,*nb_habitant,*nb_conseiller,*municipalite,*jour,*mois,*annee,*msg; 
msg = lookup_widget(widget,"i_label_msg");

election p; 

char fich[20] = "ajout_election.txt";

identifiant = lookup_widget(GTK_WIDGET(widget),"ines_entry_identifiant"); 
nb_habitant = lookup_widget(GTK_WIDGET(widget),"ines_combobox2");
municipalite = lookup_widget(GTK_WIDGET(widget),"ines_entry_municipalite");
jour = lookup_widget(GTK_WIDGET(widget),"ines_spinbutton4");
mois = lookup_widget(GTK_WIDGET(widget),"ines_spinbutton5");
annee = lookup_widget(GTK_WIDGET(widget),"ines_spinbutton6");
strcpy(p.nb_habitant,gtk_combo_box_get_active_text(GTK_COMBO_BOX(nb_habitant))); 

strcpy(p.identifiant,gtk_entry_get_text(GTK_ENTRY(identifiant))); 

p.nb_conseiller=ines_nb_conseiller;
strcpy(p.municipalite,gtk_entry_get_text(GTK_ENTRY(municipalite)));

p.d.j = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
p.d.m = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
p.d.a = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));
int flag=0; 
if (ines_oui_non_edit){
flag = ines_modifier_election(fich,p);
}else{
flag = 3;
}
	 
if (flag == 2){ 
	gtk_label_set_text(msg,"Tous le champ doit etre remplit!");}
if (flag ==1){
	gtk_label_set_text(msg,"Modifier avec  succé!");
}
if (flag ==0){ 
	gtk_label_set_text(msg,"Erreur de fichier!");
}
if (flag==3){
	gtk_label_set_text(msg,"Confirmer votre choix!");
}

}


void
on_ines_combobox2_changed              (GtkWidget     *widget,
                                        gpointer         user_data)
{
GtkWidget *nb_habitant,*nb_conseiller;
char nb_hab[40];


nb_habitant = lookup_widget(GTK_WIDGET(widget),"ines_combobox2");
nb_conseiller = lookup_widget(GTK_WIDGET(widget),"ines_entry_nbrconseillers");

strcpy(nb_hab,gtk_combo_box_get_active_text(GTK_COMBO_BOX(nb_habitant)));

if (strcmp(nb_hab,"0->5000") == 0){
	ines_nb_conseiller = 10;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"10");
}
if (strcmp(nb_hab,"5001->10.000") == 0){
	ines_nb_conseiller = 12;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"12");
}
if (strcmp(nb_hab,"10.001->25.000") == 0){
	ines_nb_conseiller = 16;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"16");
}
if (strcmp(nb_hab,"25.001->50.000") == 0){
	ines_nb_conseiller = 22;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"22");
}
if (strcmp(nb_hab,"50.001->100.000") == 0){
	ines_nb_conseiller = 30;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"30");
}
if (strcmp(nb_hab,"100.001->500.000") == 0){
	ines_nb_conseiller = 40;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"40");
}
if (strcmp(nb_hab,"plus_que_500.000") == 0){
	ines_nb_conseiller = 60;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"60");
}
}

/*
void
on_ines_radiobutton2_toggled           (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton))){
		ines_oui_non_edit=0;
	}

}*/


void
on_ines_treeview_row_activated         (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter  iter;
gchar *identifiant;


GtkTreeModel *model = gtk_tree_view_get_model(treeview);

if (gtk_tree_model_get_iter(model,&iter,path)){
gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0 , &identifiant ,-1);
strcpy(ines_identifiant,identifiant); 
ines_flag_edit = 0;
}
}


void
on_ines_entry_chercher_changed         (GtkEditable     *editable,
                                        gpointer         user_data)
{
GtkWidget *id;
char ide[20]= "", fich[20]="ajout_election.txt";

GtkWidget *tree;
tree =  lookup_widget(editable,"ines_treeview");

id = lookup_widget(GTK_WIDGET(editable),"ines_entry_chercher");
strcpy(ide,gtk_entry_get_text(GTK_ENTRY(id)));

ines_treeview_search(tree,ide);

}


void
on_ines_button_ajouter_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{
ines_flag_tree_view = 0;
GtkWidget *ajout;
ajout = create_ines_window_ajouter_election();
gtk_widget_show(ajout);	

}


void
on_ines_button_modifier_clicked        (GtkWidget       *widget,
                                        gpointer         user_data)
{
if (strlen(ines_identifiant)>0){
GtkWidget *modifier;
modifier = create_ines_window_modifier_election();
gtk_widget_show(modifier);	
}else{
GtkWidget *msg;
msg = lookup_widget(widget,"i_label_ms");
gtk_label_set_text(msg,"Selectionner election par double click!");
}
}


void
on_ines_button_supprimer_clicked       (GtkWidget      *widget,
                                        gpointer         user_data)
{
char fich[20] = "ajout_election.txt";

GtkWidget *msg;
msg = lookup_widget(widget,"i_label_ms");
if (strlen(ines_identifiant)>0){
if (ines_supprimer_election(fich,ines_identifiant))
{
	gtk_label_set_text(msg,"Supprission terminé!");

GtkWidget *tree;

tree =  lookup_widget(widget,"ines_treeview");

ines_treeview_afficher(tree);
}else{
	gtk_label_set_text(msg,"Identifiant non existant!");
}
}else{
	
	gtk_label_set_text(msg,"Selectionner election par double click!");
}
strcpy(ines_identifiant,"");

}


void
on_i_button_r_clicked                  (GtkButton       *widget,
                                        gpointer         user_data)
{
GtkWidget *ines_window_afficher_election , *ines_window_authentification ;
ines_window_afficher_election=lookup_widget(widget,"ines_window_afficher_election");
gtk_widget_destroy(ines_window_afficher_election);
ines_window_authentification=lookup_widget(widget,"ines_window_authentification");
ines_window_authentification=create_ines_window_authentification();
gtk_widget_show(ines_window_authentification);
}

void
on_ines_combobox1_changed              (GtkWidget     *widget,
                                        gpointer         user_data)
{
GtkWidget *nb_habitant,*nb_conseiller;
char nb_hab[40];

ines_nb_conseiller = 0;

nb_habitant = lookup_widget(GTK_WIDGET(widget),"ines_combobox1");
nb_conseiller = lookup_widget(GTK_WIDGET(widget),"i_entry_nbrconseillers");

strcpy(nb_hab,gtk_combo_box_get_active_text(GTK_COMBO_BOX(nb_habitant)));

if (strcmp(nb_hab,"0->5000") == 0){
	ines_nb_conseiller = 10; 
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"10"); 
}
if (strcmp(nb_hab,"5001->10.000") == 0){
	ines_nb_conseiller = 12;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"12");
}
if (strcmp(nb_hab,"10.001->25.000") == 0){
	ines_nb_conseiller = 16;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"16");
}
if (strcmp(nb_hab,"25.001->50.000") == 0){
	ines_nb_conseiller = 22;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"22");
}
if (strcmp(nb_hab,"50.001->100.000") == 0){
	ines_nb_conseiller = 30;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"30");
}
if (strcmp(nb_hab,"100.001->500.000") == 0){
	ines_nb_conseiller = 40;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"40");
}
if (strcmp(nb_hab,"plus_que_500.000") == 0){
	ines_nb_conseiller = 60;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"60");
}

}


void
on_ines_checkbutton_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton)){ 
	ines_accept = 1;
}else{
	ines_accept = 0;

}
}


void
on_i_button_confirmer_clicked          (GtkWidget       *widget,
                                        gpointer         user_data)
{
GtkWidget *identifiant,*nb_habitant,*nb_conseiller,*municipalite,*jour,*mois,*annee,*msg; 
msg = lookup_widget(widget,"ines_label10_msg");

election p; 

char fich[20] = "ajout_election.txt";

identifiant = lookup_widget(GTK_WIDGET(widget),"i_entry_identifiant"); 
nb_habitant = lookup_widget(GTK_WIDGET(widget),"ines_combobox1");
municipalite = lookup_widget(GTK_WIDGET(widget),"i_entry_municipalite");
jour = lookup_widget(GTK_WIDGET(widget),"i_spinbutton1");
mois = lookup_widget(GTK_WIDGET(widget),"i_spinbutton2");
annee = lookup_widget(GTK_WIDGET(widget),"i_spinbutton3");
if (ines_nb_conseiller>0){
strcpy(p.nb_habitant,gtk_combo_box_get_active_text(GTK_COMBO_BOX(nb_habitant))); 
}else{
strcpy(p.nb_habitant,"");
}
strcpy(p.identifiant,gtk_entry_get_text(GTK_ENTRY(identifiant))); 

p.nb_conseiller=ines_nb_conseiller;
strcpy(p.municipalite,gtk_entry_get_text(GTK_ENTRY(municipalite)));

p.d.j = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
p.d.m = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
p.d.a = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));
int flag;
flag = ines_ajout_election(fich,p);
if (ines_accept ){
	 
if (flag == 2){
	gtk_label_set_text(msg,"Tous le champ doit etre remplit!");}
if (flag ==1){
	gtk_label_set_text(msg,"Ajouté avec  succé!");
}
if (flag == 3){
	gtk_label_set_text(msg,"Identifiant deja exist!");
}
}else{
	gtk_label_set_text(msg,"Il faut verifier 'robot'!");

}


}


void
on_i_button_retour_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *ajout;
ajout = lookup_widget(objet,"ines_window_ajouter_election"); 
ines_accept=0;
gtk_widget_destroy(ajout);
}

void
on_ines_button_app_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *ines_window_afficher_election;
 GtkWidget *user,*pass,*resultat; 
char username[20]; 
char password[20];
char text[20];
user= lookup_widget(button,"ines_entry_user");
pass = lookup_widget(button,"ines_entry_pass");
strcpy(username,gtk_entry_get_text(GTK_ENTRY(user)));
strcpy(password,gtk_entry_get_text(GTK_ENTRY(pass))); 
if ((strcmp(username,"election")==0)&&(strcmp (password,"election")==0)) 
{
ines_window_afficher_election = create_ines_window_afficher_election (); 
gtk_widget_show (ines_window_afficher_election); }
else {
resultat=lookup_widget(button,"label_app");
strcpy(text,"user not found ");
gtk_label_set_text(GTK_LABEL(resultat),text);
}
}

void
on_ines_clicked                        (GtkButton       *widget,
                                        gpointer         user_data)
{
GtkWidget *ines_window_authentification , *aziz_window_admin ;
ines_window_authentification=lookup_widget(widget,"ines_window_authentification");
gtk_widget_destroy(ines_window_authentification);
aziz_window_admin=lookup_widget(widget,"aziz_window_admin");
aziz_window_admin=create_aziz_window_admin();
gtk_widget_show(aziz_window_admin);
}
gboolean
on_ines_window_modifier_election_focus_in_event
                                        (GtkWidget       *widget,
                                        GdkEventFocus   *event,
                                        gpointer         user_data)
{
 if (ines_flag_edit==0){
GtkWidget *identifiant,*nb_habitant,*nb_conseiller,*municipalite,*jour,*mois,*annee,*msg; 

election p; 
ines_flag_tree_view = 0; 
char fich[20] = "ajout_election.txt";

identifiant = lookup_widget(GTK_WIDGET(widget),"ines_entry_identifiant"); 
nb_habitant = lookup_widget(GTK_WIDGET(widget),"ines_combobox2");
municipalite = lookup_widget(GTK_WIDGET(widget),"ines_entry_municipalite");
nb_conseiller = lookup_widget(GTK_WIDGET(widget),"ines_entry_nbrconseillers");
jour = lookup_widget(GTK_WIDGET(widget),"ines_spinbutton4");
mois = lookup_widget(GTK_WIDGET(widget),"ines_spinbutton5");
annee = lookup_widget(GTK_WIDGET(widget),"ines_spinbutton6");
char id[40];
ines_oui_non_edit=1;
if (strcmp(ines_identifiant,"")!=0){
p = ines_remplir_edit(fich,ines_identifiant);
int index=0;
if (strcmp(p.nb_habitant,"0->5000") == 0){
index = 0;
	ines_nb_conseiller = 10;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"10");
}
else{
if (strcmp(p.nb_habitant,"5001->10.000") == 0){

index = 1;
	ines_nb_conseiller = 12;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"12");
}
else{
if (strcmp(p.nb_habitant,"10.001->25.000") == 0){

index = 2;
	ines_nb_conseiller = 16;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"16");
}
else{
if (strcmp(p.nb_habitant,"25.001->50.000") == 0){

index = 3;
	ines_nb_conseiller = 22;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"22");
}
else{
if (strcmp(p.nb_habitant,"50.001->100.000") == 0){

index = 4;
	ines_nb_conseiller = 30;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"30");
}
else{
if (strcmp(p.nb_habitant,"100.001->500.000") == 0){

index = 5;
	ines_nb_conseiller = 40;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"40");
}
else{
if (strcmp(p.nb_habitant,"plus_que_500.000") == 0){
index = 6;
	ines_nb_conseiller = 60;
	gtk_entry_set_text(GTK_ENTRY(nb_conseiller),"60");
}}}}}}}

gtk_combo_box_set_active (GTK_COMBO_BOX(nb_habitant), index);
gtk_entry_set_text(GTK_ENTRY(identifiant),p.identifiant);
gtk_entry_set_text(GTK_ENTRY(municipalite),p.municipalite);
gtk_spin_button_set_value(jour,p.d.j);
gtk_spin_button_set_value(mois,p.d.m);
gtk_spin_button_set_value(annee,p.d.a);
}

}
strcmp(ines_identifiant,"");
ines_flag_edit=1;


  return FALSE;
}


gboolean
on_ines_window_afficher_election_focus_in_event
                                        (GtkWidget       *widget,
                                        GdkEventFocus   *event,
                                        gpointer         user_data)
{
if (ines_flag_tree_view == 0){
strcpy(ines_identifiant,"");
GtkWidget *tree;

tree =  lookup_widget(widget,"ines_treeview");

ines_treeview_afficher(tree);
}
ines_flag_tree_view = 1;

  return FALSE;
}


void
on_ines_statistique_clicked            (GtkWidget       *widget,
                                        gpointer         user_data)
{
GtkWidget *statis;
statis= create_ines_statistique();
gtk_widget_show(statis);
}


void
on_statistique_ines_clicked            (GtkWidget       *widget,
                                        gpointer         user_data)
{
GtkWidget *label_elec , *label_femme,*label_homme;
   char fich[20]="uti.txt";
   char pourcentage[20],homme[20],femme[20];
  label_elec=lookup_widget(widget,"label_elec");
  label_femme=lookup_widget(widget,"label_femme");
  label_homme=lookup_widget(widget,"label_homme");
float P = TPE(fich);
sprintf(pourcentage,"%f",P);
gtk_label_set_text(GTK_LABEL(label_elec),pourcentage);
int h,f;
float H = TPH(fich,h);
sprintf(homme,"%f",H);
gtk_label_set_text(GTK_LABEL(label_homme),homme);
float F = TPF(fich,f);
sprintf(femme,"%f",F);
gtk_label_set_text(GTK_LABEL(label_femme),femme);
}


void
on_saif_radiobutton_supp_non_toggled   (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_saif_radiobutton_supp_oui_toggled   (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


gboolean
on_saif_window_aff_focus_in_event      (GtkWidget       *widget,
                                        GdkEventFocus   *event,
                                        gpointer         user_data)
{
strcpy(saif_identifiant,"");
GtkWidget *tree;

tree =  lookup_widget(widget,"saif_treeview_aff");

afficher(tree,"bvote.txt");
  return FALSE;
}


gboolean
on_saif_window_mod_focus_in_event      (GtkWidget       *widget,
                                        GdkEventFocus   *event,
                                        gpointer         user_data)
{

  return FALSE;
}


void
on_testbutton_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}






void
on_aziz_radiobutton_tous_toggled       (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	GtkWidget *treeview=lookup_widget(togglebutton,"aziz_treeview_utilisateur");
	afficher_utilisateur(treeview,"utilisateur.txt");
}


void
on_aziz_radiobutton_admin_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	GtkWidget *treeview=lookup_widget(togglebutton,"aziz_treeview_utilisateur");
	afficher_admin(treeview,"utilisateur.txt");
}


void
on_aziz_radiobutton_agent_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	GtkWidget *treeview=lookup_widget(togglebutton,"aziz_treeview_utilisateur");
	afficher_agent(treeview,"utilisateur.txt");
}


void
on_aziz_radiobutton_electeur_toggled   (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	GtkWidget *treeview=lookup_widget(togglebutton,"aziz_treeview_utilisateur");
	afficher_electeur(treeview,"utilisateur.txt");
}


void
on_aziz_radiobutton_observateur_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	GtkWidget *treeview=lookup_widget(togglebutton,"aziz_treeview_utilisateur");
	afficher_observateur(treeview,"utilisateur.txt");
}








void
on_aziz_checkbutton_utilisateur_toggled
                                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
	GtkWidget *r1,*r2,*r3,*r4,*r5,*treeview;
	r1=lookup_widget(togglebutton,"aziz_radiobutton_tous");
	r2=lookup_widget(togglebutton,"aziz_radiobutton_admin");
	r3=lookup_widget(togglebutton,"aziz_radiobutton_agent");
	r4=lookup_widget(togglebutton,"aziz_radiobutton_electeur");
	r5=lookup_widget(togglebutton,"aziz_radiobutton_observateur");
	treeview=lookup_widget(togglebutton,"aziz_treeview_utilisateur");
	if(gtk_toggle_button_get_active(togglebutton))
	{
		gtk_widget_show(r1);
		gtk_widget_show(r2);
		gtk_widget_show(r3);
		gtk_widget_show(r4);
		gtk_widget_show(r5);
	}
	else
	{
		gtk_widget_hide(r1);
		gtk_widget_hide(r2);
		gtk_widget_hide(r3);
		gtk_widget_hide(r4);
		gtk_widget_hide(r5);
		//afficher_utilisateur(treeview,"utilisateur.txt");
	}
}


void
on_aziz_radiobutton_homme1_toggled     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_aziz_radiobutton_femme1_toggled     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}




void
on_aziz_radiobutton_homme2_toggled     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_aziz_radiobutton_femme2_toggled     (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}






void
on_aziz_button_connexion_clicked       (GtkWidget       *button,
                                        gpointer         user_data)
{
	utilisateur u;
	GtkWidget* login;
	GtkWidget* mdp;
	char l[50];
	char m[50];
	login=lookup_widget(button,"aziz_entry_login");
	mdp=lookup_widget(button,"aziz_entry_mdp");
	strcpy(l,gtk_entry_get_text(GTK_ENTRY(login)));
	strcpy(m,gtk_entry_get_text(GTK_ENTRY(mdp)));
	if(log(l,m)==1)
	{
		GtkWidget *aziz_window_login ;
		GtkWidget *aziz_window_admin ;
		aziz_window_login=lookup_widget(button,"aziz_window_login");
		gtk_widget_destroy(aziz_window_login);
		aziz_window_admin=lookup_widget(button,"aziz_window_admin");
		aziz_window_admin=create_aziz_window_admin();
		gtk_widget_show(aziz_window_admin);
	}
	if(log(l,m)==3)
	{
		GtkWidget *p1 ;
		GtkWidget *p2 ;
		p1=lookup_widget(button,"aziz_window_login");
		gtk_widget_destroy(p1);
		p2=lookup_widget(button,"chadha_window_espace_electeur");
		p2=create_chadha_window_espace_electeur();
		gtk_widget_show(p2);
	}
	if(log(l,m)==4)
	{
		GtkWidget *p1 ;
		GtkWidget *p2 ;
		p1=lookup_widget(button,"aziz_window_login");
		gtk_widget_destroy(p1);
		p2=lookup_widget(button,"mediouni_liste_recla");
		p2=create_mediouni_liste_recla();
		gtk_widget_show(p2);
	}	
}


void
on_aziz_button_gestion_election_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *p1 ;
	GtkWidget *p2 ;
	p1=lookup_widget(button,"aziz_window_admin");
	gtk_widget_destroy(p1);
	p2=lookup_widget(button,"ines_window_authentification");
	p2=create_ines_window_authentification();
	gtk_widget_show(p2);
}


void
on_aziz_button_gestion_bv_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *p1 ;
	GtkWidget *p2 ;
	p1=lookup_widget(button,"aziz_window_admin");
	gtk_widget_destroy(p1);
	p2=lookup_widget(button,"saif_window_login");
	p2=create_saif_window_login();
	gtk_widget_show(p2);
}


void
on_aziz_button_gestion_utilisateur_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *p1 ;
	GtkWidget *p2 ;
	p1=lookup_widget(button,"aziz_window_admin");
	gtk_widget_destroy(p1);
	p2=lookup_widget(button,"aziz_window_ges_admin");
	p2=create_aziz_window_ges_admin();
	gtk_widget_show(p2);
}


void
on_aziz_button_retour_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *aziz_window_admin ;
	GtkWidget *aziz_window_ges_admin ;
	aziz_window_ges_admin=lookup_widget(button,"aziz_window_ges_admin");
	gtk_widget_destroy(aziz_window_ges_admin);
	aziz_window_admin=lookup_widget(button,"aziz_window_admin");
	aziz_window_admin=create_aziz_window_admin();
	gtk_widget_show(aziz_window_admin);
}


void
on_aziz_button_deconnection_clicked    (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *aziz_window_login ;
	GtkWidget *aziz_window_ges_admin ;
	aziz_window_ges_admin=lookup_widget(button,"aziz_window_ges_admin");
	gtk_widget_destroy(aziz_window_ges_admin);
	aziz_window_login=lookup_widget(button,"aziz_window_login");
	aziz_window_login=create_aziz_window_login();
	gtk_widget_show(aziz_window_login);
}


void
on_aziz_treeview_utilisateur_row_activated
                                        (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
	gchar *cin;
        gchar *nom;
        gchar *prenom;
        gchar *role;
        gchar *vote;
        GtkTreeModel *model;
        GtkTreeIter iter;
        GtkWidget *treeview1=lookup_widget(treeview,"aziz_treeview_utilisateur");
        GtkTreeSelection *selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(treeview1));
        if (gtk_tree_selection_get_selected(selection,&model,&iter))
        {
                gtk_tree_model_get (model,&iter,0,cin,1,nom,2,prenom,3,role,4,vote,5,-1);
	}

}


void
on_aziz_button_chercher_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *treeview;
	GtkWidget *chercher;
	char cin[50]; 
	chercher=lookup_widget(button,"aziz_entry_chercher") ;
	treeview=lookup_widget(button,"aziz_treeview_utilisateur");
	strcpy(cin,gtk_entry_get_text(GTK_ENTRY(chercher)));
	chercher_utilisateur(treeview,"utilisateur.txt",cin);

}


void
on_aziz_button_actualiser_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *treeview;
	GtkWidget *chercher;
	treeview=lookup_widget(button,"aziz_treeview_utilisateur");
	afficher_utilisateur(treeview,"utilisateur.txt");
	chercher=lookup_widget(button, "aziz_entry_chercher") ;
	gtk_entry_set_text(GTK_ENTRY(chercher),"");

}


void
on_aziz_button_supprimer_clicked       (GtkWidget       *button,
                                        gpointer         user_data)
{
	GtkTreeModel *model;
        GtkTreeSelection *selection;
        GtkTreeIter iter;
        GtkWidget *treeview1;
        GtkWidget *label;
        gchar *id;
        treeview1=lookup_widget(button, "aziz_treeview_utilisateur") ;
	selection=gtk_tree_view_get_selection(GTK_TREE_VIEW(treeview1));
        if(gtk_tree_selection_get_selected(selection,&model,&iter))
        {
  		gtk_tree_model_get (model,&iter,0,&id,-1);
        	gtk_list_store_remove(GTK_LIST_STORE(model),&iter);
		supprimer(id);
	}

}


void
on_aziz_button_modifier1_clicked       (GtkWidget       *button,
                                        gpointer         user_data)
{
	GtkTreeModel *model;
        GtkTreeSelection *selection;
        GtkTreeIter iter;
        GtkWidget *treeview1;
        GtkWidget *label;
        gchar *cin;
	gchar *nom;
	gchar *prenom;
	gchar *nationalite;
	gchar *login;
	gchar *mdp;
	gchar *adresse;
	treeview1=lookup_widget(button,"aziz_treeview_utilisateur");
	selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(treeview1));
        if(gtk_tree_selection_get_selected(selection,&model,&iter))
        {
		gtk_tree_model_get (model,&iter,0,&cin,1,&nom,2,&prenom,3,&nationalite,7,&login,8,&mdp,11,&adresse,-1);
		gtk_entry_set_text(GTK_ENTRY(lookup_widget(button,"aziz_entry_cin2")),cin);
		gtk_entry_set_text(GTK_ENTRY(lookup_widget(button,"aziz_entry_nom2")),nom);
		gtk_entry_set_text(GTK_ENTRY(lookup_widget(button,"aziz_entry_prenom2")),prenom);
		gtk_entry_set_text(GTK_ENTRY(lookup_widget(button,"aziz_entry_nationalite2")),nationalite);
		gtk_entry_set_text(GTK_ENTRY(lookup_widget(button,"aziz_entry_login2")),login);
		gtk_entry_set_text(GTK_ENTRY(lookup_widget(button,"aziz_entry_mdp2")),mdp);
		gtk_entry_set_text(GTK_ENTRY(lookup_widget(button,"aziz_entry_adresse2")),adresse);
		gtk_notebook_next_page(GTK_NOTEBOOK(lookup_widget(button,"aziz_notebook_utilisateur")));
        	gtk_notebook_next_page(GTK_NOTEBOOK(lookup_widget(button,"aziz_notebook_utilisateur")));
        }

}


void
on_aziz_button_ajouter1_clicked        (GtkWidget       *button,
                                        gpointer         user_data)
{
	gtk_notebook_next_page(GTK_NOTEBOOK(lookup_widget(button,"aziz_notebook_utilisateur")));
}


void
on_aziz_button_stat_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *aziz_window_ges_admin ;
	GtkWidget *ines_statistique ;
	aziz_window_ges_admin=lookup_widget(button,"aziz_window_ges_admin");
	gtk_widget_destroy(aziz_window_ges_admin);
	ines_statistique=lookup_widget(button,"ines_statistique");
	ines_statistique=create_ines_statistique();
	gtk_widget_show(ines_statistique);
}


void
on_aziz_button_ajouter2_clicked        (GtkWidget       *button,
                                        gpointer         user_data)
{
	utilisateur u;
	GtkWidget* nom1;
	GtkWidget* prenom1;
	GtkWidget* cin1;
	GtkWidget* nationalite1;
	GtkWidget* login1;
	GtkWidget* mdp1;
	GtkWidget* jour1;
	GtkWidget* mois1;
	GtkWidget* annee1;
	GtkWidget* homme1;
	GtkWidget* femme1;
	GtkWidget* adresse1;
	GtkWidget* role1;
	GtkWidget* numbv1;
	GtkWidget* treeview1;
	nom1=lookup_widget(button,"aziz_entry_nom1");
	prenom1=lookup_widget(button,"aziz_entry_prenom1");
	cin1=lookup_widget(button,"aziz_entry_cin1");
	nationalite1=lookup_widget(button,"aziz_entry_nationalite1");
	login1=lookup_widget(button,"aziz_entry_login1");
	mdp1=lookup_widget(button,"aziz_entry_mdp1");
	jour1=lookup_widget(button,"aziz_spinbutton_jour1");
	mois1=lookup_widget(button,"aziz_spinbutton_mois1");
	annee1=lookup_widget(button,"aziz_spinbutton_annee1");
	homme1=lookup_widget(button,"aziz_radiobutton_homme1");
	femme1=lookup_widget(button,"aziz_radiobutton_femme1");
	role1=lookup_widget(button,"aziz_combobox_role1");
	numbv1=lookup_widget(button,"aziz_spinbutton_numbv1");
	adresse1=lookup_widget(button,"aziz_entry_adresse1");
	treeview1=lookup_widget(button,"aziz_treeview_utilisateur");
	strcpy(u.nom,gtk_entry_get_text(GTK_ENTRY(nom1)));
	strcpy(u.prenom,gtk_entry_get_text(GTK_ENTRY(prenom1)));
	strcpy(u.cin,gtk_entry_get_text(GTK_ENTRY(cin1)));
	strcpy(u.nationalite,gtk_entry_get_text(GTK_ENTRY(nationalite1)));
	strcpy(u.login,gtk_entry_get_text(GTK_ENTRY(login1)));
	strcpy(u.mdp,gtk_entry_get_text(GTK_ENTRY(mdp1)));
	u.ddn.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour1)); 
	u.ddn.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois1));
	u.ddn.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee1));
	strcpy(u.role,gtk_combo_box_get_active_text(GTK_COMBO_BOX(role1)));
	strcpy(u.numbv,gtk_entry_get_text(GTK_ENTRY(numbv1)));
	strcpy(u.adresse,gtk_entry_get_text(GTK_ENTRY(adresse1)));
	strcpy(u.vote,"-1");
	if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(femme1)))
		u.sexe=2 ;
 	if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(homme1)))
		u.sexe=1 ;
	ajouter(u);
	gtk_notebook_prev_page(GTK_NOTEBOOK(lookup_widget(button,"aziz_notebook_utilisateur")));
	afficher_utilisateur(treeview1,"utilisateur.txt");

}


void
on_aziz_button_modifier2_clicked       (GtkWidget       *button,
                                        gpointer         user_data)
{
	char *id;
	utilisateur u;
	GtkWidget* nom2;
	GtkWidget* prenom2;
	GtkWidget* cin2;
	GtkWidget* nationalite2;
	GtkWidget* login2;
	GtkWidget* mdp2;
	GtkWidget* jour2;
	GtkWidget* mois2;
	GtkWidget* annee2;
	GtkWidget* homme2;
	GtkWidget* femme2;
	GtkWidget* adresse2;
	GtkWidget* role2;
	GtkWidget* numbv2;
	GtkWidget* treeview1;
	nom2=lookup_widget(button,"aziz_entry_nom2");
	prenom2=lookup_widget(button,"aziz_entry_prenom2");
	cin2=lookup_widget(button,"aziz_entry_cin2");
	nationalite2=lookup_widget(button,"aziz_entry_nationalite2");
	login2=lookup_widget(button,"aziz_entry_login2");
	mdp2=lookup_widget(button,"aziz_entry_mdp2");
	jour2=lookup_widget(button,"aziz_spinbutton_jour2");
	mois2=lookup_widget(button,"aziz_spinbutton_mois2");
	annee2=lookup_widget(button,"aziz_spinbutton_annee2");
	homme2=lookup_widget(button,"aziz_radiobutton_homme2");
	femme2=lookup_widget(button,"aziz_radiobutton_femme2");
	role2=lookup_widget(button,"aziz_combobox_role2");
	numbv2=lookup_widget(button,"aziz_spinbutton_numbv2");
	adresse2=lookup_widget(button,"aziz_entry_adresse2");
	treeview1=lookup_widget(button,"aziz_treeview_utilisateur");
	strcpy(u.nom,gtk_entry_get_text(GTK_ENTRY(nom2)));
	strcpy(u.prenom,gtk_entry_get_text(GTK_ENTRY(prenom2)));
	strcpy(u.cin,gtk_entry_get_text(GTK_ENTRY(cin2)));
	strcpy(u.nationalite,gtk_entry_get_text(GTK_ENTRY(nationalite2)));
	strcpy(u.login,gtk_entry_get_text(GTK_ENTRY(login2)));
	strcpy(u.mdp,gtk_entry_get_text(GTK_ENTRY(mdp2)));
	u.ddn.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour2)); 
	u.ddn.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois2));
	u.ddn.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee2));
	strcpy(u.role,gtk_combo_box_get_active_text(GTK_COMBO_BOX(role2)));
	strcpy(u.numbv,gtk_entry_get_text(GTK_ENTRY(numbv2)));
	strcpy(u.adresse,gtk_entry_get_text(GTK_ENTRY(adresse2)));
	if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON(femme2)))
		u.sexe=2;
	if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON(homme2)))
		u.sexe=1;
	id = u.cin;
	modifier(id,u);
	gtk_notebook_prev_page(GTK_NOTEBOOK(lookup_widget(button,"aziz_notebook_utilisateur")));
	gtk_notebook_prev_page(GTK_NOTEBOOK(lookup_widget(button,"aziz_notebook_utilisateur")));
	afficher_utilisateur(treeview1,"utilisateur.txt");

}


void
on_retour_ajouter_recla_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget  *mediouni_recla_ajout;
GtkWidget *mediouni_liste_recla;
mediouni_recla_ajout=lookup_widget(objet,"mediouni_recla_ajout");
gtk_widget_destroy(mediouni_recla_ajout);
mediouni_liste_recla=create_mediouni_liste_recla();
gtk_widget_show (mediouni_liste_recla);
}


void
on_ajouter_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{
reclamation r;

GtkWidget* input1 ;
GtkWidget* input2 ;
GtkWidget* input3 ;
GtkWidget* input4 ;
GtkWidget* input5 ;
GtkWidget* input6 ;
GtkWidget* checkbutton1 ;
GtkWidget* mediouni_recla_ajout;
GtkWidget *rInfo;



mediouni_recla_ajout=lookup_widget(objet,"mediouni_recla_ajout");

input1= lookup_widget(objet,"combobox1");
input2= lookup_widget(objet,"combobox2");
input3= lookup_widget(objet,"spinbutton1");
input4= lookup_widget(objet,"entry1");
input5= lookup_widget(objet,"entry2");
input6= lookup_widget(objet,"entry3");

checkbutton1= lookup_widget(objet,"checkbutton1");

strcpy(r.typedereclamation,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input1)));
strcpy(r.idBureauvote,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input2)));
r.idlist=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(input3));
strcpy(r.idreclamation,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(r.Objet,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(r.textereclamation,gtk_entry_get_text(GTK_ENTRY(input6)));

if(gtk_toggle_button_get_active(GTK_CHECK_BUTTON(checkbutton1)))
ajouter_reclamation(r,"reclamation.txt");
else
{
rInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_ERROR,GTK_BUTTONS_OK,"Confirmation requise");
	switch(gtk_dialog_run(GTK_DIALOG(rInfo)))
	{
	case GTK_RESPONSE_OK:
	gtk_widget_destroy(rInfo);
	break;
	}
}
}


void
on_bouton_cherch_modif_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *mediouni_recla_modif;
GtkWidget *mediouni_liste_recla;
mediouni_liste_recla=lookup_widget(objet,"modifier_recla");

GtkWidget *combobox4_modif, *combobox3_modif, *spinbutton2_modif, *entry6_modif, *entry7_modif, *entry8_modif,*rInfo;

reclamation b;
int a=0;
int ind;
int index;
char id[50];
FILE *f;

mediouni_recla_modif=lookup_widget(objet,"mediouni_recla_modif");

combobox4_modif= lookup_widget(objet,"combobox4_modif") ;
combobox3_modif= lookup_widget(objet,"combobox3_modif") ;
spinbutton2_modif= lookup_widget(objet,"spinbutton2_modif") ;
entry6_modif= lookup_widget(objet,"entry6_modif");
entry7_modif= lookup_widget(objet,"entry7_modif");
entry8_modif= lookup_widget(objet,"entry8_modif");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(entry6_modif)));
f = fopen("reclamation.txt","r");
if(f!=NULL){
while(fscanf(f,"%s %s %d %s %s %s \n",b.typedereclamation,b.idBureauvote,&(b.idlist),b.idreclamation,b.Objet,b.textereclamation)!=EOF)
	{
		if(strcmp(b.idreclamation,id)==0){
			a=1;
			break;
                }
	}
//fclose(f);
}
if(a==1){

if (strcmp(b.typedereclamation,"déni_du_droit_de_vote") == 0){
index = 0;
}
else{
if (strcmp(b.typedereclamation,"manipuler_la_composition_démographique") == 0){
index = 1;
}
else{
if (strcmp(b.typedereclamation,"exploitation_des_électeurs ") == 0){
index = 2;
}
}}

if (strcmp(b.idBureauvote,"2025") == 0){
ind = 0;
}
else{
if (strcmp(b.idBureauvote,"2035") == 0){
ind = 1;
}
else{
if (strcmp(b.idBureauvote,"2045") == 0){
ind = 2;
}
else{
if (strcmp(b.idBureauvote,"2055") == 0){
ind = 3;
}
else{
if (strcmp(b.idBureauvote,"2030") == 0){
ind = 4;
}
}}}}
fclose(f);

gtk_combo_box_set_active (GTK_COMBO_BOX(combobox4_modif),index);
gtk_combo_box_set_active (GTK_COMBO_BOX(combobox3_modif),ind);
gtk_spin_button_set_value(GTK_SPIN_BUTTON(spinbutton2_modif),b.idlist);
gtk_entry_set_text(GTK_ENTRY(entry6_modif),b.idreclamation);
gtk_entry_set_text(GTK_ENTRY(entry7_modif),b.Objet);
gtk_entry_set_text(GTK_ENTRY(entry8_modif),b.textereclamation);

}
else{
rInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_ERROR,GTK_BUTTONS_OK,"Reclamation introuvable");
	switch(gtk_dialog_run(GTK_DIALOG(rInfo)))
	{
	case GTK_RESPONSE_OK:
	gtk_widget_destroy(rInfo);
	break;
	}
}
}


void
on_retour_modifier_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget  *mediouni_recla_modif;
GtkWidget *mediouni_liste_recla;
mediouni_recla_modif=lookup_widget(objet,"mediouni_recla_modif");
gtk_widget_destroy(mediouni_recla_modif);
mediouni_liste_recla=create_mediouni_liste_recla();
gtk_widget_show (mediouni_liste_recla);
}


void
on_modifier_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *combobox4_modif, *combobox3_modif, *spinbutton2_modif, *entry6_modif, *entry7_modif, *entry8_modif;
reclamation p;

combobox4_modif= lookup_widget(objet,"combobox4_modif") ;
combobox3_modif= lookup_widget(objet,"combobox3_modif") ;
spinbutton2_modif= lookup_widget(objet,"spinbutton2_modif") ;
entry6_modif= lookup_widget(objet,"entry6_modif");
entry7_modif= lookup_widget(objet,"entry7_modif");
entry8_modif= lookup_widget(objet,"entry8_modif");

strcpy(p.typedereclamation,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox4_modif)));
strcpy(p.idBureauvote,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox3_modif)));
p.idlist=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(spinbutton2_modif));
strcpy(p.idreclamation,gtk_entry_get_text(GTK_ENTRY(entry6_modif)));
strcpy(p.Objet,gtk_entry_get_text(GTK_ENTRY(entry7_modif)));
strcpy(p.textereclamation,gtk_entry_get_text(GTK_ENTRY(entry8_modif)));

modifier_reclamation(p,"reclamation.txt");
}

void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;

	gchar *idreclamation;
	GtkTreeModel *model ;
	model = gtk_tree_view_get_model(treeview);
if (gtk_tree_model_get_iter(model,&iter,path))
	{
	gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&idreclamation,-1);
	strcpy(ID_RECLAMATION,idreclamation);
	}				
}


void
on_entry7_cherch_changed               (GtkEditable     *editable,
                                        gpointer         user_data)
{
GtkWidget *entry7_cherch;
char idreclamation[50]= "";
GtkWidget *tree;
tree =  lookup_widget(editable,"treeview1");

entry7_cherch = lookup_widget(GTK_WIDGET(editable),"entry7_cherch");
strcpy(idreclamation,gtk_entry_get_text(GTK_ENTRY(entry7_cherch)));

chercherreclamation(tree,idreclamation);
}


void
on_retour_recla_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{

}


void
on_modifier_recla_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{
if (strlen(ID_RECLAMATION)>0){
GtkWidget *mediouni_recla_modif;
mediouni_recla_modif=create_mediouni_recla_modif();
gtk_widget_show(mediouni_recla_modif);	
}else{
GtkWidget *msg;
msg = lookup_widget(objet,"label_ms");
gtk_label_set_text(msg,"Selectionner reclamation par double click!");
}

/*GtkWidget  *mediouni_recla_modif;
GtkWidget *mediouni_liste_recla;
mediouni_liste_recla=lookup_widget(objet,"mediouni_liste_recla");
gtk_widget_destroy(mediouni_liste_recla);
mediouni_recla_modif=create_mediouni_recla_modif();
gtk_widget_show (mediouni_recla_modif);*/

}


void
on_supprimer_recla_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *entry4_supp;
reclamation r;
entry4_supp=lookup_widget(objet,"entry4_supp");
strcpy(r.idreclamation,gtk_entry_get_text(GTK_ENTRY(entry4_supp)));
supprimer_reclamation(r,"reclamation.txt");

}



void
on_ajouter_recla_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget  *mediouni_recla_ajout;
GtkWidget *mediouni_liste_recla;
mediouni_liste_recla=lookup_widget(objet,"mediouni_liste_recla");
gtk_widget_destroy(mediouni_liste_recla);
mediouni_recla_ajout=create_mediouni_recla_ajout();
gtk_widget_show (mediouni_recla_ajout);
}


void
on_actualiser_recla_clicked            (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *treeview1 ,*mediouni_liste_recla;
mediouni_liste_recla=lookup_widget(objet,"mediouni_liste_recla");
gtk_widget_destroy(mediouni_liste_recla);
mediouni_liste_recla=lookup_widget(objet,"mediouni_liste_recla");
mediouni_liste_recla=create_mediouni_liste_recla();
gtk_widget_show(mediouni_liste_recla);
treeview1=lookup_widget(mediouni_liste_recla,"treeview1");
actualiser_reclamation(treeview1,"reclamation.txt");
}

