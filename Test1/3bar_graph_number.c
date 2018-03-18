#include<stdio.h>
void main()
{
    int N;
    while (1)
    {
        scanf("%d",&N);
        if(N<=0)
        {
            break;
        }
        for(int i=0; i<(N-1)/5; i++)
        {
            for(int dok=0; dok<4; dok++)
            {
                printf("*");
            }

            printf("X");

        }

            for(int i=0; i<(N)%5; i++)
            {
                for(int buttom=0; buttom<i; buttom++)
                {
                    printf("*");
                }
            }

        printf("%d",N%10);
    }

}
