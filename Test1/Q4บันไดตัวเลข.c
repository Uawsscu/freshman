#include<stdio.h>
void main()
{
    int N;
    int A[10];
    scanf("%d",&N);
    for (int i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
    for (int i=0;i<=N; i++)
    {
            for(int col=0; col<i; col++)
            {
                printf("%d",A[N-i]);
            }
            printf("\n");
        }
    }

