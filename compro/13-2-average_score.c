#include<stdio.h>
double A[10000];
void main(){

int N;
scanf("%d",&N);


for(int i=0;i<N;i++){
    scanf("%lf",&A[i]);
}
double sum=0,Ans=0;

for (int i=0;i<N;i++){
        if(A[i]>=0) sum=sum+A[i];
}
Ans=sum/N;
printf("%f",Ans);
}
