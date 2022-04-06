#include <stdio.h>
#include <math.h>
int main()
{
    double n,v1,v2;
    scanf("%lf%lf%lf",&n,&v1,&v2);
    if(2*n/v2>(sqrt(2)*n)/v1){
        printf("Stairs");
    }
    else{
        printf("Elevator");
    }
	return 0;
}