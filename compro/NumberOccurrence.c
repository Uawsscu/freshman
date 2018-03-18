
#include<stdio.h>

int x[2500000];
void main() {
    int K;
    int sumK=0;
    int test;
    scanf("%d",&test);
    x[test];

    for(int i=0; i<test; i++) {
        scanf("%d",&x[i]);
    }
    scanf("%d",&K);
    for(int i=0; i<test; i++) {

        if (x[i]==K) {
            sumK++;
            printf("%d ",i+1);


        }
    }
    if (sumK==0) {
        printf("0");

    }
}
