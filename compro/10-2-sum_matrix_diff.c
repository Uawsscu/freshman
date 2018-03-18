#include<stdio.h>
void main()
{
    int N;
    scanf("%d",&N);
    int A[N][N];
    for(int r=0; r<N; r++)
    {
        for(int c=0; c<N; c++)
        {
            scanf("%d",&A[r][c]);
        }
    }


    int sum=0,ans=0;
    for(int r=0; r<N; r++)
    {
        for(int c=0; c<N; c++)
        {
            ans=A[r][c]-A[c][r];

            if(ans<0)
            {
                ans=ans*(-1);
                sum=sum+ans;
            }
        }

    }
    printf("%d",sum);

}
