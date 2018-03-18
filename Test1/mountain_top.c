#include<stdio.h>
int M[1000][1000];
int main()
{
    int N;
    int row,col;
    int summax=0;
    scanf("%d",&N);
    for(row=0; row<N; row++)
    {
        for(col=0; col<N; col++)
        {
            scanf("%d",&M[row][col]);
        }
    }

    for(int r=0; r<N-2; r++)
    {
        for(int c=0; c<N-2; c++)
        {
            if(M[r+1][c+1]>M[r][c]&&
                    M[r+1][c+1]>M[r][c+1]&&
                    M[r+1][c+1]>M[r][c+2]&&
                    M[r+1][c+1]>M[r+1][c]&&
                    M[r+1][c+1]>M[r+1][r+2]&&
                    M[r+1][c+1]>M[r+2][c]&&
                    M[r+1][c+1]>M[r+2][c+1]&&
                    M[r+1][c+1]>M[r+2][c+2]&&
                    M[r+1][c+1]!=M[N-1][N-1])
            {
                summax++;
            }

        }
    }
    printf("%d\n",summax);
    for(int r=0; r<N-2; r++)
    {
        for(int c=0; c<N-2; c++)
        {

            if(M[r+1][c+1]>M[r][c]&&
                    M[r+1][c+1]>M[r][c+1]&&
                    M[r+1][c+1]>M[r][c+2]&&
                    M[r+1][c+1]>M[r+1][c]&&
                    M[r+1][c+1]>M[r+1][r+2]&&
                    M[r+1][c+1]>M[r+2][c]&&
                    M[r+1][c+1]>M[r+2][c+1]&&
                    M[r+1][c+1]>M[r+2][c+2])
            {
                printf("%d %d %d\n",M[r+1][c+1],r+1,c+1);
            }
        }
    }

}

