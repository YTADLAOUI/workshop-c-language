#include <stdio.h>
#include <stdlib.h>

int main(){
    int Age;
    long int telephone;
    char Nom[50], prenom[50] ,Sexe [6]; 
    printf ("Programme pour Affichage Informations\n");
    printf ("veuiller entre votre Nom: ");
    scanf  ("%s",&Nom);
    printf ("veuiller entre votre Prenom: "); 
    scanf  ("%s",&prenom);
    printf ("veuiller entre votre Age: ");
    scanf  ("%d",&Age);
    printf ("veuiller entre votre Sexe 'Homme ou femme': ");
    scanf  ("%s",&Sexe);
    printf ("veuiller entre votre numero de telephone: +212");
    scanf  ("%ld",&telephone);
    printf ("votre Nom est: %s \n votre Prenom est: %s\nvotre Age est: %d\n votre sexe est: %s \nvotre numero de telephone est: %ld",Nom, prenom,Age,Sexe,telephone);
    
    
    return 0;
}


    
    
    
    
    
    
    

