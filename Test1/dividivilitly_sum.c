#include<stdio.h>
int main()
{
    int x,y,k;
    int sumx=0;
    int sumy=0;
    int sumxy=0;

    scanf ("%d %d",&x,&y);

    while (1)
    {
        scanf("%d",&k);
        if (k<=0){
            break;
        }

        if (k%x==0&&k%y!=0)
        {
            sumx=sumx+k;
        }
        if (k%y==0&&k%x!=0)
        {

            sumy=sumy+k;
        }
        if(k%x==0||k%y==0)
        {
            sumxy=sumxy+k;
        }

    }
    printf("%d\n",sumx);
    printf("%d\n",sumy);
    printf("%d\n",sumxy);

}
