#include<stdio.h>
struct student
{
    char ID[6];
    int score;
} typedef STUDENT;

void main()
{
    int N;
    scanf("%d",&N);
    STUDENT A[N];

    int sum=0,avg=0;
    for(int i=0; i<N; i++)
    {
        scanf("%s %d",A[i].ID,&A[i].score);
        sum+=A[i].score;
    }
    avg=sum/N;
    int pass=0;
    for(int i=0; i<N; i++)
    {
        if(A[i].score>avg) pass++;
    }
    printf("%d\n",pass);

    for(int i=0; i<N; i++)
    {
        if(A[i].score>avg)
        {
            printf("%s\n",A[i].ID);
        }
    }
}
