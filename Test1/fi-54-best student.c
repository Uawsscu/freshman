#include<stdio.h>
#include<limits.h>

struct student
{
    char Name[51];
    char last[51];
    int score[5];

} typedef STUDENT;

void main()
{
    int result[300];
    int N;
    STUDENT A[300];
    scanf("%d",&N);
int max=INT_MIN;
    for(int i=0; i<N; i++)
    {
        int sum=0;
        int min=INT_MAX;
        scanf("%s %s",A[i].Name,A[i].last);
        for(int j=0; j<5; j++)
        {
            scanf("%d",&A[i].score[j]);
            if(A[i].score[j]<min) min = A[i].score[j];
            sum+=A[i].score[j];
        }
        result[i]=sum-min;
        if(result[i]>max) max=result[i];
    }
    printf("%d\n",max);
for(int i=0;i<N;i++){
        if(result[i]==max) printf("%s %s\n",A[i].Name,A[i].last);

}
}
