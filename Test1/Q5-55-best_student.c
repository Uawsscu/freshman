#include<stdio.h>
#include<limits.h>

struct student
{
    char id[9];
    char name[31];
    char surname[51];
    double Gpax;
} typedef STUDENT;

void main()
{
    STUDENT A[101];
    int N;
    scanf("%d",&N);

    int MAX;
    float maxGpax=0;
    for(int i=0; i<N; i++)
    {
        scanf("%s %s %s %lf",A[i].id,A[i].name,A[i].surname,&A[i].Gpax);
        if(A[i].Gpax>maxGpax)
        {
            MAX=i;
            maxGpax=A[i].Gpax;
        }
    }
    printf("%s %s %s %.2f",A[MAX].id,A[MAX].name,A[MAX].surname,A[MAX].Gpax);

}
