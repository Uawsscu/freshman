#include<stdio.h>
int main() {
    int before=0;
    int x;
    int consec=0;
    int maxConsec=0;
    int value=0;
    while (1) {
        scanf ("%d",&x);
        if(x==before) {
            ++consec;
        } else {
            consec=1;
        }
        if(consec>maxConsec) {
            maxConsec=consec;
            value=x;
        }
        before=x;
        if(x==0) {
            break;
        }
    }
    printf("%d\n%d\n",maxConsec,value);
    return 0;
}

