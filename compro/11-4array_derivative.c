#include<stdio.h>

void derivative(int*A,int*AOutput,const int N) {
    for (int i=0; i<N; i++) {
        if (i==0) AOutput[i]=0;
        else AOutput[i]=A[i]-A[i-1];
    }
}

int main() {
    int AOutput[100];
    int A[100];
    int N;

    scanf("%d",&N);
    for (int i=0; i<N; i++) {
        scanf("%d",&A[i]);
    }

    derivative(A,AOutput,N);
    for(int i=0; i<N; i++) {
        printf("%d ",AOutput[i]);
    }
}
