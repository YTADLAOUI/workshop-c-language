#include <stdio.h>
#include <stdbool.h>
int divededby(int n ,int b){

	return n/b;
	
}




bool  Premier(int n ){
	int i,l=0;
	for(i=2;i<n;i++){
		if (n%i==0){
			l++;
			
			break;
			 }
			
		}
			
		if (l==0)
		   return true;
		else 
		   return false;
		}
		
		
int main (){
	int n,a;
	printf(" a = ");
	scanf("%d",&a);
	printf(" n = ");
	scanf("%d",&n);
	int div = divededby(a,n);
	
	

	if(Premier(div))
	  printf("premier");
	else
	  printf("no premiere");
	  
	return 0;
	}	

