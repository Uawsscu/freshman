#include<stdio.h>

void main()
{
    int r;
int A[501];
    for (int i=0; i<501; i++)
    {
        scanf("%d",&A[i]);
        r++;
        if(A[i]<0||A[i]>=10)
        {
            break;
        }
    }
    for (int i=0; i<r-3; i++)
    {
        for(int tab=0; tab<r-3-i; tab++)
        {
            printf(" ");
        }
        for(int num=-1; num<i;num++)
        {
            printf("%d",A[i]);
        }
        printf("\n");
    }
}
