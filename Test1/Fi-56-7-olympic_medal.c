#include<stdio.h>
#include<limits.h>
struct olympic
{
    int ID;
    int gold;
    int silver;
    int copper;
    int sum2000;
} typedef OLYMPIC;

void main()
{
    int N;
    scanf("%d",&N);
    OLYMPIC A[N];

    for(int i=0; i<N; i++)
    {
        scanf("%d %d %d %d",&A[i].ID,&A[i].gold,&A[i].silver,&A[i].copper);
        A[i].sum2000=A[i].gold+A[i].silver+A[i].copper;
    }
    int maxG=INT_MIN;
    int maxS=INT_MIN;
    int maxC=INT_MIN;
    int maxSUM=INT_MIN;
    for(int i=0; i<N; i++)
    {
        if(A[i].gold>maxG) maxG=A[i].gold;
        if(A[i].silver>maxS) maxS=A[i].silver;
        if(A[i].copper>maxC) maxC=A[i].copper;
        if(A[i].sum2000>maxSUM) maxSUM=A[i].sum2000;
    }

    int num;
    for(int j=0; j<100; j++)
    {
        scanf("%d",&num);
        if(num<=0)
        {
            printf("good bye");
            break;
        }
        else if (num==1001)
        {
            for(int i=0; i<N; i++)
            {
                if(A[i].gold==maxG) printf("%d ",A[i].ID);
            }
            printf("\n");
        }


        else if (num==1002)
        {
            for(int i=0; i<N; i++)
            {
                if(A[i].silver==maxS) printf("%d ",A[i].ID);
            }
            printf("\n");
        }

        else if (num==1003)
        {
            for(int i=0; i<N; i++)
            {
                if(A[i].copper==maxC) printf("%d ",A[i].ID);
            }
            printf("\n");
        }

        else if (num==2000)
        {
            for(int i=0; i<N; i++)
            {
                if(A[i].sum2000==maxSUM) printf("%d ",A[i].ID);
            }
            printf("\n");
        }

        else if (num==3000)
        {
            for(int i=0; i<N; i++)
            {
                if(A[i].sum2000>0) printf("%d ",A[i].ID);
            }
        }

        else
        {
           int dee=0;
            for (int i=0; i<N; i++)
            {
                if (A[i].ID==num)
                {
                    printf("%d %d %d %d",A[i].gold,A[i].silver,A[i].copper,A[i].sum2000);
                    dee=1;
                    break ;
                }

            }if (dee==0) printf("invalid code");
        }





    }
}


