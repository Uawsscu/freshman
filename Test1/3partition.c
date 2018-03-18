#include<stdio.h>
void main ()
{
    int W,N;
    scanf("%d %d",&W,&N);
    for (int ONE=0; ONE<N; ++ONE)
    {
        for(int i=0; i<=W; ++i)
        {
            printf("*");
        }

    }

printf("*\n");
    for(int TWO=0; TWO<=N; ++TWO)
    {
        printf("*");
        for (int i=0; i<W; ++i)
        {
            printf(" ");
        }
    }

    printf("\n");
    for (int ONE=0; ONE<N; ++ONE)
    {
        for(int i=0; i<=W; ++i)
        {
            printf("*");
        }
    }
    printf("*");
}

