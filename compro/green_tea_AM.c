#include<stdio.h>
void main()
{
    int x,y,w,s;
    int i=0;
    while (i<7)
    {
        scanf ("%d %d",&x,&y);
        if (x/250 <= y/15)
        {
            w=x/250;
            if (x%250==0)
            {
                printf("%d\n",w);
            }
            else
            {
                printf("%d water\n",w);
            }
        }
        else if (y/15 < x/250)
        {
            s=y/15;
            printf("%d\n",s);

        }
        i=i+1;
    }
}
