#include <stdio.h>


int main(){

char c;
    printf("Donnez un caractere : ");
    scanf("%c",&c);
    if(c>='a' && c<='z')
        printf("%c est une alphabet en minuscule.\n",c);
     if(c>='A' && c<='Z')
        printf("%c est une alphabet en majuscule.\n",c);
        if(!(c>='a' && c<='z') && !(c>='A' && c<='Z'))
        printf("%c n'est pas une alphabet.\n",c);




return 0;
}
