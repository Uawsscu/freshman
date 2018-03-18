#include<stdio.h>
int A[501][11];
void main(){

int M,N;
scanf("%d %d",&M,&N);
for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
        scanf("%d",&A[i][j]);
    }
}
float Avg[N];
for(int r=0;r<N;r++){
        double sum=0;
    for(int c=0;c<M;c++){
        sum+=A[c][r];
    }
printf("%.f ",sum);
Avg[r]=sum/M;
}
printf("\n");
for(int r=0;r<N;r++){
    printf("%.2f ",Avg[r]);
}
}
