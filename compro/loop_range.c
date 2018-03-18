#include<stdio.h>
void main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        printf("Invalid input");
    }
    else
    {
        while(x<=y)
        {
            printf("%d ",x);
            x=x+1;
        }
    }
}
