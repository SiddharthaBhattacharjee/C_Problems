#include <stdio.h>
int main()
{
    int number1,number2;
    scanf("%d%d",&number1,&number2);
    if(number1>number2) printf(">");
    else if(number1==number2) printf("=");
    else printf("<");
	return 0;
}