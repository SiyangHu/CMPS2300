#include <stdio.h>

int main(){
    double idle_time[7];
    double total_idle_time = 0;
    int minutes_in_a_week = 10080;
    int max_idle = 1;
    int min_idle = 1;
    
    for (int i = 1; i <=7; i++){
        printf("Please enter the idle time on day %d: ", i);
        scanf("%lf", &idle_time[i]);
        total_idle_time = total_idle_time + idle_time[i];
        if(idle_time[i] > idle_time[max_idle]){
            max_idle = i;
        }
        if(idle_time[i] < idle_time[min_idle]){
            min_idle = i;
        }
    }
    double perc = total_idle_time / minutes_in_a_week * 100;
    double avg = total_idle_time / 7;
    
    // Print the user input on idle time on each day
    for (int i = 1; i <=7; i++){
        printf("%lf\n",idle_time[i]);
    }
    
    // Print the answers
    printf("The total idle time is %lf minutes.\n", total_idle_time);
    printf("The performance rate is %lf%%. \n", perc);
    printf("The average idle time is %lf minutes. \n", avg);
    printf("Day %d has the highest workload and day %d has the lowest workload. \n", min_idle, max_idle); // max idle time means lowest workload. 
    
    return 0;
}