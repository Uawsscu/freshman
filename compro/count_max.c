#include<stdio.h>
#include<limits.h>
int MAX=INT_MIN;
int sum=0;
int countMax(int*A,int N){
for(int i=0;i<N;i++){
        if(A[i]>MAX) MAX=A[i];
    }
    for(int i=0;i<N;i++){
        if(A[i]==MAX) sum++;
    }
    return sum;
}

void main() {
    int N;

    scanf("%d",&N);
    int A[N];
    for (int i=0; i<N; i++) {
        scanf("%d",&A[i]);
    }

 countMax(A,N);
    printf("%d",sum);
}
