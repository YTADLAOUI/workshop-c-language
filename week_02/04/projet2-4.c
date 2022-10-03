#include <stdio.h>

int  echanger(){
	int a , b ,c,n,t ;
	printf("entre la valeur de a et b ");
	scanf("%d%d",&n,&t);
	a=n;
	b=t;
	c=a;
	a=b;
	b=c;
	printf ("echange a =%d , b =%d",a,b);
	return 0;
}
int main (){
    echanger();
	return  0;
}

