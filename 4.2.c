#include <stdio.h>

int main(){
    int N,i;
    int passSum = 0;
    int failCount = 0;
    
    printf("Enter number of students: ");
    if(scanf("%d", &N) != 1){
        return 1;
    }

    int score[N];

    for(i = 0; i < N; i++){
        printf("Enter score for student %d: ", i + 1);
        if(scanf("%d", &score[i]) != 1){
            return 1;
        }

        if(score[i] >= 50){
            passSum += score[i];
        }
        else{
            failCount++;
        }
    }

    printf("Passing Score Sum: %d\n", passSum);
    printf("Failing Student Count: %d\n", failCount);

    return 0;
}