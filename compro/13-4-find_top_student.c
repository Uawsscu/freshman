#include<stdio.h>

struct student {
    int score[6];
    int sum;
} typedef STUDENT;

void main() {

    int N,K;
    STUDENT stu[1000];
    int indexMax;
    int maxSum=0;
    int max[6]= {0,0,0,0,0,0};

    scanf("%d %d",&N,&K);

    for(int i=0; i<N; i++) {
 stu[i].sum=0;
        for(int j=0; j<K; j++) {
            scanf("%d",&stu[i].score[j]);
            stu[i].sum+=stu[i].score[j];
            if(stu[i].score[j]>max[j]) {
                max[j]=stu[i].score[j];
            }
        }
        if(stu[i].sum>maxSum) {
            maxSum=stu[i].sum;
            indexMax=i;
        }
    }
    printf("%d\n",stu[indexMax].sum);
    int count=0;
    for(int j=0; j<K; j++) {
        if(stu[indexMax].score[j]==max[j]) {
            count++;
        }

    }printf("%d",count);
    return 0;
}
