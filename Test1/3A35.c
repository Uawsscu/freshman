#include<stdio.h>
void main()
{
    int N;
    scanf("%d",&N);
    for (int i=0; i<(N/2)+1; i++)
    {
        for(int A=0; A<i+1; A++)
        {
            printf("A");
        }
        for (int ONE=0; ONE<N/2-i; ONE++)
        {
            printf("1");
        }
        printf("\n");
    }
    for (int i=0; i<N/2; i++){
        for (int buttom=0;buttom<(N/2)-i;buttom++){
            printf("A");
        }
        for (int dok=0;dok<i+1;dok++){
            printf("*");
        }
        printf("\n");
    }
}
