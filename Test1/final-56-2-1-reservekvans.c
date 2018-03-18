 #include<stdio.h>
 #include<limits.h>
 int main(){
    int K, N;
    scanf("%d %d", &K, &N);

    int day[K];
    for(int i=1 ; i<=K ; i++){
        day[i]=0;
    }

    int x[N],day_print[N];

    for(int i=0 ; i<N ; i++){
        scanf("%d",&x[i]);
    }
    for(int i=0 ; i<N ; i++){
        int min=INT_MAX, min_day=INT_MAX;
        for(int j=1 ; j<=K ; j++){
           if(min_day>day[j]){
                min=j;
                min_day=day[j];

            }
        }

        day[min]+=x[i];
        day_print[i]=min;
    }
    for(int i=0  ; i<N ; i++)
        printf("%d\n", day_print[i]);

 }
