#include<stdio.h>
int N;
void main()
{

    char A[N][N];
    scanf("%d",&N);
    int row,col;
    for(int row=0; row<N; row++)
    {
        for(int col=0; col<N; col++)
        {
            A[row][col] = ' ';
        }
    }

    for (int row=0; row<N; row++)
    {
        A[row][0]='*';
        A[row][N-1]='*';
    }
    for (int col=0; col<N; col++)
    {
        //A[0][col]='*';
    //A[col][N-1]='*';
    }

    for(int row=1; row<N-1; row++)
    {

        A[row][row]='*';
    }

    for(int row=1; row<N; row++)
    {
        A[row][N+1-row]='*';

    }

    for(int row=0; row<N; row++)
    {
        for(int col=0; col<N; col++)
        {
            printf("%c",A[row][col]);
        }
        printf("\n");
    }

}
