#include<stdio.h>
void main() {
    int k;
    while (1) {
        scanf("%d",&k);
        if (k<=0) {
            break;
        }

        for (int i=0; i<k; i++) {
            printf("*");
        }
        printf("\n");
    }
}
