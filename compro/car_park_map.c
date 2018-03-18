#include<stdio.h>
char A[100][100];
void main() {
    int K,R,C;
    int r,c;

    scanf("%d %d %d",&R,&C,&K);

    for (int row=1; row<=R; row++) {
        for(int col=1; col<=C; col++) {
            A[row][col]='_';
        }
    }
    for(int i=1; i<=K; i++) {

        scanf("%d %d",&r,&c);
        A[r][c]='x';
    }
    for (int row=1; row<=R; row++) {
        for(int col=1; col<=C; col++) {
            printf("%c",A[row][col]);
        }
        printf("\n");
    }

}
