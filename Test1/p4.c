#include<stdio.h>
void main()
{
    int N;
    scanf("%d",&N);
    for (int i=0; i<N; i++)
    {
        for (int tab=1; tab<N-i; tab++)
        {
            printf(" ");

        }
        for (int col=0; col<i+1;col++)
        {
            printf("*");

        }
        printf("\n");
    }
}
