#include<stdio.h>
int A[100][100];
void main(){
int N;
scanf("%d",&N);
for(int r=0;r<2;r++){
    for(int c=0;c<N;c++){
    scanf("%d",&A[r][c]);
}}
int Ans=0,sum=0;
for(int r=0;r<1;r++){
    for(int c=0;c<N;c++){
            Ans=A[0][c]*A[1][c];
    sum=sum+Ans;
}
}
printf("%d",sum);
}
