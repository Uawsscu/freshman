#include<stdio.h>
#include<limits.h>
int A[10000];
void main()
{
    int N;
    scanf("%d",&N);
    for(int i=1; i<N+1; i++)
        scanf("%d",&A[i]);

    int sum=0;
    for(int i=1; i<N+1; i++)
    {
        sum++;
        for(int j=i+1; j<N+1; j++)
        {
            if (A[i]<A[j])
            {
                A[i]=sum;
            }
            else
            {
                A[i]=0;
                sum=0;
            }
        }
    }
    A[N]=0;
    int max=INT_MIN;
    for(int i=1; i<N+1; i++)
        if(A[i]>max) max=A[i];

    if (max==0) printf("No Valve in crease");
    else printf("%d",max);
}
