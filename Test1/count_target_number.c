#include<stdio.h>
void main()
{
    int n,x;
    int sum=0;
    scanf("%d",&n);
    int number;

    while (1)
    {
        scanf("%d",x);
        number=n;

        if (x==number)
        {
            sum=sum+1;
        }
        if (x==0)
        {
            break;
        }
    }
    if (sum>0)
    {
        printf("%d",sum);
    }
    else
    {
        printf("None");
    }
}
