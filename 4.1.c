#include <stdio.h>

int main(){
    int N,i;

    if(scanf("%d", &N) != 1){
        return 1;
    }

    int score[N];

    for(i = 0; i < N; i++){
        if(scanf("%d", &score[i]) != 1){
            return 1;
        }
    }
    printf("OutPut: ");
    for(i = N - 1; i >= 0; i--){
        printf("%d ", score[i]);
    }   

    return 0;
}