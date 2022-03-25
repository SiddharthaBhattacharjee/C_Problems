#include <stdio.h>
int main()
{
    float base1,base2,height,area;
    scanf("%f %f %f",&base1,&base2,&height);
    area = (0.5)*(base1+base2)*height;
    printf("%.2f",area);
	return 0;
}