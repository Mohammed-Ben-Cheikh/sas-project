#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 typedef struct  {

    int   identifiant;
    char  nom[200];
    char  prenom[200];
    int   day;
    int   month;
    int   year;
    float NoteGenerale;

}etudiant;

 typedef struct  {

    char  identifiant[40];
    char  identifiant2;
    char  nom[200];
    char  prenom[200];
    float note;

}Departement;



     etudiant List[5000];
     Departement list[5000];
     Departement Note[5000];

     char list2[10000000];
     char list3[10000000];
     int c=0;

 void AjouterAuto(){

     List[c].identifiant = c+1+240000;
     list[c].identifiant2 = List[c].identifiant;
     strcpy(List[c].nom ,"ben_cheikh");
     strcpy(list[c].nom , List[c].nom);
     strcpy(List[c].prenom ,"mohammed");
     strcpy(list[c].prenom , List[c].prenom);
     List[c].day = 01;
     List[c].month = 07;
     List[c].year = 2005;
     List[c].NoteGenerale = 15;
     strcpy(list[c].identifiant ,"Informatique");
     list[c].note = List[c].NoteGenerale;
     c++;


     List[c].identifiant = c+1+240000;
     list[c].identifiant2 = List[c].identifiant;
     strcpy(List[c].nom ,"majbor");
     strcpy(list[c].nom , List[c].nom);
     strcpy(List[c].prenom ,"saad");
     strcpy(list[c].prenom , List[c].prenom);
     List[c].day = 01;
     List[c].month = 12;
     List[c].year = 2006;
     List[c].NoteGenerale = 15.50;
     strcpy(list[c].identifiant ,"chimique");
     list[c].note = List[c].NoteGenerale;
     c++;


     List[c].identifiant = c+1+240000;
     list[c].identifiant2 = List[c].identifiant;
     strcpy(List[c].nom ,"hakimi");
     strcpy(list[c].nom , List[c].nom);
     strcpy(List[c].prenom ,"achraf");
     strcpy(list[c].prenom , List[c].prenom);
     List[c].day = 01;
     List[c].month = 05;
     List[c].year = 1999;
     List[c].NoteGenerale = 9.50;
     strcpy(list[c].identifiant ,"Phisique");
     list[c].note = List[c].NoteGenerale;
     c++;


     List[c].identifiant = c+1+240000;
     list[c].identifiant2 = List[c].identifiant;
     strcpy(List[c].nom ,"ben_dada");
     strcpy(list[c].nom , List[c].nom);
     strcpy(List[c].prenom ,"tarik");
     strcpy(list[c].prenom , List[c].prenom);
     List[c].day = 01;
     List[c].month = 03;
     List[c].year = 2003;
     List[c].NoteGenerale = 16.50;
     strcpy(list[c].identifiant ,"Mathematique");
     list[c].note = List[c].NoteGenerale;
     c++;


     List[c].identifiant = c+1+240000;
     list[c].identifiant2 = List[c].identifiant;
     strcpy(List[c].nom ,"kawtayi");
     strcpy(list[c].nom , List[c].nom);
     strcpy(List[c].prenom ,"zineb");
     strcpy(list[c].prenom , List[c].prenom);
     List[c].day = 01;
     List[c].month = 06;
     List[c].year = 2001;
     List[c].NoteGenerale = 12.50;
     strcpy(list[c].identifiant ,"Informatique");
     list[c].note = List[c].NoteGenerale;
     c++;


     List[c].identifiant = c+1+240000;
     list[c].identifiant2 = List[c].identifiant;
     strcpy(List[c].nom ,"douskary");
     strcpy(list[c].nom , List[c].nom);
     strcpy(List[c].prenom ,"wissam");
     strcpy(list[c].prenom , List[c].prenom);
     List[c].day = 19;
     List[c].month = 02;
     List[c].year = 2007;
     List[c].NoteGenerale = 11.50;
     strcpy(list[c].identifiant ,"Mathematique");
     list[c].note = List[c].NoteGenerale;
     c++;


     List[c].identifiant = c+1+240000;
     list[c].identifiant2 = List[c].identifiant;
     strcpy(List[c].nom ,"ben_krara");
     strcpy(list[c].nom , List[c].nom);
     strcpy(List[c].prenom ,"ahmad");
     strcpy(list[c].prenom , List[c].prenom);
     List[c].day = 01;
     List[c].month = 03;
     List[c].year = 2001;
     List[c].NoteGenerale = 17.50;
     strcpy(list[c].identifiant ,"Informatique");
     list[c].note = List[c].NoteGenerale;
     c++;


     List[c].identifiant = c+1+240000;
     list[c].identifiant2 = List[c].identifiant;
     strcpy(List[c].nom ,"chabli");
     strcpy(list[c].nom , List[c].nom);
     strcpy(List[c].prenom ,"hamza");
     strcpy(list[c].prenom , List[c].prenom);
     List[c].day = 06;
     List[c].month = 05;
     List[c].year = 2000;
     List[c].NoteGenerale = 19.50;
     strcpy(list[c].identifiant ,"Phisique");
     list[c].note = List[c].NoteGenerale;
     c++;


     List[c].identifiant = c+1+240000;
     list[c].identifiant2 = List[c].identifiant;
     strcpy(List[c].nom ,"hamouch");
     strcpy(list[c].nom , List[c].nom);
     strcpy(List[c].prenom ,"mohammed");
     strcpy(list[c].prenom , List[c].prenom);
     List[c].day = 05;
     List[c].month = 07;
     List[c].year = 2000;
     List[c].NoteGenerale = 6;
     strcpy(list[c].identifiant ,"chimique");
     list[c].note = List[c].NoteGenerale;
     c++;


     List[c].identifiant = c+1+240000;
     list[c].identifiant2 = List[c].identifiant;
     strcpy(List[c].nom ,"el_hamzawi");
     strcpy(list[c].nom , List[c].nom);
     strcpy(List[c].prenom ,"asmae");
     strcpy(list[c].prenom , List[c].prenom);
     List[c].day = 01;
     List[c].month = 05;
     List[c].year = 2005;
     List[c].NoteGenerale = 12.50;
     strcpy(list[c].identifiant ,"Informatique");
     list[c].note = List[c].NoteGenerale;
     c++;


     List[c].identifiant = c+1+240000;
     list[c].identifiant2 = List[c].identifiant;
     strcpy(List[c].nom ,"dahmad");
     strcpy(list[c].nom , List[c].nom);
     strcpy(List[c].prenom ,"youssef");
     strcpy(list[c].prenom , List[c].prenom);
     List[c].day = 01;
     List[c].month = 11;
     List[c].year = 2006;
     List[c].NoteGenerale = 12.50;
     strcpy(list[c].identifiant ,"Mathematique");
     list[c].note = List[c].NoteGenerale;
     c++;


     List[c].identifiant = c+1+240000;
     list[c].identifiant2 = List[c].identifiant;
     strcpy(List[c].nom ,"ahouari");
     strcpy(list[c].nom , List[c].nom);
     strcpy(List[c].prenom ,"abd_rahman");
     strcpy(list[c].prenom , List[c].prenom);
     List[c].day = 01;
     List[c].month = 05;
     List[c].year = 2005;
     List[c].NoteGenerale = 8.75;
     strcpy(list[c].identifiant ,"Informatique");
     list[c].note = List[c].NoteGenerale;
     c++;


     List[c].identifiant = c+1+240000;
     list[c].identifiant2 = List[c].identifiant;
     strcpy(List[c].nom ,"marwan");
     strcpy(list[c].nom , List[c].nom);
     strcpy(List[c].prenom ,"bou_chakara");
     strcpy(list[c].prenom , List[c].prenom);
     List[c].day = 01;
     List[c].month = 10;
     List[c].year = 2005;
     List[c].NoteGenerale = 16.50;
     strcpy(list[c].identifiant ,"chimique");
     list[c].note = List[c].NoteGenerale;
     c++;
 }
 void Ajouter(){
            int h;
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");
            if ( c > 0 && List[c].identifiant > 240001 ) {List[c].identifiant = c+2+240000;}
            else List[c].identifiant = c+1+240000;
            printf("              =====>>  enter les informatin de l'etudiant ");
            printf("\n\n");
            printf("       =====>>  l'identifiant de l'etudiant  ---------------------- : %d \n",List[c].identifiant);
            list[c].identifiant2 = List[c].identifiant;
            printf("\n");
            printf("       =====>>  Entre le nom de l'etudiant ------------------------ : ");
            scanf("%s",List[c].nom);
            strcpy(list[c].nom , List[c].nom);
            printf("\n");
            printf("       =====>>  Entre le prenom de l'etudiant --------------------- : ");
            scanf("%s",List[c].prenom);
            strcpy(list[c].prenom , List[c].prenom);
            printf("\n");
            printf("           :=====>>  Entre la date de naissance de l'etudiant \n");
            printf("           |\n");
            printf("           |===>>  Entre les jours     xx : ");
            scanf("%d",&List[c].day);
            printf("           |===>>  Entre les mois      xx : ");
            scanf("%d",&List[c].month);
            printf("           |===>>  Entre les annees  XXXX : ");
            scanf("%d",&List[c].year);
            printf("           |\n");
            if (List[c].day >= 10 && List[c].month >= 10){
            printf("           :=====>>  La Date de naissance de l'etudiant est le ---- : %d/%d/%d ",List[c].day,List[c].month,List[c].year);
            }else if (List[c].day >= 10 && List[c].month <= 9){
            printf("           :=====>>  La Date de naissance de l'etudiant est le ---- : %d/0%d/%d ",List[c].day,List[c].month,List[c].year);
            }else if (List[c].day <= 9 && List[c].month >= 10){
            printf("           :=====>>  La Date de naissance de l'etudiant est le ---- : 0%d/%d/%d ",List[c].day,List[c].month,List[c].year);
            }else {printf("           :=====>>  La Date de naissance de l'etudiant est le ---- : 0%d/0%d/%d ",List[c].day,List[c].month,List[c].year);}
            printf("\n\n");
            printf("       =====>>  Entre le departement de l'etudiant : \n\n");
            printf("           =====>>  Pour le departement Informatique taper - : 1\n");
            printf("           =====>>  Pour le departement Mathematique taper --- : 2\n");
            printf("           =====>>  Pour le departement chimique taper ----- : 3\n");
            printf("           =====>>  Pour le departement Phisique taper ----- : 4\n");
            printf("             |\n");
            printf("             :=====>> Taper le nombre ici : ");
            scanf("%d",&h);
            switch(h){
            case 1:
                strcpy(list[c].identifiant ,"Informatique");
                break;
            case 2:
                strcpy(list[c].identifiant ,"Mathematique");
                break;
            case 3:
                strcpy(list[c].identifiant ,"chimique");
                break;
            case 4:
                strcpy(list[c].identifiant ,"Phisique");
                break;
                }
            printf("\n");
            printf("       =====>>  Vous avez choisir le departement %s",list[c].identifiant);
            printf("\n\n");
            printf("       =====>>  Entre la note generale de l'etudiant  -------------- : ");
            scanf("%f",&List[c].NoteGenerale);
            list[c].note = List[c].NoteGenerale;
            printf("\n");
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");
            c++;

 }

void afficher(){
     int x;
     if(c!=0){
          printf("              =====>> entre l'identifiant d'etudiant : ");
          scanf("%d",&x);
          printf("\n\n");
          for (int i=0;i<c;i++){
              if( x == List[i].identifiant ){
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");
            printf("              =====>>  Voila les informatin de l'etudiant ");
            printf("\n\n");
            printf("       =====>>  l'identifiant de l'etudiant  ---------------------- : %d \n",List[i].identifiant);
            printf("\n");
            printf("       =====>>  le nom de l'etudiant ------------------------------ : %s",List[i].nom);
            printf("\n\n");
            printf("       =====>>  le prenom de l'etudiant --------------------------- : %s",List[i].prenom);
            printf("\n\n");
            if (List[i].day >= 10 && List[i].month >= 10){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : %d/%d/%d ",List[i].day,List[i].month,List[i].year);
            }else if (List[i].day >= 10 && List[i].month <= 9){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : %d/0%d/%d ",List[i].day,List[i].month,List[i].year);
            }else if (List[i].day <= 9 && List[i].month >= 10){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : 0%d/%d/%d ",List[i].day,List[i].month,List[i].year);
            }else {printf("           =====>>  La Date de naissance de l'etudiant est le ----- : 0%d/0%d/%d ",List[i].day,List[i].month,List[i].year);}
            printf("\n\n");
            printf("       =====>>  le departement choisir est ------------------------ : %s",list[i].identifiant);
            printf("\n\n");
            printf("       =====>>  la note generale de l'etudiant  ------------------- : %.2f",List[i].NoteGenerale);
            printf("\n\n");
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");

              }
            else if ( x == List[i].identifiant ){printf("       =====>>  L'etudiants est Supprimer !!!\n");}
         }
     }else {printf("       =====>>  Pas encore des etudiants enregistre pour afficher !!!\n\n\n");}






}

 void Modifier(){
     etudiant List1[3];
     int p;
     if(c!=0){
          printf("              =====>> entre l'identifiant d'etudiant : ");
          scanf("%d",&p);
          printf("\n\n");
          printf("\n\n");
          for (int i=0;i<c;i++){
              if( p == List[i].identifiant ){
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");
            printf("              =====>>  enter les nouveux informatin de l'etudiant ");
            printf("\n\n");
            printf("       =====>>  l'identifiant de l'etudiant  ---------------- : %d \n",List[i].identifiant);
            printf("\n");
            printf("       =====>>  Entre le nom de l'etudiant ------------------ : ");
            scanf("%s",List1[i].nom);
        strcpy(List[i].nom , List1[i].nom);
            printf("\n");
            printf("       =====>>  Entre le prenom de l'etudiant --------------- : ");
            scanf("%s",List1[i].prenom);
        strcpy(List[i].prenom , List1[i].prenom);
            printf("\n");
            printf("           :=====>>  Entre la date de naissance de l'etudiant \n");
            printf("           |\n");
            printf("           |===>>  Entre les jours     xx : ");
            scanf("%d",&List1[i].day);
            printf("           |===>>  Entre les mois      xx : ");
            scanf("%d",&List1[i].month);
            printf("           |===>>  Entre les annees  XXXX : ");
            scanf("%d",&List1[i].year);
            printf("           |\n");
        List[i].day = List1[i].day;
        List[i].month = List1[i].month;
        List[i].year = List1[i].year;
            if (List1[i].day >= 10 && List1[i].month >= 10){
            printf("           :=====>>  La Date de naissance de l'etudiant est le ---- : !! %d/%d/%d !! ",List1[i].day,List1[i].month,List1[i].year);
            }else if (List1[i].day >= 10 && List1[i].month <= 9){
            printf("           :=====>>  La Date de naissance de l'etudiant est le ---- : !! %d/0%d/%d !! ",List1[i].day,List1[i].month,List1[i].year);
            }else if (List1[i].day <= 9 && List1[i].month >= 10){
            printf("           :=====>>  La Date de naissance de l'etudiant est le ---- : !! 0%d/%d/%d !! ",List1[i].day,List1[i].month,List1[i].year);
            }else {printf("           :=====>>  La Date de naissance de l'etudiant est le ---- : !! 0%d/0%d/%d !! ",List1[i].day,List1[i].month,List1[i].year);}
            printf("\n\n");
            printf("       =====>>  Entre la note generale de l'etudiant  -------------- : ");
            scanf("%f",&List1[i].NoteGenerale);
        List[i].NoteGenerale = List1[i].NoteGenerale;
            printf("\n");
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");

              }
              else if ( p == List[i].identifiant ){printf("       =====>>  L'etudiants est Supprimer !!!\n");}
         }
     }else {printf("       =====>>  Pas encore des etudiants enregistre pour afficher !!!\n\n\n");}




}
 void Supprimer(){
     int x;
     if(c!=0){
          printf("              =====>> entre l'identifiant d'etudiant : ");
          scanf("%d",&x);
          printf("\n\n");
          for (int i=0;i<c;i++){
              if( x == List[i].identifiant ){
                    c--;
                    for ( int m=i;m<c;m++){
                        List[m] = List[m+1];
                        list[m] = list[m+1];
                    }
              break;}


   }
  }else {printf("       =====>>  Pas encore des etudiants enregistre pour afficher !!!\n\n\n");}
 }
 void Statistiques(){
     printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
     printf("\n\n");
     printf("              =====>>  Voila les statistiques et informatins de l'etudiant ");
     printf("\n\n");
     printf("       =====>>  le nombre total d'etudiants inscrits  ------------- : %d",c);
     printf("\n\n\n");
     printf("       =====>>  le nombre d'etudiants dans chaque departement .\n            |\n");
     int u=0,g=0,w=0,e=0;
     float s;
     for(int k = 0 ; k <= c ; k++ ){
            if(strcmp(list[k].identifiant,"Informatique")==0){u++;}
            if(strcmp(list[k].identifiant,"Mathematique")==0){g++;}
            if(strcmp(list[k].identifiant,"chimique")==0){w++;}
            if(strcmp(list[k].identifiant,"Phisique")==0){e++;}
            }
     printf("            |=====>>  le nombre d'etudiants dans le departement Informatique  ------------- : %d\n",u);
     printf("            |=====>>  le nombre d'etudiants dans le departement Mathematique  ------------- : %d\n",g);
     printf("            |=====>>  le nombre d'etudiants dans le departement chimique   ------------- : %d\n",w);
     printf("            :=====>>  le nombre d'etudiants dans le departement Phisique  ------------- : %d\n",e);
     printf("\n\n");
     printf("       =====>>  les etudiants ayant une moyenne generale superieure a un certain seuil .\n            |\n");
     printf("            |=====>> entre le seuil  -------- :");
     scanf("%f",&s);
     printf("\n");
     for(int i2 = 0 ; i2 <= c ; i2++){
            if( List[i2].NoteGenerale >= s ){
                 printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");
            printf("              =====>>  Voila les informatin de l'etudiant ");
            printf("\n\n");
            printf("       =====>>  l'identifiant de l'etudiant  ---------------------- : %d \n",List[i2].identifiant);
            printf("\n");
            printf("       =====>>  le nom de l'etudiant ------------------------------ : %s",List[i2].nom);
            printf("\n\n");
            printf("       =====>>  le prenom de l'etudiant --------------------------- : %s",List[i2].prenom);
            printf("\n\n");
            if (List[i2].day >= 10 && List[i2].month >= 10){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : %d/%d/%d ",List[i2].day,List[i2].month,List[i2].year);
            }else if (List[i2].day >= 10 && List[i2].month <= 9){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : %d/0%d/%d ",List[i2].day,List[i2].month,List[i2].year);
            }else if (List[i2].day <= 9 && List[i2].month >= 10){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : 0%d/%d/%d ",List[i2].day,List[i2].month,List[i2].year);
            }else {printf("           =====>>  La Date de naissance de l'etudiant est le ----- : 0%d/0%d/%d ",List[i2].day,List[i2].month,List[i2].year);}
            printf("\n\n");
            printf("       =====>>  le departement choisir est ------------------------ : %s",list[i2].identifiant);
            printf("\n\n");
            printf("       =====>>  la note generale de l'etudiant  ------------------- : %.2f",List[i2].NoteGenerale);
            printf("\n\n");
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");
            }
        }
      printf("\n\n");
      printf("       =====>>  les 3 etudiants ayant les meilleures notes .\n\n\n");

     for (int P=0;P<=c;P++){
        Note[P]=list[P];
     }

     for (int Y=0 ; Y < c-1; Y++)
     {
     for (int j=0 ; j < c-Y-1; j++)
     {
      if (Note[j].note < Note[j+1].note)
      {
        Departement tmp = Note[j];
        Note[j] = Note[j+1];
        Note[j+1] = tmp;


      }
     }
     }
     for (int i5=0;i5<=2;i5++){

          printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");
            printf("              =====>>  Voila les l'etudiant ");
            printf("\n\n");
            printf("       =====>>  le nom de l'etudiant ------------------------------ : %s",Note[i5].nom);
            printf("\n\n");
            printf("       =====>>  le prenom de l'etudiant --------------------------- : %s",Note[i5].prenom);
            printf("\n\n");
            printf("       =====>>  le departement choisir est ------------------------ : %s",Note[i5].identifiant);
            printf("\n\n");
            printf("       =====>>  la note generale de l'etudiant  ------------------- : %.2f",Note[i5].note);
            printf("\n\n");
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");
    }
     float somme = 0,somme1 = 0,somme2 = 0,somme3 = 0;
     float Z[u],E[g],R[w],X[e];
     for( int k1 = 0 ; k1 <= c ; k1++ ){
            if(strcmp(list[k1].identifiant,"Informatique")==0){
                Z[k1] = List[k1].NoteGenerale;
                somme = somme + Z[k1];
                }
        }
     for( int k2 = 0 ; k2 <= c ; k2++ ){
            if(strcmp(list[k2].identifiant,"Mathematique")==0){
                E[k2] = List[k2].NoteGenerale;
                somme1 = somme1 + E[k2];
                }
        }
     for( int k3 = 0 ; k3 <= c ; k3++ ){
            if(strcmp(list[k3].identifiant,"chimique")==0){
                R[k3] = List[k3].NoteGenerale;
                somme2 = somme2 + R[k3];
                }
        }
     for( int k4 = 0 ; k4 <= c ; k4++ ){
            if(strcmp(list[k4].identifiant,"Phisique")==0){
                X[k4] = List[k4].NoteGenerale;
                somme3 = somme3 + X[k4];
                }
        }
        printf("\n\n");
     printf("       =====>>  la moyenne generale de chaque departement .\n            |\n");
     float somme4,somme5,somme6,somme7;
     somme4 = somme/u;
     somme5 = somme1/g;
     somme6 = somme2/w;
     somme7 = somme3/e;
     float somme8 = (somme4 + somme5 + somme6 + somme7)/4;
     printf("            |=====>>  la moyenne generale de departement Informatique  ------------- : %.2f\n",somme4);
     printf("            |=====>>  la moyenne generale de departement Mathematique  ------------- : %.2f\n",somme5);
     printf("            |=====>>  la moyenne generale de departement chimique   ------------- : %.2f\n",somme6);
     printf("            :=====>>  la moyenne generale de departement Phisique  ------------- : %.2f\n            |\n            |\n",somme7);
     printf("            :=====>>  la moyenne generale de l'universite  ------------- : %.2f\n",somme8);
     printf("\n\n\n");
     int Z1 = 0,E1 = 0,R1 = 0,X1 = 0;
     for( int k10 = 0 ; k10 <= c ; k10++ ){
            if(strcmp(list[k10].identifiant,"Informatique")==0 && List[k10].NoteGenerale >=10){
                Z1++;
                }
        }
     for( int k20 = 0 ; k20 <= c ; k20++ ){
            if(strcmp(list[k20].identifiant,"Mathematique")==0 && List[k20].NoteGenerale >=10){
                E1++;
                }
        }
     for( int k30 = 0 ; k30 <= c ; k30++ ){
            if(strcmp(list[k30].identifiant,"chimique")==0 && List[k30].NoteGenerale >=10){
                R1++;
                }
        }
     for( int k40 = 0 ; k40 <= c ; k40++ ){
            if(strcmp(list[k40].identifiant,"Phisique")==0 && List[k40].NoteGenerale >=10){
                X1++;
                }
        }
        int Q1= Z1+ E1+ R1+ X1;
     printf("       =====>>  Le nombre d'etudiants ayant reussi dans chaque departement .\n            |\n");
     printf("            |=====>>  le departement Informatique  --- : %d\n",Z1);
     printf("            |=====>>  le departement Mathematique  --- : %d\n",E1);
     printf("            |=====>>  le departement chimique   ------ : %d\n",R1);
     printf("            :=====>>  le departement Phisique  ------- : %d\n            |\n            |\n",X1);
     printf("            :=====>>  dans l'universite  ------------- : %d\n",Q1);
     printf("\n\n");
     printf("\n\n");
     printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
     printf("\n\n");
 }
 void RechercherI(){
     char nom1[20];
     printf("              =====>> entre le nom d'etudiant : ");
          scanf("%s",nom1);
          printf("\n\n");
     for( int k200 = 0 ; k200 <= c ; k200++ ){
        if(strcmp(List[k200].nom,nom1)==0){
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");
            printf("              =====>>  Voila les informatin de l'etudiant ");
            printf("\n\n");
            printf("       =====>>  l'identifiant de l'etudiant  ---------------------- : %d \n",List[k200].identifiant);
            printf("\n");
            printf("       =====>>  le nom de l'etudiant ------------------------------ : %s",List[k200].nom);
            printf("\n\n");
            printf("       =====>>  le prenom de l'etudiant --------------------------- : %s",List[k200].prenom);
            printf("\n\n");
            if (List[k200].day >= 10 && List[k200].month >= 10){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : %d/%d/%d ",List[k200].day,List[k200].month,List[k200].year);
            }else if (List[k200].day >= 10 && List[k200].month <= 9){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : %d/0%d/%d ",List[k200].day,List[k200].month,List[k200].year);
            }else if (List[k200].day <= 9 && List[k200].month >= 10){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : 0%d/%d/%d ",List[k200].day,List[k200].month,List[k200].year);
            }else {printf("           =====>>  La Date de naissance de l'etudiant est le ----- : 0%d/0%d/%d ",List[k200].day,List[k200].month,List[k200].year);}
            printf("\n\n");
            printf("       =====>>  le departement choisir est ------------------------ : %s",list[k200].identifiant);
            printf("\n\n");
            printf("       =====>>  la note generale de l'etudiant  ------------------- : %.2f",List[k200].NoteGenerale);
            printf("\n\n");
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");
        }
     }

 }
 void RechercherI2(){
     printf("\n");
     printf("       =====>>  Les etudiants de departement Informatique .\n\n\n");
     for( int k100 = 0 ; k100 <= c ; k100++ ){
            if(strcmp(list[k100].identifiant,"Informatique")==0){
                printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");
            printf("              =====>>  Voila les informatin de l'etudiant ");
            printf("\n\n");
            printf("       =====>>  l'identifiant de l'etudiant  ---------------------- : %d \n",List[k100].identifiant);
            printf("\n");
            printf("       =====>>  le nom de l'etudiant ------------------------------ : %s",List[k100].nom);
            printf("\n\n");
            printf("       =====>>  le prenom de l'etudiant --------------------------- : %s",List[k100].prenom);
            printf("\n\n");
            if (List[k100].day >= 10 && List[k100].month >= 10){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : %d/%d/%d ",List[k100].day,List[k100].month,List[k100].year);
            }else if (List[k100].day >= 10 && List[k100].month <= 9){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : %d/0%d/%d ",List[k100].day,List[k100].month,List[k100].year);
            }else if (List[k100].day <= 9 && List[k100].month >= 10){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : 0%d/%d/%d ",List[k100].day,List[k100].month,List[k100].year);
            }else {printf("           =====>>  La Date de naissance de l'etudiant est le ----- : 0%d/0%d/%d ",List[k100].day,List[k100].month,List[k100].year);}
            printf("\n\n");
            printf("       =====>>  le departement choisir est ------------------------ : %s",list[k100].identifiant);
            printf("\n\n");
            printf("       =====>>  la note generale de l'etudiant  ------------------- : %.2f",List[k100].NoteGenerale);
            printf("\n\n");
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");
                }
        }
        printf("\n");
        printf("       =====>>  Les etudiants de departement Mathematique .\n\n\n");
     for( int k200 = 0 ; k200 <= c ; k200++ ){
            if(strcmp(list[k200].identifiant,"Mathematique")==0){
                printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");
            printf("              =====>>  Voila les informatin de l'etudiant ");
            printf("\n\n");
            printf("       =====>>  l'identifiant de l'etudiant  ---------------------- : %d \n",List[k200].identifiant);
            printf("\n");
            printf("       =====>>  le nom de l'etudiant ------------------------------ : %s",List[k200].nom);
            printf("\n\n");
            printf("       =====>>  le prenom de l'etudiant --------------------------- : %s",List[k200].prenom);
            printf("\n\n");
            if (List[k200].day >= 10 && List[k200].month >= 10){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : %d/%d/%d ",List[k200].day,List[k200].month,List[k200].year);
            }else if (List[k200].day >= 10 && List[k200].month <= 9){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : %d/0%d/%d ",List[k200].day,List[k200].month,List[k200].year);
            }else if (List[k200].day <= 9 && List[k200].month >= 10){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : 0%d/%d/%d ",List[k200].day,List[k200].month,List[k200].year);
            }else {printf("           =====>>  La Date de naissance de l'etudiant est le ----- : 0%d/0%d/%d ",List[k200].day,List[k200].month,List[k200].year);}
            printf("\n\n");
            printf("       =====>>  le departement choisir est ------------------------ : %s",list[k200].identifiant);
            printf("\n\n");
            printf("       =====>>  la note generale de l'etudiant  ------------------- : %.2f",List[k200].NoteGenerale);
            printf("\n\n");
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");
                }
        }
        printf("\n");
        printf("       =====>>  Les etudiants de departement chimique .\n\n\n");
     for( int k300 = 0 ; k300 <= c ; k300++ ){
            if(strcmp(list[k300].identifiant,"chimique")==0){
                printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");
            printf("              =====>>  Voila les informatin de l'etudiant ");
            printf("\n\n");
            printf("       =====>>  l'identifiant de l'etudiant  ---------------------- : %d \n",List[k300].identifiant);
            printf("\n");
            printf("       =====>>  le nom de l'etudiant ------------------------------ : %s",List[k300].nom);
            printf("\n\n");
            printf("       =====>>  le prenom de l'etudiant --------------------------- : %s",List[k300].prenom);
            printf("\n\n");
            if (List[k300].day >= 10 && List[k300].month >= 10){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : %d/%d/%d ",List[k300].day,List[k300].month,List[k300].year);
            }else if (List[k300].day >= 10 && List[k300].month <= 9){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : %d/0%d/%d ",List[k300].day,List[k300].month,List[k300].year);
            }else if (List[k300].day <= 9 && List[k300].month >= 10){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : 0%d/%d/%d ",List[k300].day,List[k300].month,List[k300].year);
            }else {printf("           =====>>  La Date de naissance de l'etudiant est le ----- : 0%d/0%d/%d ",List[k300].day,List[k300].month,List[k300].year);}
            printf("\n\n");
            printf("       =====>>  le departement choisir est ------------------------ : %s",list[k300].identifiant);
            printf("\n\n");
            printf("       =====>>  la note generale de l'etudiant  ------------------- : %.2f",List[k300].NoteGenerale);
            printf("\n\n");
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");
                }
        }
        printf("\n");
        printf("       =====>>  Les etudiants de departement Phisique .\n\n\n");
     for( int k400 = 0 ; k400 <= c ; k400++ ){
            if(strcmp(list[k400].identifiant,"Phisique")== 0){
                printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");
            printf("              =====>>  Voila les informatin de l'etudiant ");
            printf("\n\n");
            printf("       =====>>  l'identifiant de l'etudiant  ---------------------- : %d \n",List[k400].identifiant);
            printf("\n");
            printf("       =====>>  le nom de l'etudiant ------------------------------ : %s",List[k400].nom);
            printf("\n\n");
            printf("       =====>>  le prenom de l'etudiant --------------------------- : %s",List[k400].prenom);
            printf("\n\n");
            if (List[k400].day >= 10 && List[k400].month >= 10){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : %d/%d/%d ",List[k400].day,List[k400].month,List[k400].year);
            }else if (List[k400].day >= 10 && List[k400].month <= 9){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : %d/0%d/%d ",List[k400].day,List[k400].month,List[k400].year);
            }else if (List[k400].day <= 9 && List[k400].month >= 10){
            printf("           =====>>  La Date de naissance de l'etudiant est le ----- : 0%d/%d/%d ",List[k400].day,List[k400].month,List[k400].year);
            }else {printf("           =====>>  La Date de naissance de l'etudiant est le ----- : 0%d/0%d/%d ",List[k400].day,List[k400].month,List[k400].year);}
            printf("\n\n");
            printf("       =====>>  le departement choisir est ------------------------ : %s",list[k400].identifiant);
            printf("\n\n");
            printf("       =====>>  la note generale de l'etudiant  ------------------- : %.2f",List[k400].NoteGenerale);
            printf("\n\n");
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
            printf("\n\n");
                }
        }

 }
 int main ()

 {
int choix,z;

     do{
         printf("\n\n");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
printf("|\n");printf("|\n");
printf("|               ----------------- Systeme de Gestion de Contacts -----------------");
printf("                        |\n");printf("|\n");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
printf("|\n");printf("|       |\n");printf("|       |\n");

printf("|       |===>> Pour Ajouter un etudiant taper ----------------------------------------------------- : 1\n|       |\n");
printf("|       |===>> Pour Rechercher les information d'etudiant taper ----------------------------------- : 2\n|       |\n");
printf("|       |===>> Pour Modifier les information d'etudiant taper ------------------------------------- : 3\n|       |\n");
printf("|       |===>> Pour Supprimer un etudiant taper --------------------------------------------------- : 4\n|       |\n");
printf("|       |===>> Pour Les statistique de l'universite taper ----------------------------------------- : 5\n|       |\n");
printf("|       |===>> Pour Rechercher un etudiant par son nom taper -------------------------------------- : 6\n|       |\n");
printf("|       |===>> Pour Afficher la liste des etudiants inscrits dans un departement specifique taper - : 7\n|       |\n");
printf("|       |===>> Pour AjouterAuto des etudiant taper ------------------------------------------------ : 8\n|       |\n");
printf("|--------------------------------------------------------------------------------------------------------|");
printf("\n\n");
printf("                 ===>> Taper le numero ici : ");
scanf("%d",&choix);
printf("\n\n");
     switch(choix){
         case 1:
             Ajouter();
        break;
         case 2:
             afficher();
        break;
          case 3:
             Modifier();
        break;
          case 4:
             Supprimer();
        break;
          case 5:
             Statistiques();
        break;
          case 6:
             RechercherI();
        break;
          case 7:
             RechercherI2();
        break;
          case 8:
             AjouterAuto();
        break;

     }
}while (choix!= 0);

return 0;

}
