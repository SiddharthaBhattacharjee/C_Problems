#include <stdio.h>
int main()
{
    float height,bmi;
    int weight;
    scanf("%d",&weight);
    scanf("%f",&height);
    bmi = (float)weight/(height*height);
    printf("%.2f",bmi);
	return 0;
}