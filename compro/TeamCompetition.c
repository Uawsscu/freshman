#include<stdio.h>
void main() {
    int N;
    int A[1000],B[1000];
    int sumA=0;
    int sumB=0;
    scanf("%d",&N);
    for(int i=0; i<N; i++) {
        scanf("%d",&A[i]);
    }
    for(int i=0; i<N; i++) {
        scanf("%d",&B[i]);
    }
    for (int i=0; i<N; i++) {
        if (A[i]>B[i]) {
            sumA=sumA+2;
        } else if (A[i]<B[i]) {
            sumB=sumB+2;

        } else {
            sumA=sumA+1;
sumB=sumB+1;
        }

    }
    if (sumA>sumB) {
        printf("Team 1 wins\n");
        printf("Score %d to %d",sumA,sumB);
    } else if (sumB>sumA) {
        printf("Team 2 wins\n");
        printf("Score %d to %d",sumB,sumA);
    }
     else if (sumB==sumA) {
        printf("Draw game\n");
        printf("Score %d to %d",sumB,sumA);
    }
}



