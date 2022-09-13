#include<stdio.h>
int main(){
	int jours, mois, annees;
	char mois_name[20];
	printf("donner le jour : ");
	scanf("%d", &jours);
	
	printf("donner le mois : ");
	scanf("%d", &mois);
	
	printf("donner l'annees' : ");
	scanf("%d", &annees);
	again :
	switch(mois){
		case 1 : printf("votre date est  %d-Janvier-%d", jours, annees); break;
		case 2 :printf("votre date est  %d-Fevrier-%d", jours, annees) ; break;
		case 3 : printf("votre date est  %d-Mars-%d", jours, annees); break;
		case 4 :printf("votre date est  %d-Avril-%d", jours, annees); break;
		case 5 : printf("votre date est  %d-Mai-%d", jours, annees) ; break;
		case 6 : printf("votre date est  %d-Juin-%d", jours, annees) ; break;
		case 7 : printf("votre date est  %d-Juillet-%d", jours, annees); break;
		case 8 : printf("votre date est  %d-Aôut-%d", jours, annees); break;
		case 9 : printf("votre date est  %d-Septembre-%d", jours, annees); break;
		case 10 : printf("votre date est  %d-Obtober-%d", jours, annees) ; break;
		case 11 : printf("votre date est  %d-November-%d", jours, annees) ; break;
		case 12 : printf("votre date est  %d-Decembre-%d", jours, annees) ; break;
		default : printf("Donner une mois enrtre 1 et 12 "); scanf("%d", &mois); goto again;
	}
 	

return 0;
}
