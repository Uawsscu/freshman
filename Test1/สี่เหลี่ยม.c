#include<stdio.h>
void main()
{
    int N;
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        printf("*");
    }
    printf("\n");
    for(int j=0; j<N/2-1; j++)
    {
        printf("*");
        for(int tab=0; tab<j; tab++)
        {
            printf(" ");
        }
        printf("*");
        for(int tab2=4; tab2<N-j*2; tab2++)
        {
            printf(" ");
        }
        printf("*");
        for(int tab3=0; tab3<j; tab3++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    printf("*");
    for(int mid=0; mid<N/2-1; mid++)
    {
        printf(" ");
    }
    printf("*");
    for(int mid=0; mid<N/2-1; mid++)
    {
        printf(" ");
    }
    printf("*\n");
///
    for(int j=0; j<N/2-1; j++)
    {
        printf("*");
for(int tab=0;tab<N/2-2-j;tab++){
    printf(" ");
}
printf("*");
for(int tab2=-2;tab2<2*j-1;tab2++){
    printf(" ");
}
printf("*");
for (int tab3=0;tab3<N/2-2-j;tab3++){
    printf(" ");
}
printf("*\n");
    }
///
    for(int i=0; i<N; i++)
    {
        printf("*");
    }
}


