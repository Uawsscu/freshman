#include<stdio.h>
int A[1000][1000];
void main()
{
    int R,C;

    scanf("%d %d",&R,&C);
    for(int row=0; row<R; row++)
    {
        for(int col=0; col<C; col++)
        {
            scanf("%d",&A[row][col]);
        }
    }

//
    int sum1=0;
    for(int row=0; row<R/2; row++)
    {
        for(int col=0; col<C/2; col++)
        {
            sum1=sum1+A[row][col];
        }
    }
    int sum2=0;
    for(int row=0; row<R/2; row++)
    {
        for(int col=C/2; col<C; col++)
        {
            sum2=sum2+A[row][col];
        }
    }
    int sum3=0;
    for(int row=R/2; row<R; row++)
    {
        for(int col=0; col<C/2; col++)
        {
            sum3=sum3+A[row][col];
        }
    }
    int sum4=0;
    for(int row=R/2; row<R; row++)
    {
        for(int col=C/2; col<C; col++)
        {
            sum4=sum4+A[row][col];
        }
    }

    printf("%d %d\n%d %d",sum1,sum2,sum3,sum4);
}
