#include<stdio.h>
void main()
{
    int N;
    scanf("%d",&N);
    for (int i=0; i<(N/2)+1; i++)
    {
        for(int one=0; one<i; one++)
        {
            printf("1");
        }
        for (int A=0; A<N-(i*2);A++)
        {
            printf("A");
        }
        for(int dok=0; dok<i; dok++)
        {
            printf("*");
        }
        printf("\n");
    }
}


