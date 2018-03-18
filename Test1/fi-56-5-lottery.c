#include<stdio.h>
int A[5000],B[20];
void main()
{
    int N,K,x;
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&x);
        A[i]=x%1000;
    }

    scanf("%d",&K);
    for(int j=0; j<K; j++)
    {
        scanf("%d",&B[j]);
    }
    int sum=0;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<K; j++)
        {
            if(A[i]==B[j]) sum++;
        }
    }
    printf("%d",sum);
}
