#include<stdio.h>
void main(){
int C,R;
scanf("%d %d",&R,&C);
int A[R][C];
for(int row=0;row<R;row++){
    for(int col=0;col<C;col++){
        scanf("%d",&A[row][col]);
    }
}

for(int row=0;row<C;row++){
    for(int col=0;col<R;col++){
        printf("%d ",A[col][row]);
    }
    printf("\n");
}

}
