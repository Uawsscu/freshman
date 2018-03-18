#include<stdio.h>
struct student {
    char id[6];
    double num[101];
} typedef Student;


void main() {
Student A[10001];
double sum=0;
double Ans=0;
    int N;
    scanf("%d",&N);
    for(int i=0; i<N; i++) {
        scanf("%s",A[i].id);
        scanf("%lf",&A[i].num);
     sum=sum+A[i].num;}

    Ans=sum/N;
    printf("%f",Ans);
}

/**
    int pass=0;
    for(int i=0; i<N; i++) {
        if(A[i].num>=Ans) pass++;
    }
    printf("%d\n",pass);
    for(int i=0; i<N; i++) {
        if(A[i].num>=Ans) printf("%s\n",A[i].id);
    }
}
*/
