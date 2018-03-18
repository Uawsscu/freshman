#include<stdio.h>
#include<limits.h>

struct student
{
    char ID[11];
    int score;
} typedef STUDENT;

void main()
{
    int N,T;
    scanf("%d %d",&N,&T);
    STUDENT A[10],B[1000];

    int MAX=INT_MIN;
    int MIN;
    int sum[1000];
    for(int i=0; i<N; i++)
    {
        MIN=INT_MAX;
        sum[i]=0;
        scanf("%s",B[i].ID);
        for(int j=0; j<T; j++)
        {
            scanf("%d",&A[j].score);
            if(A[j].score<MIN) MIN=A[j].score;

            sum[i]+=A[j].score;
        }
        if(sum[i]>MAX) MAX=sum[i];
    }
    printf("%d\n",MAX);



for(int i=0;i<N;i++){
    if(sum[i]==MAX) printf("%s\n",B[i].ID);
}
}
