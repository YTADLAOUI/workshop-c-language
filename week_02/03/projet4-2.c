#include <stdio.h>

int main (){
int i,a,sum=0,max=0;

for (i=1;i<=5;i++){
        printf("entre");
        scanf("%d",&a);

if (a<100 && a%10==0 )
     sum = sum + a;

    if (a>max  )

    max=a;


}
printf("sum:%d",sum);
printf("max:%d",max);


return 0;
}

