#include<stdio.h>
int main (){
	int U1=1, U0=0,n,Un,i; 
	printf("entre number");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		Un=U1+U0;
		U0=U1;
		U1=Un;
printf("%d\n",Un);
	}
	
	
}
