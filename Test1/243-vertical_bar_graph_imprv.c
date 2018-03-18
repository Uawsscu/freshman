#include<stdio.h>
void main()
{
    int N;
    int A[100];
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
    int max=0;
    for(int i=0; i<N; i++)
    {
        if(A[i]>max) max=A[i];
    }

    for(int i=max; i>0; i--)
    {
        for(int j=0; j<N; j++)
        {
            if(i>A[j])
            {
                printf(" ");
            }
            else
            {
                if(i%10!=0&&i%5!=0) printf("*");
                if (i%5==0&&i%10!=0) printf("5");
                else if (i%10==0) printf("0");


            }

        }printf("\n");
    }
}

