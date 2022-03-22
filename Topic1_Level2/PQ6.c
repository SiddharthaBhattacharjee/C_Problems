#include <stdio.h>
int main()
{
    float amount,rate,time,si;
    scanf("%f",&amount);
    scanf("%f",&rate);
    scanf("%f",&time);
    si = (amount*rate*time)/100;
    printf("%.4f",si);
	return 0;
}