#include <stdio.h>
#include <stdlib.h>
#include<stdlib.h>
int main (){
puts("Écrivez un programme C qui permet de calculer les solutions possible d’une équation 2ème degré.");
float x,x1,x2,a,b,c,d;
printf("ax^2+bx+c entres les valeurs des a&b&c: ");
scanf("%f%f%f",&a,&b,&c);
d = pow(b,2)-(4*a*c);
if(d==0){
    x1=(-b)/(2*a);
    printf("x accepté 1 solution est %f",x1);
}else if (d>0){
     x1=((-b)+sqrt (d))/(2*a);
     x2=((-b)-sqrt (d))/(2*a);
     printf("x est accepté 2 solution possible c'est 'x1' =%.2f 'x2'= %.2f ",x1,x2);
     }else if (d<0)
     printf("aucan solution possible");









return 0;
}
