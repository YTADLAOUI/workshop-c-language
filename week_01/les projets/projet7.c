#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    printf("programme qui calcule et affichage résultat en format décimal");
       int a,b,r;
       float s,c,m,d;
       printf("Entre la valeur de a et b:");
       scanf("%d%d",&a,&b);
       s = a+b;
       c = a-b;
       m = a*b;
       d = a/b;
       r = a%b;
       printf("s = %d\nc = %f\nm = %f\nd = %f\nr =%f",s,c,m,d,r);
       
   

	return 0;
}
