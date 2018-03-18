#include<stdio.h>
int main()
{

    int x,y;
    scanf("%d %d",&x,&y);
    if(x<y)
    {
        while(1)
        {
            if(x<=y)
            {
                printf("%d ",x++);
            }
            else
            {
                break ;
            }
        }
    }
    else if(x>=y)
    {
        while(1)
        {
            if(x>=y)
            {
                printf("%d ",x--);
            }
            else
            {
                break ;
            }
        }
    }


}
