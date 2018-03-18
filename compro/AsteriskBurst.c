#include<stdio.h>
void main() {
    int R,C;
    scanf("%d %d",&R,&C);

    for (int row=0; row<R; row++) {
        for (int colum=0; colum<C ; colum++) {
            printf("*");
        }
        printf ("\n");
    }
    return 0 ;

}
