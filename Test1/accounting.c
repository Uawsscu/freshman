#include<stdio.h>
int main()
{
    int x,y;
    int income=0,sum_income=0,pay=0,sum_pay=0,account=0;

    while (1)
    {
        scanf("%d",&x);
        if (x==0)
        {
            break;
        }
        scanf("%d",&y);
        if (x==1)
        {
            income=income+1;
            sum_income=sum_income+y;
        }
        else
        {
            pay=pay+1;
            sum_pay=sum_pay+y;
        }

    }
    account=sum_income-sum_pay;
    printf("%d %d\n%d %d %d",income,pay,sum_income,sum_pay,account);
    return 0;
}
