#include <stdio.h>
#include <stdlib.h>
int main (){
puts ("Ecrivez un programme en C qui vérifie si un caractère saisi par l'utilisateur est une voyelle ou non en utilisant l'instruction switch case.");
char c;
scanf ("%c",&c);
if (c>='A' && c<='Z'){
    c += 'a' - 'A';
    printf("%c est ",c);
}
switch(c){
case'a' : case 'e' : case 'i':
case 'o' : case 'u' : case 'y':
printf("voyelle");
break;
default :
    printf("n'est pas voyelle");
    break;



}






return 0;
}
