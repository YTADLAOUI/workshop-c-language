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

// Ajouter un seul produit
void ajouterUnProduit()
{
    int choix;
cc :
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
  printf("Le prix : ");
  scanf("%f", &Produits[nombresDesProduits].prix);

  system("cls");
  printf("\n\n");
  printf("Le compte du client a ete cree avec succes.\n");
  printf("-------------------------------------------\n\n");
  printf("Nom    : %s\n", Produits[nombresDesProduits].nom);
  printf("La quantite : %d\n", Produits[nombresDesProduits].quantite);
  printf("code    : %s\n", Produits[nombresDesProduits].code);
  printf("prix  : %.2f Dhs\n", Produits[nombresDesProduits].prix);
  printf("\n\n");
  nombresDesProduits++;
  printf("[1] - Menu principal\n");
  printf("[2] - Quitter\n\n");
  printf("Votre choix : ");
  scanf("%d", &choix);

  if (choix == 1)
  {
    goto cc;
  }
}
int main(){


    ajouterUnProduit();

}
