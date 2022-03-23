#include <stdio.h>
int main()
{
    int seconds,days,hours,minutes;
    scanf("%d",&seconds);
    minutes = seconds/60;
    seconds = seconds - minutes*60;
    hours = minutes/60;
    minutes = minutes - hours*60;
    days = hours/24;
    hours = hours - days*24;
    printf("The Duration is %d days %d hours %d minutes %d seconds",days,hours,minutes,seconds);
	return 0;
}