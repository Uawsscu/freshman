#include<stdio.h>
void main()

{
    int N;
    scanf("%d",&N);
    for(int i=0; i<N; ++i)
    {
        for(int col=0; col<N-i; col++)
        {
            printf("*");
        }
        printf("\n");
        for(int tap=0; tap<i+1; tap++)
        {
            printf(" ");
        }
    }
}
