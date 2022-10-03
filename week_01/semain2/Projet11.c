#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include<time.h>

int main(){

int a;
   srand(time(NULL));
   a = rand();
   a = a%7;
   switch (a)
   {
   case 0:
    printf("lundi");
    break;
    case 1:
    printf("mardi");
    break;
    case 2:
    printf("mercredi");
    break;
    case 3:
    printf("joudi");
    break;
    case 4:
    printf("vendredi");
    break;
    case 6:
    printf("samedi");
    break;

   case 7:
    printf("dimanch");
    break;
}





return 0;
}

