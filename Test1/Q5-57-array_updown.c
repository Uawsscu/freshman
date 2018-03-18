#include<stdio.h>
int A[1000][1000];
void main()
{
    int sum1=0;
    int sum2=0;
    int N;
    scanf("%d",&N);
    for(int r=0; r<N; r++)
    {
        for(int c=0; c<N; c++)
        {
            scanf("%d",&A[r][c]);
        }
    }

    for(int r=0; r<N-1; r++)
    {
        for(int c=r+1; c<N; c++)
        {
            sum1=sum1+A[r][c];
        }
    }


    for(int r=1; r<N; r++)
    {
        for(int c=0; c<r; c++)
        {
            sum2=sum2+A[r][c];
        }
    }
    printf("%d\n%d",sum1,sum2);
}



