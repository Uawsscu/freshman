#include<stdio.h>
void main(){
int K,N,x,W;
int sum=0,date=0,i=0;

scanf("%d",&K);
 scanf("%d",&N);
 W=K*100;
while (i<N){

    scanf("%d",&x);
    sum=sum+x;
    date=(sum+W-1)/W;
    printf("%d\n",date);
    i++;
}
}
