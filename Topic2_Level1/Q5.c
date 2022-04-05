#include <stdio.h>
int main()
{
    int angle1,angle2,angle3;
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    if(angle1+angle2+angle3 == 180){
        printf("Pizza Slice is Valid");
    }
    else{
        printf("Pizza Slice is Not Valid");
    }
	return 0;
}