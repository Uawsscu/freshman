#include <stdio.h>

int main () {
    int x,y ;
    int bottle ;
    int i = 1 ;
    while (i<=7) {
        scanf ("%d %d" ,&x,&y);
    if (x/250<y/15) {
    bottle = x/250 ;
    } else {
        bottle = y/15 ;
    }

    printf ("%d ",bottle) ;
    if (x-(bottle*250)!=0) {
            printf ("water") ;
    }
    printf ("\n") ;
    i++ ;
}
}
