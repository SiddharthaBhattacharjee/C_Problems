#include <stdio.h>
int main()
{
    int currency;
    scanf("%d",&currency);
    (currency%2!=0)?printf("Odd Currency"):printf("Even Currency");
	return 0;
}