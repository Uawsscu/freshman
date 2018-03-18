#include<stdio.h>
    ///output function name (input)
    double average(int* A, int length){///(int A[])
    double sum = 0.0f;
    int i;
    for(i=0 ; i<length ; ++i){
        sum +=A[i];
    }
    return sum/length;
}

double variance(int* A, double avg, int length){
    double sum = 0.0f;
    int i;
    for(i=0 ; i<length ; ++i){
        sum +=(A[i]-avg)*(A[i]-avg);
    }
    return sum/(length-1);
}
int main(){
    int length;
    scanf("%d",&length);
    int A[length];

    for(int i=0 ; i<length ; ++i){
        scanf("%d",&A[i]);
    }
    /// Find Average
    double avg = average(A,length);

    ///Find variance
    double var = variance(A,avg,length);

    printf("%.2f %.2f",avg,var);
    return 0;

    }

