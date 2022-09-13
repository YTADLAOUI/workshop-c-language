#include <stdio.h>


int main (){
	int i,n,l=0,j;
	printf("entre number");
	scanf("%d",&n);
	for (i=2;i<n;i++){
		l=0;
		for(j=2;j<i;j++){
			if (i%j ==0){
				l=1;
			}
		}if(l==0) printf("%d \n",i);
	}
	
	
}
