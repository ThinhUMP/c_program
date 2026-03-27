#include<stdio.h>

double power(double b, unsigned n);



int change(int x){
    x = 10;
    return x;
}

// define these functions

/*
yy is leap if yy can be divided by 4 but not by 100
or yy can be divided by 400
*/

int isleap(int year){
    return (year%4==0 && year%100!=0 || year%400==0);
}

int daysPerMonth(int month, int year){
    if (month<0 && month>12){
        return 0;
    }
    else if (month == 2){
        if (isleap(year)){
            return 29;
        }
        else
            return 28;
    }

    else if (month==4 || month ==6|| month==9|| month==11){
        return 30;
    }
    else
        return 31;
}

int validDate(int day, int month, int year){
    if (daysPerMonth(month, year)==0 || day>daysPerMonth(month, year))
        return 0;
    else if (day<0 || day>31)
        return 0;
    else
        return 1;
}

int ordinal(int day, int month, int year){
    if (!validDate(day, month, year)){
        return 0;
    }
    else{
        int ordinal=0;
        for (int i=1;i<month;i++){
            ordinal += daysPerMonth(i, year);
        }
        ordinal += day;
        return ordinal;
    }
    
}

int main(){
    if (!isleap(1968))
        printf("error: 1968 is leap year\n");
    if (daysPerMonth(2, 1968)!=29)
        printf("error: Feb 1968 is 29 days\n");
    if (daysPerMonth(4, 1968)!=30)
        printf("error: Apr 1968 is 30 days\n");
    if (validDate(31,11,1968))
        printf("error: Nov 31 1968 is not a valid date\n");
    if (ordinal(1,3,1968)!=61)
        printf("error: Mar 1, 1968 is day n.61 in the year\n");
    // printf("%f\n", power(2.5, 3));
}

