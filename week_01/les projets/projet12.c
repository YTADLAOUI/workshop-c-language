#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int num, rest, sorti,numinv;
	printf("veuillez entre le 3 num:");
	scanf("%d",&num);
	rest = num%10;
	sorti = (num/100);
	num = (num/10)%10;
	numinv = rest*100+num*10+sorti;
	printf ("la invers est %d",numinv);
	
	return 0;
}
