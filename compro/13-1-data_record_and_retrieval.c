#include<stdio.h>
struct student {
    char id[9];
    char name[31];
    char surname[51];
    int year;
} typedef Student;

Student std[20000];
void main() {
    int N,Y;

    scanf("%d",&N);
    for (int i=0; i<N; i++) {
        scanf("%s",std[i].id);
        scanf("%s",std[i].name);
        scanf("%s",std[i].surname);
        scanf("%d",&std[i].year);
    }
    scanf("%d",&Y);
    int sum=0;
    for (int i=0; i<N; i++) {
        if(std[i].year==Y) {
            printf("%s %s %s\n",std[i].id,std[i].name,std[i].surname);
            sum++;
        }


    }
    if(sum==0) printf("None");

}

