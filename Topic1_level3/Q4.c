#include <stdio.h>
int main()
{
    float distance,meter,feet,inches,centimeter;
    scanf("%f",&distance);
    meter = distance*1000.0;
    feet = distance*3280.84;
    inches = distance*39370.1;
    centimeter = distance*100000;
    printf("%.2f m\n",meter);
    printf("%.2f ft\n",feet);
    printf("%.2f in\n",inches);
    printf("%.2f cm",centimeter);
	return 0;
}