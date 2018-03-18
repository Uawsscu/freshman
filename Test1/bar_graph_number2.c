#include<stdio.h>
void main()
{
    int N;
    while (1)
    {
        scanf("%d",&N);
        if (N<=0)
        {
            break;
        }

        else if (N>5)
        {
            if (N%10==0)
            {
                for (int i=1; i<N/5; i++)
                {
                    for (int dok=0; dok<4; dok++)
                    {
                        printf("*");
                    }
                    printf("X");
                }
            }
            else
            {
                for (int i=0; i<N/5; i++)
                {
                    for (int dok=0; dok<4; dok++)
                    {
                        printf("*");
                    }
                    printf("X");
                }
            }
        }

        if (N%5==0)
        {

            printf("****");

        }


        else
        {
            for (int dok_2=1; dok_2<N%5; dok_2++)
            {
                printf("*");
            }
        }
        printf("%d\n",N%10);
    }
    return 0;
}
