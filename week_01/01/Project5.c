#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    printf("programme qui calcule et affichage résultat en format décimal");
       int r;
       float s,c,m,d,a,b;
       printf("Entre la valeur de a et b:");
       scanf("%f%f",&a,&b);
       s = a+b;
       c = a-b;
       m = a*b;
       d = a/b;
       r = (int) a % (int) b;
       printf("s = %f\nc = %f\nm = %f\nd = %f\nr =%d",s,c,m,d,r);
       
   

	return 0;
}
