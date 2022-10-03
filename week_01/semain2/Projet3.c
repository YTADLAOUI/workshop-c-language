#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main (){

puts("Ecrivez un programme C pour calculer la somme de deux valeurs entières données. Si les deux valeurs sont identiques, il renvoie le triple de leur somme.");
int a,b,c;
scanf("%d%d",&a,&b);
if(a==b){
  c=(a+b)*3;
printf("%d",c);
}else{
c=a+b;
printf("%d",c);
}





return 0;
}
