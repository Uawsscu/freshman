#include<stdio.h>
#include<limits.h>
int MAX=INT_MIN;
int MIN=INT_MAX;
void main()
{
    int N;
    int sum=0;

    scanf("%d",&N);
    int A[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }

    for(int i=0; i<N; i++)
    {
        if(A[i]>MAX) MAX=A[i];
        if(A[i]<MIN) MIN=A[i];
        sum=sum+A[i];

    }
    if(N>3) sum=sum-MAX-MIN;
    printf("%d",sum);
}


