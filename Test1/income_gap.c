#include<stdio.h>
#include<limits.h>
int A[10000][5];
void main()
{
    int N;
    scanf("%d",&N);

    int MAXX=INT_MIN;
    int MINN=INT_MAX;
    for(int r=0; r<N; r++)
    {
        for(int c=0; c<5; c++)
        {
            scanf("%d",&A[r][c]);
        }
    }

    int diff;
    for(int i=0; i<N; i++)
    {
        int max=INT_MIN;
        int min=INT_MAX;
        for(int j=0; j<5; j++)
        {
            if(A[i][j]>max) max=A[i][j];
            if(A[i][j]<min) min=A[i][j];
        }
        diff=max-min;
        if(diff>MAXX) MAXX=diff;
        if(diff<MINN) MINN=diff;

    }
 printf("%d %d %d",MAXX,MINN,MAXX-MINN);


}

