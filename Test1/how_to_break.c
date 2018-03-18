#include<stdio.h>
void main()
{
    int x;
    int sum=0;
    while (1)
    {
        scanf("%d",&x);
        if (x==0)
        {
            break;
        }
        else
        {
            sum=sum+1;

        }
    }

printf("%d",sum);
}
