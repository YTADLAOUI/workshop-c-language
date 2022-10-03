#include <stdio.h>

int main (){
int i,numbre,res=0;
scanf ("%d",&numbre);
for(i=1;i<=numbre;i++){


if(numbre%i==0){

      res++;
    
     } 

  }
if (res==2){
       printf ("premier");

       }else
       printf("non premier");


return 0;
}
