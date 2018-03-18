#include<stdio.h>
#include<limits.h>
void main()
{
    int max = INT_MIN;
    int min = INT_MAX;
    int i=0;
    while (i<8)
    {
        int x;
        scanf("%d",&x);
        if (x>max)
        {
            max=x;
        }
        if (x<min&&x>0){
            max=x
        }
        }
        ++i;
    }
    printf("max = %d\n",max);
    printf("min = %d\n",min);
    return 0;
}
