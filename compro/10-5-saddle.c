#include<stdio.h>
int main(){
    int row, r, col, c;
    scanf("%d %d",&r, &c);
    int a[r][c],b[r][c];
    int count = 0;
    for(row=0 ; row<r ; row++){
        for(col=0 ; col<c ; col++){
            scanf("%d",&a[row][col]);
        }
    }
    int max,min,rr,cc;
    for(row=0 ; row<r ; row++){
            /// maxrow&&mincol
        for(col=0 ; col<c ; col++){
            int max = 0;
            for(int x=0 ; x<r ; x++){
                if(max<a[x][col]){
                    max=a[x][col];

                }

            }
//          printf("max=%d a=%d ",max,a[row][col]);
//            if(max<=a[row][col]){
//                max=a[row][col];
//                printf("(%d %d) = %d(maxrow) --  ",row,col,max);
//           }


            int min=10000;
            for(int y=0 ; y<c ; y++){
                if(min>a[row][y]){
                    min=a[row][y];
                }

            }
//            printf("min=%d a=%d ",min,a[row][col]);
//            if(min>=a[row][col]){
//                min=a[row][col];
//                printf("(%d, %d) = %d  (mincol) \n",row,col,min);
//            }

            if(max<=a[row][col]&&min>=a[row][col]){
                printf("(%d, %d) = %d \n",row,col,a[row][col]);
                count++;
            }
        }

        ///maxcol&&minrow
        for(col=0 ; col<c ; col++){
            int min = 10000;
            for(int x=0 ; x<r ; x++){
                if(min>a[x][col]){
                    min=a[x][col];

                }

            }
/*          printf("max=%d a=%d ",max,a[row][col]);
            if(max<=a[row][col]){
                max=a[row][col];
                printf("(%d %d) = %d(maxrow) --  ",row,col,max);
           }
*/

            int max = 0;
            for(int y=0 ; y<c ; y++){
                if(max<a[row][y]){
                    max=a[row][y];
                }

            }
/*            printf("min=%d a=%d ",min,a[row][col]);
            if(min>=a[row][col]){
                min=a[row][col];
                printf("(%d, %d) = %d  (mincol) \n",row,col,min);
            }
*/
            if(min>=a[row][col]&&max<=a[row][col]){
                printf("(%d, %d) = %d \n",row,col,a[row][col]);
                count++;
            }
        }


    }




    if(count==0){
        printf("None");
    }

}

/***
3 4
1 2 3 3
9 5 6 7
7 4 9 2

4 4
7 5 3 4
2 5 4 2
9 7 3 1
5 1 2 5
*/
