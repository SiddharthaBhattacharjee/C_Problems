#include <stdio.h>
int main()
{
    float p,i,interest,amount;
    int t;
    scanf("%f%f%d",&p,&i,&t);
    interest = (p*i*t)/100;
    amount = p+interest;
    printf("Interest after %d Years = $%.2f\n",t,interest);
    printf("Total Amount after %d Years = $%.2f",t,amount);
	return 0;
}