#include<stdio.h>
void main()
{
    int W,X,Y,Z;
    int N;
    int A[100];
    int aCol[100];

    scanf("%d %d %d %d %d",&W,&X,&Y,&Z,&N);
    for (int i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }

    int sum=0,count=0;
    for (int i=0; i<N; i++)
    {
        if(A[i]==W&&A[i+1]==X&&A[i+2]==Y&&A[i+3]==Z)
        {
            sum++;
        }
    }
    printf("%d\n",sum);

    for (int i=0; i<N; i++)
    {
        if(A[i]==W&&A[i+1]==X&&A[i+2]==Y&&A[i+3]==Z)
        {
            printf("%d ",i);
        }
    }
}

