#include <stdio.h>
#include <math.h>
void main(){
    int x,c;
    scanf ("%d",&x);
    c = x/2;
    for (int row = 0 ; row < x ; row++){
    for (int colum = 0 ; colum < x ; colum++){
    if(abs(c-row)+abs(c-colum)<=c){
    printf("*");
    }
    else
    printf(" ");
}
    printf ("\n");
}
    return 0;
}

