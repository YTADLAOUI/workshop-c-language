#include <stdio.h>
#include <stdlib.h>
#include<stdlib.h>
int main (){
    puts(" Programme guidé par menu pour convertir l'année Ecrire un programme C piloté par menu pour convertir une année donnée en Mois Jours Heures Minutes Secondes\n\n\n");
     int x,Mois;
     long int Jours,Heures,Minutes,Secondes;
     float annee;
     menu :
     puts("========== menu principal==========\n\n");
     puts("pour culcul numbre  des mois trouvee dans les annees. entre num 1");
     puts("pour culcul numbre  des jours dans les annees. entre num 2");
     puts("pour culcul numbre  des houres  dans les annees. entre num 3");
     puts("pour culcul numbre des secondes  dans les annees. entre num 4");
     scanf ("%d",&x);


     //if (x>=1 && x<=4){

     switch(x){
 case 1:
    puts ("entre numbre des annees");
    scanf("%f",&annee );
    Mois = annee * 12;
    printf("la numbre des mois est %d\n",Mois);
    goto menu;
    break;
case 2:
      puts ("entre numbre des annees");
      scanf("%f",&annee );
      Jours = annee * 365;
      printf("la numbre des Jours est %ld\n",Jours);
      goto menu;
      break;
case 3:
      puts ("entre numbre des annees");
      scanf("%f",&annee );
      Heures = annee * 8760;
      printf("la numbre des Heures est %ld\n",Heures);
      goto menu;
      break;
case 4:
      puts ("entre numbre des annees");
      scanf("%f",&annee );
      Minutes = annee * 525600;
      printf("la numbre des Minutes est %ld\n",Minutes);
      goto menu;
      break;
case 5:
      puts ("entre numbre des Secondes");
      scanf("%f",&annee );
      Secondes = annee * 31536000;
      printf("la numbre des Heures est %ld\n",Secondes);
      goto menu;
      break;
default:
    goto menu;
    break;
    }
    return 0;
}
