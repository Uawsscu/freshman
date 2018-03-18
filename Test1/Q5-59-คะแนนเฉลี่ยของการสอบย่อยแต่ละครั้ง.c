#include<stdio.h>
void main(){
int A[500][10];
int M,N;
scanf("%d %d",&M,&N);
for (int i=0;i<M;i++){
    for(int j=0;j<N;j++){
        scanf("%d",&A[i][j]);
    }
}

for (int i=0;i<N;i++){
        int sum=0;
    for (int j=0;j<M;j++){
        sum=sum+A[j][i];
    }
printf("%d ",sum);
}
printf("\n");
for (int i=0;i<N;i++){
        double sum=0;
    for (int j=0;j<M;j++){
        sum=sum+A[j][i];
    }

printf("%.2f ",sum/M);
}
}
