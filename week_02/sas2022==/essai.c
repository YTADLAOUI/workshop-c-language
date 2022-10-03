

#include<stdio.h>
#include <string.h>


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
   int nombresDesProduits = 0;

// Ajouter plusieurs Produits
void AjouterPlusieursProduites()
{
  int i, nombreProduites, choix;
  system("cls");
  printf("\n");
  printf("-------------------------------------\n");
  printf("| Ajouter plusieurs produits  |\n");
  printf("-------------------------------------\n\n\n");
  printf("Veuillez entrer nombre des produits : ");
  scanf("%d", &nombreProduites);
  printf("\n\n");

  for (i = 0; i < nombreProduites; i++)
  {
    printf("Donnez les informations du produit %d : \n", nombresDesProduits + 1);
    printf("Le nom : ");
    scanf("%s", Produits[nombresDesProduits].nom);
    printf("La quantite : ");
    scanf("%d", &Produits[nombresDesProduits].quantite);
    printf("Le code : ");
    scanf("%s", Produits[nombresDesProduits].code);
    printf("Le prix HT: ");
    scanf("%f", &Produits[nombresDesProduits].prix);
    printf("\n");
    nombresDesProduits++;
  }

  system("cls");
  printf("\n");
  printf("Les produits ajouter ete cree avec succes..\n");
  printf("-------------------------------------------------");
  printf("\n\n");

  for (i = 0; i < nombreProduites; i++)
  {
  printf("Le nom    : %s\n", Produits[i].nom);
  printf("La quantite   : %d\n", Produits[i].quantite);
  printf("Le code    : %s\n", Produits[i].code);
  printf("Le prix  : %.2f Dhs HT\n", Produits[i].prix);
    printf("\n\n");
  }
  printf("[1] - affichage\n");
  printf("[2] - Quitter\n\n");
  printf("Votre choix : ");
  scanf("%d", &choix);

  if (choix == 1)
  {
    RechercheParQuantite ();
  }
}
 // Rechercher les produits Par quantite
   void RechercheParQuantite ()
   {
       int i,LaQuantite,choix;
cc:
       system ("cls");


       printf("La quantite :  ");
       scanf("%d",&LaQuantite);
       for (i=0;i<nombresDesProduits;i++)
        {
            if (Produits[i].quantite==LaQuantite){
      printf("Le nom    : %s\n", Produits[i].nom);
      printf("La quantite   : %d\n", Produits[i].quantite);
      printf("Le code    : %s\n", Produits[i].code);
      printf("Le prix  : %.2f Dhs HT\n", Produits[i].prix);
      }else{
        printf ("le produit n'existe  pas");
        printf("\n\n\n");
        }

  printf("[1] - Affichage\n");
  printf("[2] - Quitter\n\n");
  printf("Votre choix : ");
  scanf("%d", &choix);
  if (choix == 1)
  {
    goto cc;
  }
       }

   }





   int main ()
   {
       AjouterPlusieursProduites();

   }
