#include<stdio.h>
void main()
{
    int day,N,i=0;
    int dayA=0,dayB=0,dayC=0;
    scanf("%d",&N);
    while (i<N)
    {
        scanf("%d",&day);
        if(dayA<=dayB&&dayA<=dayC)
        {
            printf("A\n");
            dayA=dayA+day;
        }
        else if (dayB<=dayC)
        {
            printf("B\n");
            dayB=dayB+day;
        }
        else
        {
            printf("C\n");
            dayC=dayC+day;
        }
        i++;
    }
}
