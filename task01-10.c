#include <stdio.h>
int main () {
    int days, weeks, years, remain_days;
    printf("please enter the days:");
    scanf("%d", &days);
    //calculating the years

        years = days / 365;     //leap years must be ignored!!
    
    //calculating the weeks
        weeks = (days%365)/7;
    //then we can calculate the remaining days by using the equation in the hint
        remain_days = days -(years*365)-(weeks*7);
    //passing the results to the user
    printf("the days you entered equals about: \n");
    printf("%i years \n", years);
    printf("%i weeks \n", weeks);
    printf("%i days \n", remain_days);
return 0;

}