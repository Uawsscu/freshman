#include<stdio.h>
void main() {
    int N,R,C;
    int super=0,sum=0;
    int M[100][100];
    scanf("%d",&N);
    for (int row=0; row<N; row++) {
        for (int col=0; col<N; col++) {
            scanf("%d",&M[row][col]);
        }
    }
    for (int row=0; row<N; row++) {
        for (int col=0; col<row; col++) {
            int A=M[row][col];
            int B=M[col][row];
            sum=A-B;
            if(sum<0) {
                sum=-1*sum;
            }
            super=super+sum;
        }
    }
    printf("%d",super);
}
