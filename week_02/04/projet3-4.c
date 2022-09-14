#include <stdio.h>
#include <stdbool.h>
bool  Premier(int n){
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
	int n;
	printf("entrer un nombre :");
	scanf("%d",&n);
	if(Premier(n))
	  printf("premier");
	else
	  printf("no premiere");
	  
	return 0;
	}	

	
	


