#include<stdio.h>
void main()
{
    int x,y;
    int i=0;
    scanf("%d %d",&x,&y);
    printf("%d",x);
    while (i<x&&i<y)
    {
        if (x>y)
        {
            x--;
            printf("%d",x);
        }


        else if(y>x)
        {
            x++;
            printf("%d",x);
        }
        i++;
    }
    if (x>y)
    {
        printf("%d ",y);
    }
}
