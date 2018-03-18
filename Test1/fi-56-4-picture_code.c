#include<stdio.h>
void main()
{
    int N;
    scanf("%d",&N);
    int M,num,color;
    for(int i=0;i<N;i++){
        scanf("%d",&M);
        for(int j=0;j<M;j++){
            scanf("%d %d",&num,&color);
            for(int c=0;c<num;c++){
                if(color==1) printf("-");
                else  printf("#");
            }
        }
    }
}
