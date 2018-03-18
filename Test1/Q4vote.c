#include<stdio.h>
void main(){
int N,K;
int A[101];
scanf("%d %d",&N,&K);
int num;

for(int i=1;i<=N;i++){
    A[i]=0;
}

for(int i=1;i<=K;i++){
    scanf("%d",&num);
    A[num]++;
}
int max=-1;
int x=-1;

for(int i=1;i<=N;i++){
    if(A[i]>max){
        max=A[i];
        x=i;
    }
}
printf("%d\n%d",x,max);
}
