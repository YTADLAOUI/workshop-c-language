#include <stdio.h>
#include <math.h>
int main (){
	printf("Distance entre deux points");
	float x1,x2,y1,y2,MN;
	printf ("entre les determitation des point x1 y1 x2 y2 ");
	scanf ("%f%f%f%f",&x1,&y1,&x2,&y2);
	MN =sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("la distance de MN est %.2f",MN );
	
	
	
	
	return 0;
}
