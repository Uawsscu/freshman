#include<stdio.h>
int A[100][100];
void main()
{

    int N,R,C;
    scanf("%d %d %d",&R,&C,&N);
    for(int r=1; r<=R; r++)
    {
        for(int c=1; c<=C; c++)
        {
            A[r][c]=0;
        }
    }
    ////
    int M,K;
    int sum=0;
    for(int i=1; i<=N; i++)
    {sum++;
            scanf("%d %d",&M,&K);
A[M][K]=sum;
        }

    for(int r=1; r<=R; r++)
    {
        for(int c=1; c<=C; c++)
        {
            printf("%d ",A[r][c]);
        }
        printf("\n");
    }


}

