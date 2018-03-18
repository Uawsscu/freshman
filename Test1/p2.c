#include<stdio.h>
void main()
{
    int N;
    scanf ("%d",&N);

    for(int i=0; i<N; ++i)
    {
        for(int col=0; col<N-i; ++col)
        {
            printf("*");
        }
        printf("\n");
    }
}
