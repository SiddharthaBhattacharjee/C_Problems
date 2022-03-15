#include <stdio.h>
#include <math.h>
int main()
{
    int unitconsumed,costperunit;
    scanf("%d",&unitconsumed);
    scanf("%d",&costperunit);
    printf("%d",(int) pow(unitconsumed,costperunit));
	return 0;
}