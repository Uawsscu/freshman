#include<stdio.h>
int A[10001];
void main()
{
    int N;
 for(int i=0;i<=10000;i++){
    A[i]=0;
 }
 scanf("%d",&N);
 int num;
 for (int i=0;i<N;i++){
    scanf("%d",&num);
    A[num]++;
 }
 for (int i=0;i<=10000;i++){
        if(A[i]>0)printf("%d ",i);

 }
}


