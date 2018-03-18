#include<stdio.h>
#include<limits.h>
int main()
{
    int max =INT_MIN;
    int min =INT_MAX;
    int i =0;
    while(i<8)
    {
        int x;
        scanf("%d",&x);
        if(x>max)
        {
            max = x;
        }
        if(x < min && x > 0)
        {
            min = x;
        }
        ++i;
    }
    printf("%d\n",max);
    printf("%d\n",min);
    return 0;
    }
