#include<stdio.h>
#include<limits.h>

struct
{
    char name[51];
    int score;
    int goalFor;
    int goalAgainst;
    int goalDiff;
} typedef TEAM;


void main()
{
    int K;
    scanf("%d",&K);
    TEAM T[K+1];


    char temp[10];
    gets(temp);

    for(int i=1; i<=K; i++)
    {
        gets(T[i].name);
        T[i].score=0;
        T[i].goalFor=0;
        T[i].goalAgainst=0;
        T[i].goalDiff=0;
    }

    for(int i=1; i<=K*(K-1); ++i)
    {
        int x,y,a,b;
        scanf("%d %d %d %d",&x,&y,&a,&b);
        T[x].goalFor+=a;
        T[x].goalAgainst+=b;
        T[x].goalDiff=a-b;
        T[y].goalFor+=b;
        T[y].goalAgainst+=a;
        T[y].goalDiff=b-a;
        if(a>b) T[x].score+=3;
        else if (a==b)
        {
            T[x].score+=1;
            T[y].score+=1;
        }
    }

    int maxF=INT_MIN;
    int maxS=INT_MIN;
    int maxD=INT_MIN;
    for(int i=1; i<=K; i++)
    {
        T[i].goalDiff=T[i].goalFor-T[i].goalAgainst;
        if(T[i].goalFor>maxF) maxF=T[i].goalFor;
        if(T[i].score>maxS) maxS=T[i].score;

    }
    for(int i=1; i<=K; i++)
    {
        if(T[i].goalDiff>maxD) maxD=T[i].goalDiff;
        if(T[i].score==maxS) printf("%s\n",T[i].name);
        if(T[i].goalFor==maxF) printf("%s\n",T[i].name);
    }
     for(int i=1; i<=K; i++)
    {
        if(T[i].goalDiff==maxD) printf("%s\n",T[i].name);
    }
}




