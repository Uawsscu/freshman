#include<stdio.h>
int isUnique(int *A, int N){
    for(int p=0 ; p<N-1 ; ++p){
        for(int q=p+1 ; q<N ; ++q){
            if(A[p] == A[q]){
                return 0;/// เท่ากัน กลับไปเป็นศูนย์
            }
        }
    }
    return 1;///ไม่ซ้ำก้เป็น 1

}
int A[10000];
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0 ; i<N ; i++){
        scanf("%d",&A[i]);
    }
    ///Print 0 or 1
    int Ans = isUnique(A,N);
    printf("%d",Ans);
    return 0;
}
