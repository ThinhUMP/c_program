/*
    Input seconds, output the format: days: x hours: y seconds: z
*/

#include <stdio.h>

int main(){
    printf("Input seconds\n");
    int seconds;
    scanf("%d", &seconds);
    int days = seconds/(3600*24);
    int hours = (seconds - days*24*3600)/3600;
    seconds = seconds - days*24*3600 - hours*3600;
    printf("Days: %d Hours: %d Seconds: %d", days, hours, seconds);
    return 0;
}