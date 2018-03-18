#include<stdio.h>
int A[10000];
void main()
{
    int N,K;
    int max=0;
   scanf("%d %d",&N,&K);
   for(int i=0;i<N;i++){
    scanf("%d",&A[i]);
   }
   for(int i=1;i<N;i++){
    if(A[i-1]+A[i]+A[i+1]>max) max=A[i-1]+A[i]+A[i+1];
   }
   printf("%d",max);
}
