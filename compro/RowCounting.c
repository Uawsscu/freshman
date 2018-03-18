#include<stdio.h>
void main(){
 int R,C;
 int k=1;
    scanf("%d %d",&R,&C);

    for (int row=0; row<R; row++) {
        for (int colum=0; colum<C ; colum++) {
            printf("%d ",k);
            k++;
        }
printf("\n");
    }
    return 0 ;

}
