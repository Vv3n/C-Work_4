#include <stdio.h>
#define DAYS 7

int main(){
    int daily_temp[DAYS];
    int max_temp;
    int i;

    for(i = 0; i < DAYS; i++){
        printf("Enter temperature for Day %d: ", i + 1);
        scanf("%d", &daily_temp[i]);
    }

    max_temp = daily_temp[0];

    for(i = 1; i < DAYS; i++){
        if(daily_temp[i] > max_temp){
            max_temp = daily_temp[i];
        }

    }

    printf("\n--- DAILY TEMPERATURES REPORT ---\n");
    printf("Recorded Temperatures (C): ");
    for(i = 0; i < DAYS; i++){
        printf("%d ", daily_temp[i]);
    }
    printf("\n");
    printf("Maximum Temperature Found: %d C\n", max_temp);

    if(max_temp > 34){
        printf("Weather is HOT\n");

    }
    else if(max_temp >= 20){
        printf("Weather is MODERATE\n");
    }
    else{
        printf("Weather is COOL\n");
    }

    return 0;
}