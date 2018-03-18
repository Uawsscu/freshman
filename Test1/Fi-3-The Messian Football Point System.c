#include<stdio.h>
struct football{
char score[38];
int sumD;
int sumW;
int sumL;
}typedef FOOTBALL;

void main(){
    FOOTBALL B[1000];
int N;

scanf("%d",&N);
char D,L,W;
for(int i=0;i<N;i++){

        scanf("%C",&B[i].score);
     if(B[i].score==D) B[i].sumD++;
        else if(B[i].score==W) B[i].sumW++;
        else if(B[i].score==L) B[i].sumL++;
}


for(int i=0;i<N;i++){
    for(int c=0;c<38;c++){
        printf("%d %d %d\n",B[i].sumW,B[i].sumD,B[i].sumL);
    }
}
}
