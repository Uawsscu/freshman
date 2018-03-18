#include<stdio.h>
#include<limits.h>
void main(){
int A[50][50];
int R,C;

scanf("%d %d",&R,&C);
for (int r=0;r<R;r++){
    for(int c=0;c<C;c++){
        scanf("%d",&A[r][c]);
    }
}

///
for (int i=0;i<C;i++){
        int max=INT_MIN;
    for (int j=0;j<R;j++){
        if(A[j][i]>max) max=A[j][i];
    }
    printf("%d ",max);
}

printf("\n");
///

for (int i=0;i<R;i++){
  int max2=INT_MIN;
    for (int j=0;j<C;j++){
        if(A[i][j]>max2) max2=A[i][j];
    }

    printf("%d ",max2);
}
}

