#include<stdio.h>
void main()
{
    int x;
    int odd_max=0;
    int pos_min=50001;
    int sum=0;

    while (1)
    {
        scanf("%d",&x);

        if (x<=0)
        {
            break;
        }
        if (x%2!=0)
        {
            if (x>odd_max)
            {
                odd_max=x;
            }
            if (x<pos_min)
            {
                pos_min=x;
            }

        }
    }
    sum=odd_max-pos_min;
    printf("%d\n%d\n%d",odd_max,pos_min,sum);
}
