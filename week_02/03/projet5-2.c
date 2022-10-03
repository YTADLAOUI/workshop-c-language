#include <stdio.h>

int main (){
int i,numbre,nbr_inve=0;
scanf ("%d",&numbre);
while (numbre!=0){

  nbr_inve = nbr_inve*10 ;
  nbr_inve = nbr_inve + numbre%10 ;

   numbre=numbre/10;


    }
    printf("%d",nbr_inve);


return 0;
}
