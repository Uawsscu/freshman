#include<stdio.h>
#include<limits.h>
int main()
{
    int x;
    int sumx=0;
    int sumy=0;
    int i =0;
    while(i<8)
    {
        int x;
        scanf("%d",&x);
        if(x%2==0)
        {
            sumx = sumx+x;
        }
        else {
            sumy =sumy+x;
        }
        ++i;
    }
    if (sumx>sumy){
        printf("even\n %d\n %d\n",sumx,sumy);
    }
   if  (sumx<sumy) {
        printf("odd\n %d\n %d\n",sumx,sumy);
    }
    else
        printf("equal\n %d\n %d\n",sumx,sumy);
    return 0;
    }
