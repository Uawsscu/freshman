#include<stdio.h>
void main() {
    int R,C;
    scanf("%d %d",&R,&C);
    int N[R][C];
    for (int row=0; row<R; row++) {
        for (int col=0; col<C; col++) {
            scanf("%d",&N[row][col]);
        }
    }
    for (int col=0; col<C; col++) {
        for (int row=0; row<R; row++) {
            printf("%d ",N[row][col]);
        }
        printf("\n");
    }
}
