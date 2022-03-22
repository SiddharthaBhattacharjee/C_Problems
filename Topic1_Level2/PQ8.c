#include <stdio.h>
int main()
{
    float basic,sal;
    scanf("%f",&basic);
    sal = basic + (basic*0.8) + (basic*0.4);
    printf("%.2f",sal);
	return 0;
}