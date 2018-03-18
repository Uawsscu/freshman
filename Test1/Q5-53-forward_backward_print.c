#include<stdio.h>
int A[5000];
void main()
{

    int N,K;

    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d",&K);


    if(K>0)
    {
        for(int i=0; i<N; i++)
        {

            printf("%d ",A[i]+K);
        }
    }

    else if(K<0)
    {
        for(int i=N-1; i>=0; i--)
        {
            printf("%d ",A[i]+K);
        }
    }
}
