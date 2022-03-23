#include <stdio.h>
int main()
{
    double salaryperday,totsalary;
    int hour;
    scanf("%d",&hour);
    scanf("%lf",&salaryperday);
    totsalary = hour*salaryperday;
    printf("%.2lf",totsalary);
	return 0;
}