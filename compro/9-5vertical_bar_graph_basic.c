#include<stdio.h>
void main()
{
    int max=0;
    int N;
    int A[100];

    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }

    for (int i=0;i<N;i++){
        if(A[i]>max) max=A[i];
    }

    for(int i=max;i>0;i--){
        for(int col=0;col<N;col++){
            if(i>A[col]) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}
