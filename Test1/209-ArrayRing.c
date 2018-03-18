#include<stdio.h>
int A[1000][1000];

void main()
{
    int N;
    scanf("%d",&N);
    for (int r=0; r<N; r++)
    {
        for(int c=0; c<N; c++)
        {
            scanf("%d",&A[r][c]);
        }
    }
    int count[1000];
    for(int i=1; i<=N/2+1; i++)
    {
        int sum1=0;
        for(int c=i-1; c<=N-i; c++)
        {
            int r=i-1;
            sum1=sum1+A[r][c];
        }

        int sum2=0;
        for(int c=i-1; c<=N-i; c++)
        {
            int r=N-i;
            sum2=sum2+A[r][c];

        }

        int sum3=0;
        for(int r=i; r-i<N-i*2; r++)
        {
            int c=i-1;
            sum3=sum3+A[r][c];
        }
        int sum4=0;
        for(int r=i; r-i<N-i*2; r++)
        {
            int c=N-i;
            sum4=sum4+A[r][c];
        }
        count[i]=sum1+sum2+sum3+sum4;



    }
    for(int i=N/2+1; i>0; i--)
    {
        if(i==N/2+1) printf("%d\n",count[i]/2);
        else printf("%d\n",count[i]);
    }
}


