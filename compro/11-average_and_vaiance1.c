#include<stdio.h>
const int N=8;
double averange(int* A) {
    double sum=0;
    for (int i=0; i<N; i++) {
        sum=sum+A[i];
    }
    return sum/N;
}

double sumV=0;
double variance(int* A,double avg){

for (int i=0;i<N;i++){
    sumV+=(A[i]-avg)*(A[i]-avg);
}
return sumV/(N-1);
}


int main () {
    int A[N];
    for(int i=0; i<N; i++) {
        scanf("%d",&A[i]);
    }
    double avg=averange(A);
    double var=variance(A,avg);
     printf("%.2f %.2f",avg,var);
}
