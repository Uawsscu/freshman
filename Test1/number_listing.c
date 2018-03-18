#include<stdio.h>

void main()
{
    int min=10001;
    int N,x;
    int A[5000];
    scanf("%d",N);

    for(int i=0; i<N; i++)
    {
        scanf("%d",A[i]);
        if (A[i]<min)
        {
            min=A[i];
        }
x=min;
    }printf("%d",x);

}

