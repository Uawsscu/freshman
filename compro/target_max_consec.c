#include<stdio.h>
int main() {
    int target,num;
    scanf("%d",&target);
    int consec=0;
    int maxConsec=0;
    while(1) {
        scanf("%d",&num);
        if(num==target) {
            ++consec;
        } else {
            if(consec > maxConsec)
                maxConsec=consec;

            consec=0;
            consec=x
        }
        if(num==0)
            break ;
    }

    printf("%d\n",maxConsec);
    printf("%d",x);
    return 0;
}
