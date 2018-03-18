#include<stdio.h>
void main()
{
    int N;
    scanf("%d",&N);
    for (int ONE=0; ONE<N; ++ONE)
    {
        printf ("*");
    }
    printf("\n*");

    for(int TWO=2; TWO<N; ++TWO)
    {
        printf(" ");
    }
    printf("*\n");

    for (int THREE=4; THREE<N; ++THREE)
    {
        printf("* ");
        for(int i=4; i<N; ++i)
        {
            printf("*");
        }
        printf(" *\n");
    }
    printf ("*");

    for (int FOUR=2; FOUR<N; ++FOUR)
    {
        printf(" ");
    }
    printf("*\n");

for (int FIVE=0;FIVE<N;++FIVE){
    printf("*");
}
       }


