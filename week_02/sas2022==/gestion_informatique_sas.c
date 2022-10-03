#include<stdio.h>
#include<string.h>
#include<stdbool.h>

// La structure Produit
typedef struct
{
  char nom[10];
  char code[10];
  int  quantite;
  float prix;
  
}prd;

// Tableau des structures Produits
   prd Produits[50];
   prd achter[50];
   int nombresDesProduits = 0;
   int nombresDesAcheter = 0;
   
//produit déja existe 
bool produitExiste(char code[10]){

	int i;
	for(i=0;i<nombresDesProduits;i++){
		if(strcmp(Produits[i].code,code[10])==0)
		return true;
			else
	  return false;
}
   
   
   
// Ajouter un seul produit

void ajouterUnProduit()
{
  int choix;

  system("cls");
  printf("\n");
  printf("----------------------------------\n");
  printf("| Ajouter un seul produit  |\n");
  printf("----------------------------------\n\n\n");
  printf("Donnez les informations du Produit %d :\n\n", nombresDesProduits + 1);

  printf("Le nom : ");
  scanf("%s", Produits[nombresDesProduits].nom);
  printf("La quantite : ");
  scanf("%d", &Produits[nombresDesProduits].quantite);
  printf("Le code : ");
  scanf("%s", Produits[nombresDesProduits].code);
  printf("Le prix HT : ");
  scanf("%f", &Produits[nombresDesProduits].prix);

  system("cls");
  printf("\n\n");
  printf("Le produit ajouter ete cree avec succes.\n");
  printf("-------------------------------------------\n\n");
  printf("Le nom        : %s\n",      Produits[nombresDesProduits].nom);
  printf("La quantite   : %d\n",  Produits[nombresDesProduits].quantite);
  printf("Le code       : %s\n",     Produits[nombresDesProduits].code);
  printf("Le prix       : %.2f Dhs HT\n", Produits[nombresDesProduits].prix);
  printf("\n\n");

  nombresDesProduits++;
  printf("[1] - Menu principal\n");
  printf("[2] - Quitter\n\n");
  printf("Votre choix : ");
  scanf("%d", &choix);
  if (choix == 1)
  {
    Menu();
  }
}
// Ajouter plusieurs Produits
void AjouterPlusieursProduites()
{
  int i, nombreProduites, choix ;
  char code[10];
  system("cls");
  printf("\n");
  printf("-------------------------------------\n");
  printf("| Ajouter plusieurs produits  |\n");
  printf("-------------------------------------\n\n\n");
  printf("Veuillez entrer nombre des produits disponibles : ");
  scanf("%d", &nombreProduites);
  printf("\n\n");

  for (i = 0; i < nombreProduites; i++)
  {
  	
  	rp:
  	printf("Le code : ");
  	scanf("%s",code[10]);
  	if(!produitExiste(char code[10])){
	  
    strcpy(Produits[nombresDesProduits].code,code);
    printf("Donnez les informations du produit %d : \n", nombresDesProduits + 1);
    printf("Le nom : ");
    scanf("%s", Produits[nombresDesProduits].nom);
    printf("La quantite : ");
    scanf("%d", &Produits[nombresDesProduits].quantite);
    printf("Le prix HT: ");
    scanf("%f", &Produits[nombresDesProduits].prix);
    printf("\n");
     nombresDesProduits++;}else {
     	puts("produit deja existe soit alliment ou entre autre code");
     	sleep(2);
     	goto rp;
	 }
  }

  system("cls");
  printf("\n");
  printf("Les produits ajouter ete cree avec succes.\n");
  printf("-------------------------------------------------");
  printf("\n\n");

  for (i = 0; i < nombreProduites; i++)
  {
    printf("Le nom        : %s\n", Produits[i].nom);
    printf("La quantite   : %d\n", Produits[i].quantite);
    printf("Le code       : %s\n", Produits[i].code);
    printf("Le prix       : %.2f Dhs HT\n", Produits[i].prix);
    printf("\n\n\n");

  }

  printf("[1] - Menu principal\n");
  printf("[2] - Quitter\n\n");
  printf("Votre choix : ");
  scanf("%d", &choix);
  if (choix == 1)
  {
    Menu();
  }
}
//vent produit recherch par code
venteProduits()
{
	int i,choix,k=0 ;
	   char LeCode[10];
          system ("cls");

       printf("Donnez les informations du Produit vendu %d :\n\n", nombresDesAcheter + 1);

       printf("veuillez entre Le Code :  ");
       scanf("%s",&LeCode);
       printf("veuillez entre la quantite vendu ");
       scanf("%d",&achter[nombresDesAcheter].quantite);
    for(i=0;i<nombresDesProduits;i++)
    {
        if(strcmp(Produits[i].code,LeCode)==0){
      printf("Le nom                 : %s\n", Produits[i].nom);
      printf("La quantite precedant  : %d\n", Produits[i].quantite);
      printf("La quantite actule     : %d\n", Produits[i].quantite -= achter[nombresDesAcheter].quantite);
      printf("Le code                : %s\n", Produits[i].code);
      printf("Le prix   HT           : %.2f Dhs \n", Produits[i].prix);
      printf("Le prix   TTC           : %.2f Dhs \n", Produits[i].prix+(Produits[i].prix)*0.15);
      achter[nombresDesAcheter].prix= (Produits[i].prix+((Produits[i].prix)*0.15))*achter[nombresDesAcheter].quantite;
      printf("le vent de prduit TTC  : %.2f dhs ",achter[nombresDesAcheter].prix);
     
      k++;
      nombresDesAcheter++;
      }
	    }
	  if(k==0){
        printf ("le produit n'existe  pas");
        printf("\n\n\n");
        }


  printf("[1] - Operations\n");
  printf("[2] - Quitter\n\n");
  printf("Votre choix : ");
  scanf("%d", &choix);
  if (choix == 1)
  {
    Operations();
  }
}
//Alimenter le stock recherch par code
AlimenterStock()
{
	int i,choix,Qte,k=0 ;
	   char LeCode[10];
          system ("cls");

       printf("veuillez entre Le Code :  ");
       scanf("%s",&LeCode);
       printf("veuillez entre la quantite  ");
       scanf("%d",&Qte);
    for(i=0;i<nombresDesProduits;i++)
    {
        if(strcmp(Produits[i].code,LeCode)==0){
      printf("Le nom                 : %s\n", Produits[i].nom);
      printf("La quantite precedant  : %d\n", Produits[i].quantite);
      printf("La quantite actule     : %d\n", Produits[i].quantite+=Qte);
      printf("Le code                : %s\n", Produits[i].code);
      printf("Le prix                : %.2f Dhs HT\n", Produits[i].prix);
      k++;
      
      }
	    }
	  if(k==0){
        printf ("le produit n'existe  pas");
        printf("\n\n\n");
        } 


  printf("[1] - Affichage\n");
  printf("[2] - Quitter\n\n");
  printf("Votre choix : ");
  scanf("%d", &choix);
  if (choix == 1)
  {
    Operations();
  }
}
//Supprimer les produits par code.
    void SupprimerProduits ()
  {
   int i,j,choix,k=0;
   char LeCode[10];
          system ("cls");

       printf("veuillez entre Le Code :  ");
       scanf("%s",&LeCode);
    for(i=0;i<nombresDesProduits;i++)
    {
        if(strcmp(Produits[i].code,LeCode)==0){
        	for(j=i;j<nombresDesProduits;j++){
			
        	      Produits[i]=Produits[i+1];
                  k++;
           }
           nombresDesProduits --;
         }
	 }
	  if(k==0){
        printf ("le produit n'existe  pas");
        printf("\n\n\n");
        } 
        for (i=0;i<nombresDesProduits;i++){
      printf("Le nom        : %s\n", Produits[i].nom);
      printf("La quantite   : %d\n", Produits[i].quantite);
      printf("Le code       : %s\n", Produits[i].code);
      printf("Le prix       : %.2f Dhs HT\n", Produits[i].prix);
      printf("Le prix       : %.2f Dhs TTC\n", Produits[i].prix+((Produits[i].prix)*0.15));
      printf("\n\n");
		}


  printf("[1] - Operation\n");
  printf("[2] - Quitter\n\n");
  printf("Votre choix : ");
  scanf("%d", &choix);
  if (choix == 1)
  {
    Operations();
  }
}


			 

// les statistiques
    void statistiqueVente()
    {
    	//total des prix des produits vendus
    	float total =0;
		float moyenne;
    	int i,y,t,choix;
    	prd bubble;
    	for(i=0;i<nombresDesAcheter;i++){
    		total += achter[i].prix;
		}
		printf("le total des produits vendus :  %.2f\n\n",total);
		//moyenne des prix des produits vendus 
		for(i=0;i<nombresDesAcheter;i++){
			moyenne = total/i;
			printf("moyenne des prix des produits : %.2f \n\n",moyenne);	
		}
		//Afficher le Max des prix des produits vendus 
	

        for(y=0;y<(nombresDesAcheter);y++){
            for(t=0;t<nombresDesAcheter-1;t++ ){

                  if (achter[t].prix<achter[t+1].prix){
                      bubble=achter[t];
                      achter[t]=achter[t+1];
                      achter[t+1]=bubble;
                                     }
                                         }
                                             }
      
      printf("Le prix       : %.2f Dhs HT\n", achter[0].prix);
      printf("Le prix       : %.2f Dhs TTC\n", achter[0].prix+((achter[0].prix)*0.15));
      printf("\n\n");
                       
		//Afficher le Min des prix des produits vendus
		
        for(y=0;y<(nombresDesAcheter);y++){
            for(t=0;t<nombresDesAcheter-1;t++ ){

                  if (achter[t].prix>achter[t+1].prix){
                      bubble=achter[t];
                      achter[t]=achter[t+1];
                      achter[t+1]=bubble;
                                     }
                                         }
                                             }
      for(i=0;i<nombresDesAcheter;i++)
	  
      printf("Le prix       : %.2f Dhs HT\n", achter[0].prix);
      printf("Le prix       : %.2f Dhs TTC\n", achter[0].prix+((achter[0].prix)*0.15));
      printf("\n\n\n");
	  
  printf("[1] - Operation\n");
  printf("[2] - Quitter\n\n");
  printf("Votre choix : ");
  scanf("%d", &choix);
  if (choix == 1)
  {
    Operations();
  }
}
	
// les Operations sur produit
 void Operations()
{
	
	 int choix;
     system ("cls");
     printf("\n");

  printf("les operations sur les Produits :\n");
  printf("----------------------------\n\n");
  printf("[1] - vente des produits .\n");
  printf("[2] - Alimenter le stock recherch par code .\n");
  printf("[3] - Supprimer les produits par code.\n");
  printf("[4] - Statistique de vente.\n");
  printf("[5] - Menu.\n");
  printf("Votre choix : ");
  scanf("%d", &choix);

     switch (choix)
     {
     	case 1 :  
     	  venteProduits();
     	  break;
           	case 2 : 
               AlimenterStock();
     	       break;
               	case 3 :
	                SupprimerProduits();
                break;
	                   case 4 :
	                        statistiqueVente();
	                          break;
	      
	    default :
	      Menu();
     } 
	
  }

//l'ordre alphabetique croissant du nom
void CroissantDuNom()
{

    int choix,i,y,t;
  prd bubble;
  system("cls");
  printf("\n");

  	for(y=0; y < nombresDesProduits;y++){
  		for(t=0 ;t<nombresDesProduits-1;t++){
  			if(strcmp(Produits[t].nom,Produits[t+1].nom) > 0)
			  {
  				bubble = Produits[t];
  				Produits[t] = Produits[t+1];
  				Produits[t+1] = bubble;
			  }
		  }
	  }

      for(i=0;i<nombresDesProduits;i++){
      printf("Le nom          : %s\n", Produits[i].nom);
      printf("La quantite     : %d\n", Produits[i].quantite);
      printf("Le code         : %s\n", Produits[i].code);
      printf("Le prix HT      : %.2f Dhs \n", Produits[i].prix);
      printf("Le prix  TTC    : %.2f Dhs \n", Produits[i].prix+((Produits[i].prix)*0.15));
      printf("\n\n");
              }
  printf("[1] - Affichage\n");
  printf("[2] - Quitter\n\n");
  printf("Votre choix : ");
  scanf("%d", &choix);
  if (choix == 1)
  {
    Affichage();
  }
  }

 // l'ordre decroissant du prix
  void DecroissantDuPrix(){
       int choix,i,y,t;
       prd bubble;
       system("cls");
       printf("\n");

        for(y=0;y<(nombresDesProduits);y++){
            for(t=0;t<nombresDesProduits-1;t++ ){

                  if (Produits[t].prix<Produits[t+1].prix){
                      bubble=Produits[t];
                      Produits[t]=Produits[t+1];
                      Produits[t+1]=bubble;
                                     }
                                         }
                                             }
      for(i=0;i<nombresDesProduits;i++){
      printf("Le nom        : %s\n", Produits[i].nom);
      printf("La quantite   : %d\n", Produits[i].quantite);
      printf("Le code       : %s\n", Produits[i].code);
      printf("Le prix       : %.2f Dhs HT\n", Produits[i].prix);
      printf("Le prix       : %.2f Dhs TTC\n", Produits[i].prix+((Produits[i].prix)*0.15));
      printf("\n\n");
              }
  printf("[1] - Affichage\n");
  printf("[2] - Quitter\n\n");
  printf("Votre choix : ");
  scanf("%d", &choix);
  if (choix == 1)
  {
    Affichage();
  }
   }
 // Rechercher les produits Par code
  void RechercheParCode ()
  {
   int i,choix,k=0;
   char LeCode[10];
          system ("cls");

       printf("veuillez entre Le Code :  ");
       scanf("%s",&LeCode);
    for(i=0;i<nombresDesProduits;i++)
    {
        if(strcmp(Produits[i].code,LeCode)==0){
      printf("Le nom        : %s\n", Produits[i].nom);
      printf("La quantite   : %d\n", Produits[i].quantite);
      printf("Le code       : %s\n", Produits[i].code);
      printf("Le prix       : %.2f Dhs HT\n", Produits[i].prix);
      k++;
      }
	    }
	  if(k==0){
        printf ("le produit n'existe  pas");
        printf("\n\n\n");
        }


  printf("[1] - Affichage\n");
  printf("[2] - Quitter\n\n");
  printf("Votre choix : ");
  scanf("%d", &choix);
  if (choix == 1)
  {
    Affichage();
  }
    
      }



 // Rechercher les produits Par quantite
   void RechercheParQuantite ()
   {
       int i,LaQuantite,choix,k=0;

       system ("cls");
      printf("Rechercher les produits Par quantite \n");
      printf("------------------\n\n\n");

       printf("La quantite :  ");
       scanf("%d",&LaQuantite);
       for (i=0;i<nombresDesProduits;i++)
        {
            if (Produits[i].quantite==LaQuantite){
      printf("Le nom        : %s\n", Produits[i].nom);
      printf("La quantite   : %d\n", Produits[i].quantite);
      printf("Le code       : %s\n", Produits[i].code);
      printf("Le prix       : %.2f Dhs HT\n", Produits[i].prix);
      k++;
      }
	  }if(k==0){
        printf ("le produit n'existe  pas");
        printf("\n\n\n");
        }

  printf("[1] - Affichage\n");
  printf("[2] - Quitter\n\n");
  printf("Votre choix : ");
  scanf("%d", &choix);
  if (choix == 1)
  {
    Affichage();
   }
     }
 //Etat du stock
 void EtatDuStock()
 {
    int i,choix;
    system("cls");
      printf("Etat du stock \n");
      printf("------------------\n\n");
    
    for(i=0;i<nombresDesProduits;i++){
    	
    	if(Produits[i].quantite<3){
      printf("Le nom        : %s\n", Produits[i].nom);
      printf("La quantite   : %d\n", Produits[i].quantite);
      printf("Le code       : %s\n", Produits[i].code);
      printf("Le prix       : %.2f Dhs HT\n", Produits[i].prix);
      printf("Le prix       : %.2f Dhs TTC\n", Produits[i].prix+((Produits[i].prix)*0.15));
      printf("\n\n");
              }

		}
  printf("[1] - Affichage\n");
  printf("[2] - Quitter\n\n");
  printf("Votre choix : ");
  scanf("%d", &choix);
  if (choix == 1)
  {
    Affichage();
  }
	}
 // Affichage

 void Affichage()
 {
     int choix;
     system ("cls");
     printf("\n");

  printf("List des Produits :\n");
  printf("----------------------------\n\n");
  printf("[1] - les produits selon l'ordre alphabetique  croissant du nom.\n");
  printf("[2] - les produits selon l'ordre  decroissant du prix.\n");
  printf("[3] - Rechercher les produits Par code .\n");
  printf("[4] - Rechercher les produits Par quantite .\n");
  printf("[5] - Etat du stock\n\n");
  printf("[6] - Menu.\n");
  printf("Votre choix : ");
  scanf("%d", &choix);

     switch (choix)
     {
case 1 :
     CroissantDuNom();
    break;
case 2 :
    DecroissantDuPrix();
    break;
case 3 :
    RechercheParCode ();

    break;
case 4 :
    RechercheParQuantite ();
  break;
case 5 :
	EtatDuStock();

    break;
     default:
    Menu();
  }

     }

// Menu Principal
void Menu(){
  int choix;

  system("cls");
  printf("\n\n");
  printf("========== Gestion de Pharmacie  ==========\n\n\n");
  printf("------------------\n");
  printf("| Menu Principal |\n");
  printf("------------------\n\n");
  printf("[1] - ajouter un produit \n");
  printf("[2] - Ajouter plusieurs produites\n");
  printf("[3] - Operations\n");
  printf("[4] - Affichage \n");
  printf("[5] - Quitter\n\n");
  printf("Veuillez saisir votre choix : ");
  scanf("%d", &choix);
  printf("\n\n\n");

  switch (choix)
  {
  case 1:
    ajouterUnProduit();
    break;
  case 2:
    AjouterPlusieursProduites();
    break;
  case 3:
    Operations();
    break;
  case 4:
    Affichage();
    break;
  default:
    system("cls");
    printf("\n\n");
    printf("-----------------------------------------------------------\n");
    printf("| Vous avez quitter l'application, merci pour votre visit |\n");
    printf("-----------------------------------------------------------\n\n\n");
  }
}

int main(){
    Menu();
    return 0;
}
