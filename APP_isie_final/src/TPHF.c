#include <stdio.h>
#include<string.h>
#include "TPHF.h"

float TPE(char *filename){
	
	FILE *f = fopen(filename,"r");
	utilisa u;
	int nb_electeurs=0;
	int nb_a_vote = 0;
	if (f!=NULL){
		while (fscanf(f,"%s %s %s %s %d %d %d %s %s %s %s %s %d %d",u.n,u.p,u.na,u.ci,&u.dn.jou,&u.dn.moi,&u.dn.ann,u.l,u.m,u.nu,u.ro,u.ad,&u.se,&u.vo)!=EOF){
	nb_electeurs= nb_electeurs + 1;
	if (u.vo != -1){
		nb_a_vote++;
	}
}
	}
	fclose(f);
	
	return (((float)nb_a_vote/nb_electeurs)*100);

}
float TPH(char *filename,int h){
	FILE *f2 = fopen(filename,"r");
	utilisa u;
        h=0;
 	int nb_a_vote = 0;
	float result;
	if (f2!=NULL){
		while (fscanf(f2,"%s %s %s %s %d %d %d %s %s %s %s %s %d %d",u.n,u.p,u.na,u.ci,&u.dn.jou,&u.dn.moi,&u.dn.ann,u.l,u.m,u.nu,u.ro,u.ad,&u.se,&u.vo)!=EOF){
	
	if (u.vo != -1){
		nb_a_vote++;
         if (u.se==0)
          {
		h=h+1;
	}
}
}
fclose(f2);
}
return (h/(float)nb_a_vote)*100;
}

float TPF(char *filename,int f){
FILE *f3 = fopen(filename,"r");
	utilisa u;
        f=0;
 	int nb_a_vote = 0;
	if (f3!=NULL){
		while (fscanf(f3,"%s %s %s %s %d %d %d %s %s %s %s %s %d %d",u.n,u.p,u.na,u.ci,&u.dn.jou,&u.dn.moi,&u.dn.ann,u.l,u.m,u.nu,u.ro,u.ad,&u.se,&u.vo)!=EOF){
	
	if (u.vo != -1){
		nb_a_vote++;
         if (u.se==0)
          {
		f = f +1;
		
	}}
}
	fclose(f3);
}
return (f/(float)nb_a_vote)*100;
}
 

