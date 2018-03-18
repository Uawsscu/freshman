#include<stdio.h>
void main(){
int N;
scanf("%d",&N);
int A[N];
int sum=0;
for(int i=0;i<N;i++){
A[i]=sum;
sum++;
printf("%d ",A[i]);
}
printf("\n");

int sum2=9;
for(int r=N;r>2;r--){
    for(int tab=0;tab<r-2;tab++){
    printf("  ");
    }
    printf("%d\n",sum2%10);
    sum2++;
}
///
int x=N+N-2;
for (int i=0;i<N;i++){
    A[i]=x;
    x++;
    printf("%d ",A[i]%10);
}
}
