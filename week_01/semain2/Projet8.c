#include <stdio.h>

int main (){
    float x;
    note:
puts("entre la moyan d'eleve");


scanf("%f",&x);

 if (x<10)
    puts("eleve est recale");
 else if (x>=10 && x<12)
    puts("la mention d'eleve est passable");
 else if ( x>=12 && x<14)
 puts (" eleve obtient la mention assez bien");
 else if (x>=14 && x<16)
puts (" eleve obtient la mention  bien");
 else if (x>=16 && x<=20)
 puts (" eleve obtient la mention tres bien");
 else
    goto note;

    goto note;


return 0;
}
