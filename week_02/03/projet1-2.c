#include <stdio.h>


int main (){
	puts("table de multiplication");
	int x,r ;
	int i = 0;
	scanf("%d",&x);
	
	while (i<10){
		
	++i;
	r= x * i ;
	
	printf("%d*%d = %d\n",x,i,r);
	
	}
	
	
	return 0;
}
