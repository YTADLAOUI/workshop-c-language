#include <stdio.h>
#include <math.h>


int main (){
	float a,b,c,A,B,C;
	a=-15;
	b=-10;
	do {
		c=((a+b)/2);
		A=pow(a,3)+12*pow(a,2)+1;
		B=pow(b,3)+12*pow(b,2)+1;
		C=pow(c,3)+12*pow(c,2)+1;
		if(A*C<0) 
		b=c;
		if(B*C<0)
       a=c;
	}while (b-a>0.00001);
	printf("%f  %f",a,b);
	return 0;
}
