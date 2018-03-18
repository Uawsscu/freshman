#include<stdio.h>
int A[2500000];
void main()
{
    int N,K;
    int sum=0;
    scanf("%d",&N);

    for(int i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d",&K);
    for (int i=0; i<N; i++)
    {
        if (A[i]==K)
        {
            printf("%d ",i+1);
            sum++;
        }
    }
    if(sum==0)
    {
        printf("0");
    }
    return 0;
}
